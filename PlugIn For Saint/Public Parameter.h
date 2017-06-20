#ifndef _shape_ 
#define _shape_

#include "SBEConnection.h"	

#define Node_Alive								1
#define T_Periodic_100							4
#define T_Periodic_500							5
#define T_Periodic_5000							8
#define T_Periodic_10s                          10

#define mmTime_10								10
#define mmTime_100								100
#define mmTime_500								500
#define mmTime_640								640
#define mmTime_1000								1000
#define mmTime_5000								5000
#define mmTime_10000							10000

#define DIAGNOSTIC_COMMAND						6
#define MAX_DEVICES								32
#define MESSAGE_DEVICE_CALLBACK					5001
#define MESSAGE_DATA_CALLBACK					5002
#define MESSAGE_MENU_CONTROL					5003
#define MESSAGE_FACEPLATE_KEYDOWN				5004
#define MESSAGE_FACEPLATE_KEYUP					5005
#define MESSAGE_FACEPLATE_CLICK					5006
#define MESSAGE_FACEPLATE_INDICATOR				5007
#define MESSAGE_FACEPLATE_DYNAMIC				5008
#define MESSAGE_DOOR_ACTION						6001
#define MESSAGE_AIRBAG_IMPACT_DATA				9001
#define MESSAGE_AIRBAG_STATUS					9002
#define MESSAGE_ANTILOCK_BRAKE_AND_TC_STATUS_HS	9003
#define MESSAGE_BATTERY_VOLTAGE					9004
#define MESSAGE_Vehicle_State_Management_BB			9005
#define MESSAGE_Driver_Door_Status				9006
#define MESSAGE_CHIME_ACTIVE					9007
#define MESSAGE_CHIME_COMMAND					9008
#define MESSAGE_DISPLAY_MEASUREMENT_SYSTEM_HS	9009
#define MESSAGE_EXTERIOR_LIGHTING_HS			9010
#define MESSAGE_OUTSIDE_AIR_TEMPERATURE_HS		9011
#define MESSAGE_PARK_ASSISTANT_REAR_STATUS		9012
#define MESSAGE_PPEI_ENGINE_ENVIRONMENTAL_STATUS	9013
#define MESSAGE_PPEI_ENGINE_GENERAL_STATUS_5	9014
#define MESSAGE_PPEI_PLATFORM_GENERAL_STATUS	9015
#define MESSAGE_PPEI_STEERING_WHEEL_ANGLE		9016
#define MESSAGE_PPEI_VEHICLE_SPEED_AND_DISTANCE 9017
#define MESSAGE_PPEI_VIN_DIGITS_10_TO_17		9018
#define MESSAGE_VIN_DIGITS_2_TO_9_HS			9019
#define MESSAGE_STEERING_WHEEL_CONTROL_SWITCHES	9020
#define MESSAGE_SYSTEM_POWER_MODE_BACKUP_BB	    9021
#define MESSAGE_READDTC_ACTIVE					9022
#define MESSAGE_CLEANDTC_ACTIVE					9024
#define SINGLE_FRAME							0
#define MULTI_FRAME								1
#define CONSECUTIVE_FRAME						2
#define MESSAGE_READ_DID                        9023
#define MESSAGE_SWC_CHECK						9025
#define MESSAGE_HVAC_ODIINDICATION				9026
#define MESSAGE_HVAC_ODIDATA					9027
#define MESSAGE_HVAC_ODIACTION				    9029
#define MESSAGE_HVAC_ODIDYNDATA					9100
#define MESSAGE_HVAC_ODIEVENT				    9101
#define MESSAGE_HVAC_INITIALIZE					9102
#define MESSAGE_HVAC_FEEDBACK					9103
#define MESSAGE_DTC_READ						9104
#define MESSAGE_DTC_PROCESS						9105
#define MESSAGE_CHIME_ATS						9106
#define MESSAGE_ODI_INITIALIZE					9107
#define MESSAGE_ODI_ACTION						9108
#define MESSAGE_MC_READ							9109
#define MESSAGE_MC_PROCESS						9110
#define MESSAGE_PITS_READ						9111
#define MESSAGE_PITS_PROCESS					9112
#define MESSAGE_MC_Export                       9113
#define MESSAGE_PITS_Export                     9114
#define MESSAGE_Passenger_Door_Status_BB        9115
#define MESSAGE_Left_Rear_Door_Status_BCM       9116
#define MESSAGE_Right_Rear_Door_Status_BCM      9117
#define MESSAGE_Driver_Identifier_BB            9119
#define MESSAGE_Remote_Start_Status	            9052
#define MESSAGE_Power_Mode_Infor	            9050
#define MESSAGE_Dimming_Information_BB          9051
#define MESSAGE_Network_Management_Gateway_BB   9053 
#define T_Periodic_640	                        9054   
#define MESSAGE_NMPDU_Send                      9055
#define T_Periodic_9							9056
#define Msg_thread_stop							9057
#define Msg_thread_timer_start					9058
#define Msg_thread_001							9059

class PublicParama
{
public:

	struct Data_Information
	{
		int length;
		CString time;
	};

	static int				DTC_Read_Step;
#pragma region Saint Function
	//Saint Function
	static CSBEConnection	EngineConnection;		//Class Saint Bus Engine
	static CString			CurrentDeviceList;		//List of Devices
	static CString			CurrentDeviceName;		//Store the Name of Device
	static int				CurrentDeviceID;		//Store the ID number of Device
	static CString			DeviceList[MAX_DEVICES];//Store ALL the Device
	//Data Call Back
	static void CALLBACK	DataCallback(int DeviceID, unsigned __int8 *pData, unsigned __int32 Length, ABS_TIMESTAMP* pAbsTimeStamp);	
	//Device Call Back
	static void CALLBACK	DeviceCallback(CString Device_List);
	static void				Function_Send_Command(CString Command);//Send Command Message to Saint Bus Engine
	static void				DisconnectFromDevice(int DeviceID);
	static int				ConnectToDevice(CString DeviceName);
	static void				Disconnect();
	static void				InitializeConnection();
	static CString			Function_Combine_Time(ABS_TIMESTAMP* pAbsTimeStamp);
#pragma endregion

#pragma region Command Function
	static int				DataBase[8][8];
	static int				R_DataBase[8][8];//R->Received Message's DataBase
	static void				Function_Reload_DataBase();//Restore the DataBase
	static void				Function_Reload_R_DataBase();//Restore the Receive DataBase
	static void				Function_Write_DataBase(int Start_Bit, int Length, int Value);//Write the Bit Value to DataBase
	static void				Function_Write_R_DataBase(int Start_Bit, int Length, int Value);//Write the Bit Value to Receive DataBase
	static int				Function_Read_R_DataBase(int Start_Bit, int Length);//Red the Bin Value from Receive DataBase
	static void				Function_Build_Command(int Message_Title);
	static void				Function_Build_Command(int Message_Title, int Length);
	static void				Function_Cycle_Send(int Message_Title, int Cycle_Title);
	static CString			Function_Message_Build(int Start_Bit, int Bit, WPARAM wParam);//Build the using Message From RX/TX
	static CString			Function_Message_SBuild(int Start_Bit, int Bit, WPARAM wParam);//Build the using Message From RX/TX
#pragma endregion

#pragma region Normal Function
	static int				pow(int x,int y);
#pragma endregion
};


#endif 
