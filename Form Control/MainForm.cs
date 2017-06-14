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
    public partial class MainForm : UserControl
    {
        public MainForm()
        {
            InitializeComponent();
            Initialize();
        }

        private void Initialize()
        {
            Box_DrId.Items.Add("Driver #1");
            Box_DrId.Items.Add("Driver #2");
            Box_DrId.Items.Add("Driver #3");
            Box_DrId.Items.Add("Driver #4");
            Box_DrId.Items.Add("Driver #5");
            Box_DrId.Items.Add("Driver #6");
            Box_DrId.Items.Add("Driver #7");
            Box_DrId.Items.Add("Unknown");
            Box_DrId.SelectedIndex = 7;

            Lab_StrWhAng.Text = (Bar_StrWhAng.Value * 0.0625 - 2048).ToString();
        }

        private void Bar_StrWhAng_Scroll(object sender, EventArgs e)
        {
            Lab_StrWhAng.Text = (Bar_StrWhAng.Value * 0.0625 - 2048).ToString();
        }

        private void Bar_SysPwrMd_Scroll(object sender, EventArgs e)
        {

        }

        private void Bar_RLDoorAjarSwAct_Scroll(object sender, EventArgs e)
        {

        }

        private void groupBox4_Enter(object sender, EventArgs e)
        {

        }

        private void MainForm_Load(object sender, EventArgs e)
        {

        }

        private void groupBox5_Enter(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }
    }
}
