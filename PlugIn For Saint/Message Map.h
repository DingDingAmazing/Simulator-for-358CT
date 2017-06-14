//TX
//CenterStack
namespace ODI_DynData_CenterStack_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x575;
		static const int Cycle_time = 0;
	};

	class ODDC_DataVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};

	class ODDC_DataId
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDC_FUCID 
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDC_InvldData
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDC_DataType
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};
}

namespace ODIDynDataListReq_CenterStack_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x56F;
		static const int Cycle_time = 0;
	};

	class ODDLC_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDLC_DataId
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDLC_DspMID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDLC_NmEntries
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 7;
		static const int Initial_Value = 0;
	};

	class ODDLC_ReqDir
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDLC_Idx
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 16;
		static const int Initial_Value = 0;
	};

	class ODDLC_ReqType
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 2;
		static const int Initial_Value = 0;
	};

	class ODDLC_BckgndFlag
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDLC_WrpArnd
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDLC_SubldReqM
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 12;
		static const int Initial_Value = 1;
	};
}




//RX
//UPA_APA
namespace ODIDynamicData_UPA_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x582;
		static const int Cycle_time = 0;
	};

	class ODD_DataType
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15
		};
	};

	class ODD_InvldData
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODD_FUCID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODD_DataId
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODD_DataVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}



namespace ODIEvent_UPA_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x561;
		static const int Cycle_time = 0;
	};


	class ODIE_EvID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class ODIE_FUCID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIE_MultiFrRetCh
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}




//OnStar
namespace ODIDynamicData_Onstar_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x584;
		static const int Cycle_time = 0;
	};

	class ODD_DataVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};

	class ODD_DataId
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODD_FUCID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODD_InvldData
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODD_DataType
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};
}



//IPC


namespace ODIEvent_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x585;
		static const int Cycle_time = 0;
	};

	class ODIEI_EvID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class ODIEI_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIEI_MultiFrRetCh
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}



namespace ODIDynDataMultiReq_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x574;
		static const int Cycle_time = 0;
	};

	class ODDMI_DataID5
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID5Vld
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID4
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMI_DataID4Vld
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
	class ODDMIF_DataID1
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID3
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID3Vld
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID2
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID2Vld
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DispMID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP=0x04,
			RearDisplayOne=0x08,
			RearDisplayTwo=0x10,
			OTIM=0x20,
			Info_Faceplate=0x40,
			Reserved=0x80


		};
	};

	class ODDMIF_ReqType
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Subscribe = 0x00,
			Unsubscribe=0x01
		};
	};
}


//ODIDynamicData_ECC
namespace ODIDynamicData_ECC
{
	class Basic
	{
	public:
		static const int Message_ID=0x581;
		static const int Cycle_time=0;	
	};

	class FUClass
	{
		public:
			static const int Start_Bit=16;
			static const int Length=8;
			static const int Initial_Value = 0;
	};

	class Invalid_Data
	{
		public:
			static const int Start_Bit=8;
			static const int Length=1;
			static const int Initial_Value = 0;
	};

	class Data_Type
	{
		public:
			static const int Start_Bit=9;
			static const int Length=6;
			static const int Initial_Value = 0;
	};

	class Data_ID
	{
		public:
			static const int Start_Bit=24;
			static const int Length=8;
			static const int Initial_Value = 0;
	};

	class Data_Value
	{
		public:
			static const int Start_Bit=56;
			static const int Length=32;
			static const int Initial_Value = 0;
	};
}
//ODIEvent_ECC
namespace ODIEvent_ECC
{
	class Basic
	{
	public:
		static const int Message_ID=0x560;
		static const int Cycle_time=0;
	};

	class FUClass
	{
		public:
			static const int Start_Bit=16;
			static const int Length=8;
			static const int Initial_Value = 0;
	};

	class EventID
	{
		public:
			static const int Start_Bit=8;
			static const int Length=6;
			static const int Initial_Value = 0;
	};

	class MultiFrameReturnChannel
	{
		public:
			static const int Start_Bit=24;
			static const int Length=8;
			static const int Initial_Value = 0;
	};
}
//ODIIndication_ECC


//ODIEnumDynamicData
namespace ODIEnumDynamicData
{
	class Basic
	{
	public:
		static const int Message_ID=0x58C;
		static const int Cycle_time=0;
	};

}


//ODIIndication

namespace ODIIndication_BCM
{
	class Basic
	{
	public:
		static const int Message_ID = 0x566;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_Centerstack
{
	class Basic
	{
	public:
		static const int Message_ID = 0x579;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x568;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x564;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_UPA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x59E;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_Onstar_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x5A0;
		static const int Cycle_time = 0;
	};

	class ODIIOnstar_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDIIOnstar_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnStar_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd36
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd30
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIOnstar_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIIndication_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x567;
		static const int Cycle_time = 0;
	};

	class ODII_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd1
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd10
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd11
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd12
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd13
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd14
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd15
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd16
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd17
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd18
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd19
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd2
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd20
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd21
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd22
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd23
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd24
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd25
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd26
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd27
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd28
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd29
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd3
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd30
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd31
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd33
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd34
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd35
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd36
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd37
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd38
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd39
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd4
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd40
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd41
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd42
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd43
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd44
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd45
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd46
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd47
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd48
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd49
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd5
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd50
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd51
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd52
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd53
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd54
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODII_ODIInd56
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd6
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd7
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd8
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODII_ODIInd9
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

//ODIAction

namespace ODIAction_Centerstack
{
	class Basic
	{
	public:
		static const int Message_ID = 0x56B;
		static const int Cycle_time = 0;
	};

	class ODIAIF_DaTy
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15,
		};
	};

	class ODIAIF_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAIF_ActnID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAIF_DspMID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			ECC = 0x20,
			Info_Faceplate = 0x40,
			ECC_Faceplate = 0x80,

		};
	};

	class ODIAIF_ActnVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}

namespace ODIAction_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x577;
		static const int Cycle_time = 0;
	};

	class ODIAECC_DaTy
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15,
		};
	};

	class ODIAECC_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAECC_ActnID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAECC_DspMID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			ECC = 0x20,
			Info_Faceplate = 0x40,
			ECC_Faceplate = 0x80,

		};
	};

	class ODIAECC_ActnVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}

namespace ODIAction_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x56A;
		static const int Cycle_time = 0;
	};

	class ODIAIF_DaTy
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15,
		};
	};

	class ODIAIF_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAIF_ActnID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAIF_DspMID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP = 0x04,
			RearDisplayOne = 0x08,
			RearDisplayTwo = 0x10,
			ECC = 0x20,
			Info_Faceplate = 0x40,
			ECC_Faceplate = 0x80,

		};
	};

	class ODIAIF_ActnVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};
}

namespace ODIAction_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x56C;
		static const int Cycle_time = 0;
	};

	class ODIAI_ActnID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIAI_ActnVal
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 32;
		static const int Initial_Value = 0;
	};

	class ODIAI_DaTy
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 6;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Speed = 0x00,
			String = 0x01,
			Integer = 0x02,
			EnumerationValue = 0x03,
			Decimal = 0x04,
			Time = 0x05,
			Date = 0x06,
			List = 0x07,
			Pictogram = 0x08,
			TextId = 0x09,
			BitmapId = 0x0A,
			DistanceLong = 0x0B,
			DistanceShort = 0x0C,
			Volume = 0x0D,
			Temperature = 0x0E,
			Pressure = 0x0F,
			Fuel_Consumption = 0x10,
			Fuel_Consumption_Inverted = 0x11,
			Character = 0x12,
			HoursOfDay = 0x13,
			DecimalShort = 0x14,
			Bitmap = 0x15

		};
	};

	class ODIAI_DspMID
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP=0x04,
			RearDisplayOne=0x08,
			RearDisplayTwo=0x10,
			ECC=0x20,
			Info_Faceplate=0x40,
			ECC_Faceplate=0x80

		};
	};

	class ODIAI_FUCID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

//ODIEnumDynamicData
namespace ODIEnumDynamicData_BCM
{
	class Basic
	{
	public:
		static const int Message_ID = 0x58A;
		static const int Cycle_time = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_Centerstack
{
	class Basic
	{
	public:
		static const int Message_ID = 0x57D;
		static const int Cycle_time = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_APA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x596;
		static const int Cycle_time = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_UPA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x59C;
		static const int Cycle_time = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_IPC_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x57E;
		static const int Cycle_time = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};
}

namespace ODIEnumDynamicData_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x58B;
		static const int Cycle_time = 0;
	};

	class ODIEDD_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDD_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}


//FacePlate
namespace ODIEvent_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x560;
		static const int Cycle_time = 0;
	};



	class ODIEIF_EvID
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 6;
		static const int Initial_Value = 0;
	};

	class ODIEIF_FUCID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIEIF_MultiFrRetCh
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

}

namespace ODIIndication_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x59A;
		static const int Cycle_time = 0;
	};

	class ODIIIF_FUCID
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd1
	{
	public:
		static const int Start_Bit = 18;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd10
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd11
	{
	public:
		static const int Start_Bit = 9;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd12
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd13
	{
	public:
		static const int Start_Bit = 11;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd14
	{
	public:
		static const int Start_Bit = 12;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd15
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd16
	{
	public:
		static const int Start_Bit = 14;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd17
	{
	public:
		static const int Start_Bit = 15;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd18
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd19
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd2
	{
	public:
		static const int Start_Bit = 29;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd20
	{
	public:
		static const int Start_Bit = 19;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd21
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd22
	{
	public:
		static const int Start_Bit = 21;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd23
	{
	public:
		static const int Start_Bit = 22;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd24
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd25
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd26
	{
	public:
		static const int Start_Bit = 25;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd27
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd28
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd29
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd3
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd30
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd31
	{
	public:
		static const int Start_Bit = 31;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd32
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd33
	{
	public:
		static const int Start_Bit = 33;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd34
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd35
	{
	public:
		static const int Start_Bit = 35;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd36
	{
	public:
		static const int Start_Bit = 36;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd37
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd38
	{
	public:
		static const int Start_Bit = 38;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd39
	{
	public:
		static const int Start_Bit = 39;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd4
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd40
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd41
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd42
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd43
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd44
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd45
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd46
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd47
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd48
	{
	public:
		static const int Start_Bit = 49;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd49
	{
	public:
		static const int Start_Bit = 50;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd5
	{
	public:
		static const int Start_Bit = 59;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd50
	{
	public:
		static const int Start_Bit = 52;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd51
	{
	public:
		static const int Start_Bit = 53;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd52
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd53
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd54
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd55
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd56
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd6
	{
	public:
		static const int Start_Bit = 60;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd7
	{
	public:
		static const int Start_Bit = 61;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};


	class ODIIIF_ODIInd8
	{
	public:
		static const int Start_Bit = 62;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODIIIF_ODIInd9
	{
	public:
		static const int Start_Bit = 63;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}	

namespace ODIDynDataMultiReq_Inf_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x572;
		static const int Cycle_time = 0;
	};

	class ODDMIF_DataID5
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID5Vld
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			True = 0x01,
			False = 0x02

		};
	};

	class ODDMIF_DataID4
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID4Vld
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			True = 0x01,
			False = 0x02

		};
	};

	class ODDMIF_DataID1
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID3
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID3Vld
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID2
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DataID2Vld
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class ODDMIF_DispMID
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
		static const enum Value
		{
			IPC = 0x01,
			Centerstack = 0x02,
			AuxIP=0x04,
			RearDisplayOne=0x08,
			RearDisplayTwo=0x10,
			OTIM=0x20,
			Info_Faceplate=0x40,
			Reserved=0x80


		};
	};

	class ODDMIF_ReqType
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Subscribe = 0x00,
			Unsubscribe=0x01
		};
	};

}

namespace ODIEnumDynamicData_Inf_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x565;
		static const int Cycle_time = 0;
	};

	class ODIEDDIF_Data5Value
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data1Value
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data10Value
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};


	class ODIEDDIF_Data11Value
	{
	public:
		static const int Start_Bit = 37;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data12Value
	{
	public:
		static const int Start_Bit = 34;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data13Value
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data14Value
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data15Value
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data16Value
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data17Value
	{
	public:
		static const int Start_Bit = 51;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data18Value
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data2Value
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data3Value
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data4Value
	{
	public:
		static const int Start_Bit = 10;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data6Value
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data7Value
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data8Value
	{
	public:
		static const int Start_Bit = 30;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_Data9Value
	{
	public:
		static const int Start_Bit = 27;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class ODIEDDIF_FUCID
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}

//BCM


//Temperature
namespace PPEI_Engine_Environmental_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x3FC;
		static const int Cycle_time = 0;
	};


	class OtsAirTmp
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class OtsAirTmpCrVal
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class OtsAirTmpCrValMsk
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Dont_Use_Data=0x00,
			Use_Data=0x01
		};
	};

	class OtsAirTmpCrValV
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};

	class OtsAirTmpV
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}

//Oil
namespace PPEI_Engine_General_Status_5
{
	class Basic
	{
	public:
		static const int Message_ID = 0x4D1;
		static const int Cycle_time = 500;
	};

	class FlLvlPct
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class FlLvlPctV
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}

namespace Remote_Start_Status
{
	class Basic
	{
	   public:
		static const int Message_ID = 0x1C8;
	
		//static const int Box_TrStLgMdAtv = 0x3AA;
		static const int Cycle_time = 0;
	};

	class RemStrtSt
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Inactive=0x00,
			Active=0x01
		};
	};

	class RmVehStrRq
	{
	 public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Remote_Start_Not_Requested=0x00,
			Remote_Start_Requested=0x01
		};
	};
}

namespace Power_Mode_Infor
{
	class Basic
	{
	   public:
		static const int Message_ID = 0x3AA;
		static const int Cycle_time = 0;
	};
	class TrStLgMdAtv
	{
	  public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace Network_Management_Gateway_BB
{
	class Basic
	{
     	public:
			static const int Message_ID = 0X627;
			static const int Cycle_time = 640;
	};
}

namespace PPEI_Platform_General_Status
{
	class Basic
	{
	  public:
		static const int Message_ID = 0x121;
		static const int Cycle_time = 100;
	};

	/*class SIRDpl
	{
	public:
		static const int Start_Bit = 58;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class AirbgVDA
	{
	public:
		static const int Start_Bit = 57;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			VirtualDeviceUnavailable=0x00,
			VirtualDeviceAvailable=0x01
		};
	};
	*/
	class SysBkUpPwrMd
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Off=0x00,
			Accessory=0x01,
			Run=0x02,
			Crank_Request=0x03
		};
	};

	class SysBkupPwrMdEn
	{
	public:
		static const int Start_Bit = 6;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Off=0x00,
			Accessory=0x01,
			Run=0x02,
			Crank_Request=0x03
		};
	};

	class SysPwrMd
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Off=0x00,
			Accessory=0x01,
			Run=0x02,
			Crank_Request=0x03
		};
	};	
}

namespace PPEI_Steering_Wheel_Angle
{
	class Basic
	{
	public:
		static const int Message_ID = 0x1E5;
		static const int Cycle_time =10;
	};

	class StrWhAng
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 16;
		static const int Initial_Value = 0;
	};

	class StrWhAngV
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};

}

namespace PPEI_Vehicle_Speed_and_Distance
{
	class Basic
	{
	public:
		static const int Message_ID = 0x108;
		static const int Cycle_time = 100;
	};

	class DistRollCntAvgDrvnSrc
	{
	public:
		static const int Start_Bit = 55;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Transmission_Output_Speed=0x00,
			Wheel_Speed=0x01
		};
	};

	class VehSpdAvgDrvn
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 15;
		static const int Initial_Value = 0;
	};

	class VehSpdAvgDrvnSrc
	{
	public:
		static const int Start_Bit = 23;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Transmission_Output_Speed=0x00,
			Wheel_Speed=0x01
		};
	};

	class VehSpdAvgDrvnV
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};

	class VehSpdAvgNDrvn
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 15;
		static const int Initial_Value = 0;
	};

	class VehSpdAvgNDrvnV
	{
	public:
		static const int Start_Bit = 54;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}

namespace PPEI_VIN_Digits_10_to_17
{
	class Basic
	{
	public:
		static const int Message_ID = 0x764;
		static const int Cycle_time = 5000;
	};

	class VehIdNmDig10_17
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};

}

namespace PPEI_NonDrivn_Whl_Rotationl_Stat
{
	class Basic
	{
	public:
		static const int Message_ID = 0x0C5;
		static const int Cycle_time = 0;
	};

	class WRSLNDWhlDisTpRC
	{
	public:
		static const int Start_Bit = 6;
		static const int Length = 2;
		static const int Initial_Value = 0;
	};
}

namespace PPEI_Engine_General_Status_1
{
	class Basic
	{
	public:
		static const int Message_ID = 0x0C9;
		static const int Cycle_time = 0;
	};

	class EngRunAtv
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}



namespace USDT_Req_to_RadioHead_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x248;
		static const int Cycle_time = 0;
	};

	class DgnInf
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};

}

namespace USDT_Req_to_All_HS_ECUs
{
	class Basic
	{
	public:
		static const int Message_ID = 0x101;
		static const int Cycle_time = 0;
	};

	class DgnInf
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};
}


//Chime Function
namespace Chime_Active
{
	class Basic
	{
	public:
		static const int Message_ID = 0x205;
		static const int Cycle_time = 0;
	};
	class ChmAct
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;

	};

	class ChmVolSt
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Normal=0,
			Load=1
		};
	};	
}

namespace Chime_Command
{
	class Basic
	{
	public:
		static const int RadioHead = 0x280;
		static const int APA_HS = 0x2BB;
		static const int BCM = 0x2BD;
		static const int IPC = 0x262;
		static const int Onstar = 0x297;
		static const int SDM = 0x239;
		static const int Cycle_time = 0;
	};

	class SC_NmofRp
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class SC_SndCdnPrd
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class SC_SndDutCyc
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class SC_SndTne
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Clock=0x00,
			Clack=0x01,
			Click=0x02,
			Click_Clack=0x03,
			Beep_1=0x04,
			Beep_2=0x05,
			Gong_1=0x06,
			Gong_2=0x07,
			Harp=0x08,
			High_Frequency_Broadband=0x09,
			Beep_Radio_Source_Muted_750=0x0A,
			Beep_Radio_Source_Muted_2000=0x0B,
			Gong_Radio_Source_Muted_750=0x0C,
			Gong_Radio_Source_Muted_2000=0x0D,
			No_Chime_with_Radio_Source_Muted=0x0E
		};
	};

	class SndLocDrFr
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SndLocLftRr
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SndLocPasFr
	{
	public:
		static const int Start_Bit = 6;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SndLocRtRr
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SndPriority
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};
}


namespace Airbag_Impact_Data
{
	class Basic
	{
	public:
		static const int Message_ID = 0x190;
		static const int Cycle_time = 0;
	};
	class SIRDpl
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

}

namespace Airbag_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x192;
		static const int Cycle_time = 2000;
	};

	class EvntEnbld
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class SftyMuteRd
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

}

//Node
namespace Node_Present_Onstar
{
	class Basic
	{
	public:
		static const int Message_ID = 0x629;
		static const int Cycle_time = 1000;
	};

	class OnstarPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_APA_UPA
{
	class Basic
	{
	public:
		static const int Message_ID = 0x639;
		static const int Cycle_time = 1000;
	};

	class APAPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_SDM
{
	class Basic
	{
	public:
		static const int Message_ID = 0x687;
		static const int Cycle_time = 1000;
	};

	class SDMPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_ECC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x680;
		static const int Cycle_time = 1000;
	};

	class ECCPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_Info_Faceplate
{
	class Basic
	{
	public:
		static const int Message_ID = 0x674;
		static const int Cycle_time = 1000;
	};

	class InfoFaceplatePr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

namespace Node_Present_IPC
{
	class Basic
	{
	public:
		static const int Message_ID = 0x676;
		static const int Cycle_time = 1000;
	};

	class IPCPr
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 1;
	};
}

//Vehicle Information
namespace Antilock_Brake_and_TC_Status_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x17D;
		static const int Cycle_time = 100;
	};

	class BrkPadWrnlO
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class VehStabEnhmntStat
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class TCSysOpMd
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 3;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Off = 0,
			Normal = 1,
			Off_Road = 2,
		};
	};

	class StWhAnVDA
	{
	public:
		static const int Start_Bit = 17;
		static const int Length = 1;
		static const int Initial_Value = 1;
		static const enum Value
		{
			VirtualDeviceUnavailable = 0,
			VirtualDeviceAvailable = 1
		};
	};	
}

namespace Battery_Voltage
{
	class Basic
	{
	public:
		static const int Message_ID = 0x124;
		static const int Cycle_time = 500;
	};

	class BattStOfChrgCrtyLow
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class BatVlt
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 3;
	};

	class BatVltV
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0,
			Invalid=1
		};
	};

	class PwrMdOffBattSOC
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

}

namespace Vehicle_State_Management_BB
{
	class Basic
	{
	public:
		static const int Message_ID = 0x3AE;
		static const int Cycle_time = 250;
	};

	/*class CtLghtDet
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
	*/
	class VehMovState
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 3;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Parked=0,
			Neutral=1,
			Forward=2,
			Reverse=3,
			Invalid=4
		};
	};
}

namespace Driver_Door_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x318;
		static const int Cycle_time = 0;
	};


	class DDAjrSwAtv
	{
	public:
		
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;	
	};
	
	class DDAjrSwAtvM
	{
	public:
		
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;	
	};

	
}

namespace Driver_Identifier_BB
{
	class Basic 
	{
    public:
		static const int Message_ID = 0x38A;
		static const int Cycle_time = 0;
	};
	class DrId
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 3;
		static const int Initial_Value = 7;	
		static const enum Value
		{
			Driver_1=0x00,
			Driver_2=0x01,
			Driver_3=0x02,
			Driver_4=0x03,
			Driver_5=0x04,
			Driver_6=0x05,
			Driver_7=0x06,
			Unknown=0x07
		};
	};
}

namespace Passenger_Door_Status_BB
{ 
	class Basic
	{ 
	public:
		static const int Message_ID = 0x17B;
		static const int Cycle_time = 0;
	};
	class PDAjrSwAtv
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace Left_Rear_Door_Status_BCM
{
	class Basic
	{ 
	public:
		static const int Message_ID = 0x181;
		static const int Cycle_time = 0;
	};

	class RLDoorAjarSwAct
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace Right_Rear_Door_Status_BCM
{
	class Basic
	{ 
	public:
		static const int Message_ID = 0x180;
		static const int Cycle_time = 0;
	};

	class RRDoorAjarSwAct
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace Display_Measurement_System_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x425;
		static const int Cycle_time = 0;
	};

	class DispMeasSysExt
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Metric = 0x00,
			US = 0x01,
			Imperial = 0x02,
		};
	};
}

namespace Exterior_Lighting_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x106;
		static const int Cycle_time = 0;
	};


	class OtsdAmbtLtLvlStat
	{
	public:
		static const int Start_Bit = 26;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Unknown=0x00,
			Night=0x01,
			Day=0x02
		};
	};	

	class OtsdAmbtLtLvlStatV
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};	
}

namespace Dimming_Information_BB
{
	class Basic
	{
	public:
		static const int Message_ID = 0x322;
		static const int Cycle_time = 0;
	};

	class IntDimLvl  
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};	

	class IntDimDspLvlPlt 
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};	

}

namespace Outside_Air_Temperature_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x212;
		static const int Cycle_time = 0;
	};

	class OtsAirTmp
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 8;
		static const int Initial_Value = -40;
	};

	class OtsAirTmpCrVal
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = -40;
	};

	class OtsAirTmpCrValMsk
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Dont_Use_Data=0x00,
			Use_Data=0x01
		};
	};

	class OtsAirTmpCrValV
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};

	class OtsAirTmpV
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Valid=0x00,
			Invalid=0x01
		};
	};
}



namespace DTC_Triggered_380
{
	class Basic
	{
	public:
		static const int Message_ID = 0x380;
		static const int Cycle_time = 1000;
	};

	class DTCI_WrnIndRqdSt_380
	{
	public:
		static const int Start_Bit = 47;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused7_380
	{
	public:
		static const int Start_Bit = 1;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused6_380
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused5_380
	{
	public:
		static const int Start_Bit = 3;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused4_380
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused3_380
	{
	public:
		static const int Start_Bit = 5;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused2_380
	{
	public:
		static const int Start_Bit = 6;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCIUnused1_380
	{
	public:
		static const int Start_Bit = 7;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstNPsdPwrUpSt_380
	{
	public:
		static const int Start_Bit = 45;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstNPsdCdClrdSt_380
	{
	public:
		static const int Start_Bit = 42;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstFldPwrUpSt_380
	{
	public:
		static const int Start_Bit = 46;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_TstFldCdClrdStat_380
	{
	public:
		static const int Start_Bit = 43;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_HistStat_380
	{
	public:
		static const int Start_Bit = 44;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCTriggered_380
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCSource_380
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCNumber_380
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 16;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCFaultType_380
	{
	public:
		static const int Start_Bit = 48;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class DTCI_DTCFailType_380
	{
	public:
		static const int Start_Bit = 32;
		static const int Length = 8;
		static const int Initial_Value = 0;
	};

	class DTCI_CurrentStatus_380
	{
	public:
		static const int Start_Bit = 41;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};

	class DTCI_CodeSupported_380
	{
	public:
		static const int Start_Bit = 40;
		static const int Length = 1;
		static const int Initial_Value = 0;
	};
}

namespace Audio_Master_Arbitration_Command
{
	class Basic
	{
	public:
		static const int Message_ID = 0x368;
		static const int Cycle_time = 1200;
	};

	class AudMstrSrcTyp
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 5;
		static const int Initial_Value = 0;
	};

	class AudMstrChnnlTyp
	{
	public:
		static const int Start_Bit = 13;
		static const int Length = 3;
		static const int Initial_Value = 0;
	};

	class AudMstrArbCom
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 4;
		static const int Initial_Value = 0;
	};

	class LgclAVChnl_368
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 4;
		static const int Initial_Value = 0;
	};
}

namespace Voice_Recognition_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x14E;
		static const int Cycle_time = 0;
	};

	class PhnSpRcgnRq
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
	};

	class VcRecVcFdbckSt
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 2;
		static const int Initial_Value = 0;
	};
}

namespace Steering_Wheel_Control_Switches
{
	class Basic
	{
	public:
		static const int Message_ID = 0x21C;
		static const int Cycle_time = 0;
	};

	class StrgWhlUnit1SwStat
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Activation=0x00,
			Function_1=0x01,
			Function_2=0x02,
			Function_3=0x03,
			Function_4=0x04,
			Function_5=0x05,
			Function_6=0x06,
			Function_7=0x07,
			Function_8=0x08,
			Function_9=0x09,
			Function_A=0x0A,
			Function_B=0x0B,
			Function_C=0x0C,
			Function_D=0x0D,
			Function_E=0x0E,
			Function_F=0x0F
		};
	};

	class StrgWhlUnit2SwStat
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Activation=0x00,
			Function_1=0x01,
			Function_2=0x02,
			Function_3=0x03,
			Function_4=0x04,
			Function_5=0x05,
			Function_6=0x06,
			Function_7=0x07,
			Function_8=0x08,
			Function_9=0x09,
			Function_A=0x0A,
			Function_B=0x0B,
			Function_C=0x0C,
			Function_D=0x0D,
			Function_E=0x0E,
			Function_F=0x0F
		};
	};
}	



namespace VIN_Digits_2_to_9_HS
{
	class Basic
	{
	public:
		static const int Message_ID = 0x762;
		static const int Cycle_time = 5000;
	};

	class VehIdNmDig2_9
	{
	public:
		static const int Start_Bit = 56;
		static const int Length = 64;
		static const int Initial_Value = 0;
	};

}

namespace Park_Assistant_Rear_Status
{
	class Basic
	{
	public:
		static const int Message_ID = 0x1D4;
		static const int Cycle_time = 0;
	};

	class PrkAstRrSysStat
	{
	public:
		static const int Start_Bit = 4;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static const enum Value
		{
			Disabled=0x00,
			Enabled=0x01,
			Inhibited=0x02,
			Failed=0x03

		};
	};

	class PrkAsstRrExtdDist
	{
	public:
		static const int Start_Bit = 8;
		static const int Length = 12;
		static const int Initial_Value = 0;
	};

	class PARrRgn2ObjStat
	{
	public:
		static const int Start_Bit = 20;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};

	class PARrRgn1ObjStat
	{
	public:
		static const int Start_Bit = 16;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};

	class PARrRgn4ObjStat
	{
	public:
		static const int Start_Bit = 28;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};

	class PARrRgn3ObjStat
	{
	public:
		static const int Start_Bit = 24;
		static const int Length = 4;
		static const int Initial_Value = 0;
		static const enum Value
		{
			No_Object=0x00,
			Zone_1=0x01,
			Zone_2=0x02,
			Zone_3=0x03,
			Zone_4=0x04,
			Zone_5=0x05,
			Zone_6=0x06,
			Zone_7=0x07,
			Zone_8=0x08,
			Zone_9=0x09,
			Zone_10=0x0A,
			Zone_11=0x0B,
			Zone_12=0x0C,
			Zone_13=0x0D,
			Zone_14=0x0E,
			Zone_15=0x0F

		};
	};
}

namespace System_Power_Mode_Backup_BB
{
	class Basic
	{
	public:
		static const int Message_ID = 0x122;
		static const int Cycle_time = 100;
	};

	class SysBkUpPwrMd
	{
	public:
		static const int Start_Bit = 0;
		static const int Length = 2;
		static const int Initial_Value = 0;
		static enum Value
		{
			Off = 0x00,
			Accessory = 0x01,
			Run = 0x02,
			Crank = 0x03
		};
	};

	class SysBkUpPwrMdEn
	{
	public:
		static const int Start_Bit = 2;
		static const int Length = 1;
		static const int Initial_Value = 0;
		static enum Value
		{
			False = 0x00,
			True = 0x01
		};
	};
}