namespace Form_Control
{
    partial class MemoryCheck
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
            this.Box_MemoryList = new System.Windows.Forms.DataGridView();
            this.B_Item = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.B_Value = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Btn_Read = new System.Windows.Forms.Button();
            this.Btn_MExport = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.Box_MemoryList)).BeginInit();
            this.SuspendLayout();
            // 
            // Box_MemoryList
            // 
            this.Box_MemoryList.AllowUserToAddRows = false;
            this.Box_MemoryList.AllowUserToDeleteRows = false;
            this.Box_MemoryList.AllowUserToResizeColumns = false;
            this.Box_MemoryList.AllowUserToResizeRows = false;
            this.Box_MemoryList.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Box_MemoryList.CellBorderStyle = System.Windows.Forms.DataGridViewCellBorderStyle.None;
            this.Box_MemoryList.ClipboardCopyMode = System.Windows.Forms.DataGridViewClipboardCopyMode.EnableAlwaysIncludeHeaderText;
            this.Box_MemoryList.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.Box_MemoryList.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.B_Item,
            this.B_Value});
            this.Box_MemoryList.Location = new System.Drawing.Point(3, 3);
            this.Box_MemoryList.Name = "Box_MemoryList";
            this.Box_MemoryList.RowHeadersVisible = false;
            this.Box_MemoryList.Size = new System.Drawing.Size(489, 184);
            this.Box_MemoryList.TabIndex = 4;
            // 
            // B_Item
            // 
            this.B_Item.HeaderText = "Item";
            this.B_Item.Name = "B_Item";
            this.B_Item.ReadOnly = true;
            // 
            // B_Value
            // 
            this.B_Value.HeaderText = "Value";
            this.B_Value.Name = "B_Value";
            this.B_Value.ReadOnly = true;
            this.B_Value.Width = 400;
            // 
            // Btn_Read
            // 
            this.Btn_Read.Location = new System.Drawing.Point(511, 13);
            this.Btn_Read.Name = "Btn_Read";
            this.Btn_Read.Size = new System.Drawing.Size(75, 23);
            this.Btn_Read.TabIndex = 3;
            this.Btn_Read.Text = "Read";
            this.Btn_Read.UseVisualStyleBackColor = true;
            // 
            // Btn_MExport
            // 
            this.Btn_MExport.Location = new System.Drawing.Point(511, 74);
            this.Btn_MExport.Name = "Btn_MExport";
            this.Btn_MExport.Size = new System.Drawing.Size(74, 24);
            this.Btn_MExport.TabIndex = 6;
            this.Btn_MExport.Text = "Export";
            this.Btn_MExport.UseVisualStyleBackColor = true;
            // 
            // MemoryCheck
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.Btn_MExport);
            this.Controls.Add(this.Box_MemoryList);
            this.Controls.Add(this.Btn_Read);
            this.Name = "MemoryCheck";
            this.Size = new System.Drawing.Size(716, 506);
            ((System.ComponentModel.ISupportInitialize)(this.Box_MemoryList)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        public System.Windows.Forms.DataGridView Box_MemoryList;
        private System.Windows.Forms.DataGridViewTextBoxColumn B_Item;
        private System.Windows.Forms.DataGridViewTextBoxColumn B_Value;
        public System.Windows.Forms.Button Btn_Read;
        public System.Windows.Forms.Button Btn_MExport;

    }
}
