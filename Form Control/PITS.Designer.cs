namespace Form_Control
{
    partial class PITS
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Box_PITsList = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Length = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Btn_Get = new System.Windows.Forms.Button();
            this.Btn_PExport = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.Box_PITsList)).BeginInit();
            this.SuspendLayout();
            // 
            // Box_PITsList
            // 
            this.Box_PITsList.AllowUserToAddRows = false;
            this.Box_PITsList.AllowUserToDeleteRows = false;
            this.Box_PITsList.AllowUserToResizeColumns = false;
            this.Box_PITsList.AllowUserToResizeRows = false;
            this.Box_PITsList.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Box_PITsList.CellBorderStyle = System.Windows.Forms.DataGridViewCellBorderStyle.None;
            this.Box_PITsList.ClipboardCopyMode = System.Windows.Forms.DataGridViewClipboardCopyMode.EnableAlwaysIncludeHeaderText;
            this.Box_PITsList.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.Box_PITsList.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.Column1,
            this.Length,
            this.dataGridViewTextBoxColumn2});
            this.Box_PITsList.Location = new System.Drawing.Point(16, 12);
            this.Box_PITsList.Name = "Box_PITsList";
            this.Box_PITsList.RowHeadersVisible = false;
            this.Box_PITsList.Size = new System.Drawing.Size(482, 189);
            this.Box_PITsList.TabIndex = 5;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.HeaderText = "Item";
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            this.dataGridViewTextBoxColumn1.Width = 200;
            // 
            // Column1
            // 
            this.Column1.HeaderText = "SWID";
            this.Column1.Name = "Column1";
            // 
            // Length
            // 
            this.Length.HeaderText = "Length";
            this.Length.Name = "Length";
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.HeaderText = "Value";
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            this.dataGridViewTextBoxColumn2.Width = 280;
            // 
            // Btn_Get
            // 
            this.Btn_Get.Location = new System.Drawing.Point(504, 21);
            this.Btn_Get.Name = "Btn_Get";
            this.Btn_Get.Size = new System.Drawing.Size(75, 23);
            this.Btn_Get.TabIndex = 4;
            this.Btn_Get.Text = "Read";
            this.Btn_Get.UseVisualStyleBackColor = true;
            this.Btn_Get.Click += new System.EventHandler(this.Btn_Get_Click);
            // 
            // Btn_PExport
            // 
            this.Btn_PExport.Location = new System.Drawing.Point(504, 84);
            this.Btn_PExport.Name = "Btn_PExport";
            this.Btn_PExport.Size = new System.Drawing.Size(74, 23);
            this.Btn_PExport.TabIndex = 7;
            this.Btn_PExport.Text = "Export";
            this.Btn_PExport.UseVisualStyleBackColor = true;
            // 
            // PITS
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.Btn_PExport);
            this.Controls.Add(this.Box_PITsList);
            this.Controls.Add(this.Btn_Get);
            this.Name = "PITS";
            this.Size = new System.Drawing.Size(792, 349);
            ((System.ComponentModel.ISupportInitialize)(this.Box_PITsList)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        public System.Windows.Forms.DataGridView Box_PITsList;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Length;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        public System.Windows.Forms.Button Btn_Get;
        public System.Windows.Forms.Button Btn_PExport;
    }
}
