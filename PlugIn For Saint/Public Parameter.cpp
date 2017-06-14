#include "stdafx.h"
#include "Public Parameter.h"
#include "SBEConnection.h"

int PublicParama::DTC_Read_Step;

#pragma region Saint Function

CSBEConnection PublicParama::EngineConnection;

CString PublicParama::CurrentDeviceList;

CString PublicParama::CurrentDeviceName;

CString PublicParama::DeviceList[MAX_DEVICES];

int PublicParama::CurrentDeviceID;

void PublicParama::InitializeConnection()
{
	if(EngineConnection.Connect("NGK Simulator For 358CT"))
	{
		//TRACE("***** Connection to engine established *****\n");
		// Register the data callback
		EngineConnection.SetDataCallback(DataCallback);
		EngineConnection.SetDeviceCallback(DeviceCallback);
	}
	else
	{
		// Failed to connect
		AfxMessageBox("Failed to connect to engine.",MB_OK|MB_ICONERROR);
	}
}

void CALLBACK PublicParama::DataCallback(int DeviceID, unsigned __int8 *pData, unsigned __int32 Length, ABS_TIMESTAMP* pAbsTimeStamp)
{
	Data_Information Infor;
	Infor.length = Length;
	Infor.time = Function_Combine_Time(pAbsTimeStamp);
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DATA_CALLBACK,(DWORD)pData,DWORD(&Infor));
	
}

CString PublicParama::Function_Combine_Time(ABS_TIMESTAMP* pAbsTimeStamp)
{
	CString time,hour,minutes,seconds,milliseconds;
	hour.Format("%02d",pAbsTimeStamp->hours);
	minutes.Format("%02d",pAbsTimeStamp->minutes);
	seconds.Format("%02d",pAbsTimeStamp->seconds);
	milliseconds.Format("%d",pAbsTimeStamp->milliseconds);
	time = hour + ":" + minutes + ":" + seconds + "." + milliseconds;
	return time;
}

void CALLBACK PublicParama::DeviceCallback(CString Device_List)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_DEVICE_CALLBACK,(WPARAM)Device_List.GetBuffer(0),NULL);
}

void PublicParama::Function_Send_Command(CString Command)
{
	unsigned __int8 *pHexData;
	DWORD HexLen;
	Command.Remove(' ');

	if(Command.GetLength() > 0)
	{
		// Allocate space for the hex data
		pHexData = (unsigned __int8 *)malloc(Command.GetLength());
		// Convert the string to hex data
		String2Hex(Command.GetBuffer(1), pHexData, Command.GetLength(), &HexLen);
		// Send to device.
		EngineConnection.SendDataToDevice(CurrentDeviceID, pHexData, HexLen);
		// Free the allocated data	
		free(pHexData);
	}
}

#pragma endregion

#pragma region Command Function

int PublicParama::DataBase[8][8];
int PublicParama::R_DataBase[8][8];

#pragma region Reload DataBase
void PublicParama::Function_Reload_DataBase()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			DataBase[i][j] = 0;
		}
	}
}
#pragma endregion

#pragma region Reload R_DataBase
void PublicParama::Function_Reload_R_DataBase()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			R_DataBase[i][j] = 0;
		}
	}
}
#pragma endregion

#pragma region Write DataBase
void PublicParama::Function_Write_DataBase(int Start_Bit, int Length, int Value)
{
	int Signal_Data = Start_Bit / 8;
	Start_Bit = 7 - Start_Bit % 8;
	for (int i = 0; i < Length; i++)
	{
		if (Start_Bit - i >= 0)
		{
			DataBase[Signal_Data][Start_Bit - i] = Value % 2;
		}
		else if (Start_Bit - i < 0 && Start_Bit - i >= -8)
		{
			DataBase[Signal_Data - 1][Start_Bit - i + 8] = Value % 2;
		}
		else if (Start_Bit - i < -8 && Start_Bit - i >= -16)
		{
			DataBase[Signal_Data - 2][Start_Bit - i + 16] = Value % 2;
		}
		Value = Value / 2;
	}
}
#pragma endregion

#pragma region Write R_DataBase
void PublicParama::Function_Write_R_DataBase(int Start_Bit, int Length, int Value)
{
	int Signal_Data = Start_Bit / 8;
	Start_Bit = 7 - Start_Bit % 8;
	for (int i = 0; i < Length; i++)
	{
		if (Start_Bit - i >= 0)
		{
			R_DataBase[Signal_Data][Start_Bit - i] = Value % 2;
		}
		else if (Start_Bit - i < 0 && Start_Bit - i >= -8)
		{
			R_DataBase[Signal_Data - 1][Start_Bit - i + 8] = Value % 2;
		}
		else if (Start_Bit - i < -8 && Start_Bit - i >= -16)
		{
			R_DataBase[Signal_Data - 2][Start_Bit - i + 16] = Value % 2;
		}
		Value = Value / 2;
	}
}
#pragma endregion

#pragma region Build Command
void PublicParama::Function_Build_Command(int Message_Title)
{
	CString BitTemp,ByteTemp,Command,TitleTemp;
	int	i_ByteTemp;
	TitleTemp.Format(_T("%04X"),Message_Title);
	Command = "58" + TitleTemp;
	for(int i = 0; i < 8; i++)
	{
		ByteTemp = "";
		for(int j = 0; j < 8; j++)
		{
			BitTemp.Format("%d",DataBase[i][j]);
			ByteTemp += BitTemp;
		}
		i_ByteTemp = _tcstol(ByteTemp, NULL, 2);
		ByteTemp.Format(_T("%02X"),i_ByteTemp);
		Command += ByteTemp;
	}
	Function_Send_Command(Command);
}

void PublicParama::Function_Build_Command(int Message_Title,int Length)
{
	CString BitTemp,ByteTemp,Command,TitleTemp;
	int	i_ByteTemp;
	TitleTemp.Format(_T("%04X"),Message_Title);
	Command = "58" + TitleTemp;
	for(int i = 0; i < Length; i++)
	{
		ByteTemp = "";
		for(int j = 0; j < 8; j++)
		{
			BitTemp.Format("%d",DataBase[i][j]);
			ByteTemp += BitTemp;
		}
		i_ByteTemp = _tcstol(ByteTemp, NULL, 2);
		ByteTemp.Format(_T("%02X"),i_ByteTemp);
		Command += ByteTemp;
	}
	Function_Send_Command(Command);
}

void PublicParama::Function_Cycle_Send(int Message_Title, int Cycle_Title)
{//xiugai
	
CString BitTemp,ByteTemp,Command,TitleTemp,Timer_Command;
	Timer_Command.Format(_T("%04X"),Cycle_Title);
	Timer_Command="087000"+Timer_Command;
	
	int	i_ByteTemp;
	TitleTemp.Format(_T("%04X"),Message_Title);
	Command = Timer_Command+"58" + TitleTemp;
	for(int i = 0; i < 8; i++)
	{
		ByteTemp = "";
		for(int j = 0; j < 8; j++)
		{
			BitTemp.Format("%d",DataBase[i][j]);
			ByteTemp += BitTemp;
		}
		i_ByteTemp = _tcstol(ByteTemp, NULL, 2);
		ByteTemp.Format(_T("%02X"),i_ByteTemp);
		Command += ByteTemp;
	}
	Function_Send_Command(Command);
}

#pragma endregion

#pragma region Read R_DataBase

int PublicParama::Function_Read_R_DataBase(int Start_Bit, int Length)
{
	int Value = 0;
	int Signal_Data = Start_Bit / 8;
	Start_Bit = 7 - Start_Bit % 8;
	for (int i = 0; i < Length; i++)
	{
		if (Start_Bit - i >= 0)
		{
			if(R_DataBase[Signal_Data][Start_Bit - i] == 1)
			{
				Value = Value + pow(2,i);
			}
		}
		else if (Start_Bit - i < 0 && Start_Bit - i >= -8)
		{
			if(R_DataBase[Signal_Data - 1][Start_Bit - i + 8] == 1)
			{
				Value = Value + pow(2,i);
			}
		}
		else if (Start_Bit - i < -8 && Start_Bit - i >= -16)
		{
			if(R_DataBase[Signal_Data - 2][Start_Bit - i + 16] == 1)
			{
				Value = Value + pow(2,i);
			}
		}
	}
	return Value;
}
#pragma endregion


CString PublicParama::Function_Message_Build(int Start_Bit, int Bit, WPARAM wParam)
{
	unsigned __int8 *pData =(unsigned __int8*)wParam;
	CString Buffer;
	if(Bit > 0)
	{
		Buffer.Format("%.2X",pData[Start_Bit]);
		Buffer+=Function_Message_Build(Start_Bit + 1, Bit - 1, wParam);
		return Buffer;
	}
	else
	{
		Buffer.Format("%.2X",pData[Start_Bit]);
		return Buffer;
	}


}//Build the using Message From RX/TX

CString	PublicParama::Function_Message_SBuild(int Start_Bit, int Bit, WPARAM wParam)
{
	CString Message;
	Message = Function_Message_Build(Start_Bit, Bit, wParam);
	return Message;
}

#pragma endregion

#pragma region Normal Function

int PublicParama::pow(int x,int y)
{
	int value = 1;
	for(int i = 0; i < y; i++)
	{
		value = value * x;
	}
	return value;
}

#pragma endregion