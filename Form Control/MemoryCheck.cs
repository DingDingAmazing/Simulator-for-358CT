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
    public partial class MemoryCheck : UserControl
    {
        string[] Item = { "K0R", "MTD0", "MTD1", "MTD3", "MTD4", "MTD5", "MTD6", "MTD9", "P0", "P1", "P2", "P3", "P4", "P5" };
        //97
        
        string[] Value = new string[14];
        string Value_Buff = "";
        public MemoryCheck()
        {
            InitializeComponent();
        }



        private void Btn_Read_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < 14; i++)
            {
                Value[i] = "";
            }
            while (this.Box_MemoryList.Rows.Count != 0)
            {
                this.Box_MemoryList.Rows.RemoveAt(0);
            }
        }

        public void Function_MC_AddInfo(string value, int item)
        {
            String[] Rows = new String[2];
            Rows[0] = Item[item];
            Rows[1] = value;
            Value_Buff = "";
            Box_MemoryList.Rows.Add(Rows);

        }

        public void Function_MC_AddInfo(int item)
        {
            String[] Rows = new String[2];
            Rows[0] = Item[item];
            Rows[1] = Value_Buff;
            Value_Buff = "";
            Box_MemoryList.Rows.Add(Rows);
        }

        public void Function_MC_ValueBuild(string value)
        {
            Value_Buff += value;
        }

        private void Box_MemoryList_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            
        }


    }
}
