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
    public partial class VehicleInfoForm : UserControl
    {
        public VehicleInfoForm()
        {
            InitializeComponent();
            Initialize();
        }

        private void Initialize()
        {
            Box_DistRollCntAvgDrvnSrc.Items.Add("Wheel Speed");
            Box_DistRollCntAvgDrvnSrc.Items.Add("Transmission OutPut Speed");
            Box_DistRollCntAvgDrvnSrc.SelectedIndex = 0;

            Box_VehSpdAvgDrvnSrc.Items.Add("Wheel Speed");
            Box_VehSpdAvgDrvnSrc.Items.Add("Transmission OutPut Speed");
            Box_VehSpdAvgDrvnSrc.SelectedIndex = 0;

            Box_OtsdAmbtLtLvlStat.Items.Add("Unknown");
            Box_OtsdAmbtLtLvlStat.Items.Add("Night");
            Box_OtsdAmbtLtLvlStat.Items.Add("Day");
            Box_OtsdAmbtLtLvlStat.SelectedIndex = 0;

            Box_OtsdAmbtLtLvlStatV.Items.Add("Valid");
            Box_OtsdAmbtLtLvlStatV.Items.Add("Invalid");
            Box_OtsdAmbtLtLvlStatV.SelectedIndex = 0;

            Box_OtsAirTmpCrValMsk.Items.Add("Don't Use Data");
            Box_OtsAirTmpCrValMsk.Items.Add("Use Data");
            Box_OtsAirTmpCrValMsk.SelectedIndex = 0;

           Lab_VehSpdAvgNDrvn.Text = (Convert.ToInt32((Bar_VehSpdAvgNDrvn.Value * 0.015625))).ToString();
           Lab_VehSpdAvgDrvn.Text = (Convert.ToInt32((Bar_VehSpdAvgDrvn.Value * 0.015625))).ToString();
           
            
           
        }

        private void Bar_VehSpdAvgNDrvn_Scroll(object sender, EventArgs e)
        {
            Lab_VehSpdAvgNDrvn.Text = (Convert.ToInt32((Bar_VehSpdAvgNDrvn.Value * 0.015625))).ToString();
        }

        private void Bar_VehSpdAvgDrvn_Scroll(object sender, EventArgs e)
        {
           Lab_VehSpdAvgDrvn.Text = (Convert.ToInt32((Bar_VehSpdAvgDrvn.Value * 0.015625))).ToString();
           
        }

        private void Box_BatVlt_FATE_ValueChanged(object sender, EventArgs e)
        {
            Box_BatVlt.Value = Box_BatVlt_FATE.Value * 10;
        }

        private void Box_IntDimDspLvlPlt_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_IntDimDspLvlPlt.Value = Box_IntDimDspLvlPlt_FAKE.Value * 255 / 100;
        }

        private void Box_IntDimLvl_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_IntDimLvl.Value = Box_IntDimLvl_FAKE.Value * 255 / 100;
        }

        private void Box_FlLvlPct_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_FlLvlPct.Value = Box_FlLvlPct_FAKE.Value * 255 / 100;
        }

        private void Box_OtsAirTmpCrVal_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_OtsAirTmpCrVal.Value = Box_OtsAirTmpCrVal_FAKE.Value * 2 + 80 ;
        }

        private void Box_OtsAirTmp_FAKE_ValueChanged(object sender, EventArgs e)
        {
            Box_OtsAirTmp.Value = Box_OtsAirTmp_FAKE.Value * 2 + 80;
        }
    }
}
