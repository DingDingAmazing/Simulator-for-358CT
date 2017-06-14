using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Form_Control
{
    
    public partial class AirCondition : UserControl
    {
        public int FrontFanSpeeds = 0;
        public int FrontLeftTemp = 6;
        public int FrontRightTemp = 6;
        public int RearLeftTemp = 6;
        public double FLTemp = 17;
        public double FRTemp = 17;
        public double RLTemp = 17;
        public int RearFanSpeeds = 0;

        public AirCondition()
        {
            InitializeComponent();
            Initialize();
            Txt_FFanSpd_TextChanged(null, null);
            Txt_FLTemp_TextChanged(null, null);
            Txt_FRTemp_TextChanged(null, null);
            Txt_RFanSpd_TextChanged(null, null);
            Txt_RLTemp_TextChanged(null, null);
        }

        private void Initialize()
        {
            Box_Front_BlowerMode.Items.Add("OFF");
            Box_Front_BlowerMode.Items.Add("AUTO");
            Box_Front_BlowerMode.Items.Add("DEFROST");
            Box_Front_BlowerMode.Items.Add("HEATER");
            Box_Front_BlowerMode.Items.Add("HEATER-DEFROST");
            Box_Front_BlowerMode.Items.Add("BI-LEVEL");
            Box_Front_BlowerMode.Items.Add("AC");
            Box_Front_BlowerMode.Items.Add("PURGE");
            Box_Front_BlowerMode.Items.Add("ECO");
            Box_Front_BlowerMode.Items.Add("DEFOG");
            Box_Front_BlowerMode.Items.Add("TRI-LEVEL");
            Box_Front_BlowerMode.Items.Add("E-Defrost");
            Box_Front_BlowerMode.Items.Add("E-Defog");
            Box_Front_BlowerMode.Items.Add("E-Panel");
            Box_Front_BlowerMode.Items.Add("E-TRI-LEVEL");
            Box_Front_BlowerMode.Items.Add("FloorDirectionCombi");
            Box_Front_BlowerMode.Items.Add("PanelDirectionCombi");
            Box_Front_BlowerMode.Items.Add("WindscreenDirectionCombi");
            Box_Front_BlowerMode.SelectedIndex = 0;

            Box_Rear_BlowerMode.Items.Add("OFF");
            Box_Rear_BlowerMode.Items.Add("AUTO");
            Box_Rear_BlowerMode.Items.Add("LOWER");
            Box_Rear_BlowerMode.Items.Add("BI-LEVEL");
            Box_Rear_BlowerMode.Items.Add("UPPER");
            Box_Rear_BlowerMode.SelectedIndex = 0;

            Box_Zone.Items.Add("Single");
            Box_Zone.Items.Add("Dual");
            Box_Zone.Items.Add("Tri");
            Box_Zone.Items.Add("Linked");
            Box_Zone.Items.Add("Passenger Active");
            Box_Zone.Items.Add("Rear Active");
            Box_Zone.Items.Add("Rear Linked");
            Box_Zone.Items.Add("Rear Off");
            Box_Zone.SelectedIndex = 0;

            Box_AirInlet.Items.Add("Fresh Air");
            Box_AirInlet.Items.Add("Recirculation");
            Box_AirInlet.Items.Add("Auto Recirculation");
            Box_AirInlet.SelectedIndex = 0;

            Box_AirCondition.Items.Add("Inactive");
            Box_AirCondition.Items.Add("Active");
            Box_AirCondition.Items.Add("Auto");
            Box_AirCondition.Items.Add("Comfort");
            Box_AirCondition.Items.Add("ECO");
            Box_AirCondition.Items.Add("Battery");
            Box_AirCondition.SelectedIndex = 0;

            Box_Front_LeftThermalSeat.Items.Add("HeatedSeatOff");
            Box_Front_LeftThermalSeat.Items.Add("HeatedSeatLevel1");
            Box_Front_LeftThermalSeat.Items.Add("HeatedSeatLevel2");
            Box_Front_LeftThermalSeat.Items.Add("HeatedSeatLevel3");
            Box_Front_LeftThermalSeat.Items.Add("HeatedSeatAuto");
            Box_Front_LeftThermalSeat.Items.Add("VentilatedSeatOff");
            Box_Front_LeftThermalSeat.Items.Add("VentilatedSeatLevel1");
            Box_Front_LeftThermalSeat.Items.Add("VentilatedSeatLevel2");
            Box_Front_LeftThermalSeat.Items.Add("VentilatedSeatLevel3");
            Box_Front_LeftThermalSeat.Items.Add("VentilatedSeatAuto");
            Box_Front_LeftThermalSeat.Items.Add("CooledSeatOff");
            Box_Front_LeftThermalSeat.Items.Add("CooledSeatLevel1");
            Box_Front_LeftThermalSeat.Items.Add("CooledSeatLevel2");
            Box_Front_LeftThermalSeat.Items.Add("CooledSeatLevel3");
            Box_Front_LeftThermalSeat.Items.Add("CooledSeatAuto");
            Box_Front_LeftThermalSeat.SelectedIndex = 0;

            Box_Front_RightThermalSeat.Items.Add("HeatedSeatOff");
            Box_Front_RightThermalSeat.Items.Add("HeatedSeatLevel1");
            Box_Front_RightThermalSeat.Items.Add("HeatedSeatLevel2");
            Box_Front_RightThermalSeat.Items.Add("HeatedSeatLevel3");
            Box_Front_RightThermalSeat.Items.Add("HeatedSeatAuto");
            Box_Front_RightThermalSeat.Items.Add("VentilatedSeatOff");
            Box_Front_RightThermalSeat.Items.Add("VentilatedSeatLevel1");
            Box_Front_RightThermalSeat.Items.Add("VentilatedSeatLevel2");
            Box_Front_RightThermalSeat.Items.Add("VentilatedSeatLevel3");
            Box_Front_RightThermalSeat.Items.Add("VentilatedSeatAuto");
            Box_Front_RightThermalSeat.Items.Add("CooledSeatOff");
            Box_Front_RightThermalSeat.Items.Add("CooledSeatLevel1");
            Box_Front_RightThermalSeat.Items.Add("CooledSeatLevel2");
            Box_Front_RightThermalSeat.Items.Add("CooledSeatLevel3");
            Box_Front_RightThermalSeat.Items.Add("CooledSeatAuto");
            Box_Front_RightThermalSeat.SelectedIndex = 0;
        }

        public void Btn_FFanSp_P_Click(object sender, EventArgs e)
        {
            if (FrontFanSpeeds < 7)
            {
                FrontFanSpeeds++;
                Txt_FFanSpd_TextChanged(null, null);
            }
        }

        public void Btn_FFanSp_P_Press()
        {
            Btn_FFanSp_P_Click2(null, null);
        }

        public void Btn_FFanSp_P_Click2(object sender, EventArgs e)
        {
            if (FrontFanSpeeds < 7)
            {
                FrontFanSpeeds++;
                Txt_FFanSpd_TextChanged2(null, null);
            }
        }

        public void Btn_FFanSp_M_Press()
        {
            Btn_FFanSp_M_Click2(null, null);
        }

        public void Btn_FFanSp_M_Click2(object sender, EventArgs e)
        {
            if (FrontFanSpeeds > 0)
            {
                FrontFanSpeeds--;
                Txt_FFanSpd_TextChanged2(null, null);
            }
        }

        public void Btn_FFanSp_M_Click(object sender, EventArgs e)
        {
            if (FrontFanSpeeds > 0)
            {
                FrontFanSpeeds--;
                Txt_FFanSpd_TextChanged(null, null);
            }
        }

        public void Txt_FFanSpd_TextChanged2(object sender, EventArgs e)
        {
            if (FrontFanSpeeds == 0)
            {
                Txt_FFanSpd.Text = "OFF";
                Box_Front_FanSpeed.Value = 0;
            }
            else if (FrontFanSpeeds == 7)
            {
                Box_Front_FanSpeed.Value = 6;
                FrontFanSpeeds--;
            }

            else
            {
                Txt_FFanSpd.Text = FrontFanSpeeds.ToString();
                Box_Front_FanSpeed.Value = FrontFanSpeeds;
            }
        }

        public void Txt_FFanSpd_TextChanged(object sender, EventArgs e)
        {
            if (FrontFanSpeeds == 0)
            {
                Txt_FFanSpd.Text = "OFF";
                Box_Front_FanSpeed.Value = 0;
            }
            else if (FrontFanSpeeds == 7)
            {
                Txt_FFanSpd.Text = "Auto";
                Box_Front_FanSpeed.Value = 19;
            }
            else
            {
                Txt_FFanSpd.Text = FrontFanSpeeds.ToString();
                Box_Front_FanSpeed.Value = FrontFanSpeeds;
            }
  
        }
        
        public void Btn_FLTemp_M_Press()
        {
            Btn_FLTemp_M_Click(null, null);
        }
        
        public void Btn_FLTemp_M_Click(object sender, EventArgs e)
        {
            if (FrontLeftTemp > 6)
            {
                FrontLeftTemp--;
                if (FrontLeftTemp > 6 && FrontLeftTemp < 36)
                {
                    FLTemp = FLTemp - 0.5;
                }
                Txt_FLTemp_TextChanged(null, null);
            }
        }
        public void Btn_FLTemp_P_Press()
        {
            Btn_FLTemp_P_Click(null, null);
        }
        public void Btn_FLTemp_P_Click(object sender, EventArgs e)
        {
            if (FrontLeftTemp < 36)
            {
                FrontLeftTemp++;
                if (FrontLeftTemp > 7 && FrontLeftTemp < 37)
                {
                    FLTemp = FLTemp + 0.5;
                }
                Txt_FLTemp_TextChanged(null, null);
            }
        }

        public void Txt_FLTemp_TextChanged(object sender, EventArgs e)
        {
            if (FrontLeftTemp == 6)
            {
                Txt_FLTemp.Text = "LOW";
                Box_Front_LeftSetTemp.Value = 31;
            }
            else if (FrontLeftTemp == 36)
            {
                Txt_FLTemp.Text = "HI";
                Box_Front_LeftSetTemp.Value = 32;
            }
            else
            {           
                Txt_FLTemp.Text = FLTemp.ToString() + "℃";
                if (FLTemp > 16)
                {
                    Box_Front_LeftSetTemp.Value = (int)((FLTemp - 16) / 0.5) - 1;
                }
                else if(FLTemp == 14)
                {
                    Box_Front_LeftSetTemp.Value = 37;
                }
                else if (FLTemp == 14.5)
                {
                    Box_Front_LeftSetTemp.Value = 36;
                }
                else if (FLTemp == 15)
                {
                    Box_Front_LeftSetTemp.Value = 35;
                }
                else if (FLTemp == 15.5)
                {
                    Box_Front_LeftSetTemp.Value = 34;
                }
                else if (FLTemp == 16)
                {
                    Box_Front_LeftSetTemp.Value = 33;
                }
            }
        }

        public void Btn_RLTemp_M_Press()
        {
            Btn_RLTemp_M_Click(null, null);
        }

        public void Btn_RLTemp_M_Click(object sender, EventArgs e)
        {
            if (RearLeftTemp > 6)
            {
                RearLeftTemp--;
                if (RearLeftTemp > 6 && RearLeftTemp < 36)
                {
                    RLTemp = RLTemp - 0.5;
                }
                Txt_RLTemp_TextChanged(null, null);
            }
        }

        public void Btn_RLTemp_P_Press()
        {
            Btn_RLTemp_P_Click(null, null);
        }

        public void Btn_RLTemp_P_Click(object sender, EventArgs e)
        {
            if (RearLeftTemp < 36)
            {
                RearLeftTemp++;
                if (RearLeftTemp > 7 && RearLeftTemp < 37)
                {
                    RLTemp = RLTemp + 0.5;
                }
                Txt_RLTemp_TextChanged(null, null);
            }
        }

        public void Txt_RLTemp_TextChanged(object sender, EventArgs e)
        {
            if (RearLeftTemp == 6)
            {
                Txt_RLTemp.Text = "LOW";
                Box_Rear_LeftSetTemp.Value = 31;
            }
            else if (RearLeftTemp == 36)
            {
                Txt_RLTemp.Text = "HI";
                Box_Rear_LeftSetTemp.Value = 32;
            }
            else
            {
                Txt_RLTemp.Text = RLTemp.ToString() + "℃";
                if (RLTemp > 16)
                {
                    Box_Rear_LeftSetTemp.Value = (int)((RLTemp - 16) / 0.5) - 1;
                }
                else if (RLTemp == 14)
                {
                    Box_Rear_LeftSetTemp.Value = 37;
                }
                else if (RLTemp == 14.5)
                {
                    Box_Rear_LeftSetTemp.Value = 36;
                }
                else if (RLTemp == 15)
                {
                    Box_Rear_LeftSetTemp.Value = 35;
                }
                else if (RLTemp == 15.5)
                {
                    Box_Rear_LeftSetTemp.Value = 34;
                }
                else if (RLTemp == 16)
                {
                    Box_Rear_LeftSetTemp.Value = 33;
                }
            }
        }
        public void Btn_FRTemp_M_Press()
        {
            Btn_FRTemp_M_Click(null,null);
        }
        public void Btn_FRTemp_M_Click(object sender, EventArgs e)
        {
            if (FrontRightTemp > 6)
            {
                FrontRightTemp--;
                if (FrontRightTemp > 6 && FrontRightTemp < 36)
                {
                    FRTemp = FRTemp - 0.5;
                }
                Txt_FRTemp_TextChanged(null, null);

            }
        }
        public void Btn_FRTemp_P_Press()
        {
            Btn_FRTemp_P_Click(null,null);
        }
        public void Btn_FRTemp_P_Click(object sender, EventArgs e)
        {
            if (FrontRightTemp < 36)
            {
                FrontRightTemp++;
                if (FrontRightTemp > 7 && FrontRightTemp < 37)
                {
                    FRTemp = FRTemp + 0.5;
                }
                Txt_FRTemp_TextChanged(null, null);
            }
        }

        public void Txt_FRTemp_TextChanged(object sender, EventArgs e)
        {
            if (FrontRightTemp == 6)
            {
                Txt_FRTemp.Text = "LOW";
                Box_Front_RightSetTemp.Value = 31;
            }
            else if (FrontRightTemp == 36)
            {
                Txt_FRTemp.Text = "HI";
                Box_Front_RightSetTemp.Value = 32;
            }
            else
            {
                Txt_FRTemp.Text = FRTemp.ToString() + "℃";
                if (FRTemp > 16)
                {
                    Box_Front_RightSetTemp.Value = (int)((FRTemp - 16) / 0.5) - 1;
                }
                else if (FRTemp == 14)
                {
                    Box_Front_RightSetTemp.Value = 37;
                }
                else if (FRTemp == 14.5)
                {
                    Box_Front_RightSetTemp.Value = 36;
                }
                else if (FRTemp == 15)
                {
                    Box_Front_RightSetTemp.Value = 35;
                }
                else if (FRTemp == 15.5)
                {
                    Box_Front_RightSetTemp.Value = 34;
                }
                else if (FRTemp == 16)
                {
                    Box_Front_RightSetTemp.Value = 33;
                }
            }
        }
        public void Btn_RFanSp_P_Press()
        {
             Btn_RFanSp_P_Click(null,null);
        }
        public void Btn_RFanSp_P_Click(object sender, EventArgs e)
        {
            if (RearFanSpeeds < 9)
            {
                RearFanSpeeds++;
                Txt_RFanSpd_TextChanged(null, null);
            }
        }
        public void Btn_RFanSp_M_Press()
        {
            Btn_RFanSp_M_Click(null,null);
        }
        public void Btn_RFanSp_M_Click(object sender, EventArgs e)
        {
            if (RearFanSpeeds > 0)
            {
                RearFanSpeeds--;
                Txt_RFanSpd_TextChanged(null, null);
            }
        }

        public void Txt_RFanSpd_TextChanged(object sender, EventArgs e)
        {
            if (RearFanSpeeds == 0)
            {
                Txt_RFanSpd.Text = "OFF";
                Box_Rear_FanSpeed.Value = 0;
            }
            else if (RearFanSpeeds == 5)
            {
                Txt_RFanSpd.Text = "Auto";
                Box_Rear_FanSpeed.Value = 5;
            }
            else if (RearFanSpeeds == 6)
            {
                Txt_RFanSpd.Text = "5";
                Box_Rear_FanSpeed.Value = 6;
            }
            else if (RearFanSpeeds == 7)
            {
                Txt_RFanSpd.Text = "6";
                Box_Rear_FanSpeed.Value = 7;
            }
            else if (RearFanSpeeds == 8)
            {
                Txt_RFanSpd.Text = "Auto Lo";
                Box_Rear_FanSpeed.Value = 8;
            }
            else if (RearFanSpeeds == 9)
            {
                Txt_RFanSpd.Text = "Auto High";
                Box_Rear_FanSpeed.Value = 9;
            }
            else
            {
                  Txt_RFanSpd.Text = RearFanSpeeds.ToString();
                  Box_Rear_FanSpeed.Value = RearFanSpeeds;
            }

        }

        public void Btn_Initialization_Click(object sender, EventArgs e)
        {
            Box_Front_BlowerMode.Enabled = true;
            Box_Rear_BlowerMode.Enabled = true;
            Box_Zone.Enabled = true;
            Box_AirInlet.Enabled = true;
            Box_AirCondition.Enabled = true;
            Box_Front_LeftThermalSeat.Enabled = true;
            Box_Front_RightThermalSeat.Enabled = true;
            Box_AirQualitySensor.Enabled = true;
            Box_AutoDefog.Enabled = true;
            Btn_FFanSp_M.Enabled = true;
            Btn_FFanSp_P.Enabled = true;
            Btn_FLTemp_M.Enabled = true;
            Btn_FLTemp_P.Enabled = true;
            Btn_FRTemp_M.Enabled = true;
            Btn_FRTemp_P.Enabled = true;
        }

        public void Function_VR_Control()
        {
            Box_Front_BlowerMode.SelectedIndex = 1;
            Box_Front_FanSpeed.Value = 19;
            Box_AirCondition.SelectedIndex = 2;
            Box_AirInlet.SelectedIndex = 2;
        }
        public void Function_Auto_Control()
        {
            Box_Rear_BlowerMode.SelectedIndex = 1;
            Box_Rear_FanSpeed.Value = 5;
         
        }
    }
}
