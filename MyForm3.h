#pragma once

namespace HSPTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	public:
		String^con ="Data Source=Deepak\\SQLEXPRESS;Initial Catalog=lucky;Integrated Security=True;Encrypt=False";
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(308, -1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(420, 50);
			this->label2->TabIndex = 2;
			this->label2->Text = L"AURORA HOSPITALS";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(344, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"APPOINTMENT CONFIRMED";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(419, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"THANK YOU.......!!";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(317, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 38);
			this->button1->TabIndex = 4;
			this->button1->Text = L"PREVIEW";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 257);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(560, 385);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm3::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(591, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"PRINT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(591, 257);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(545, 385);
			this->dataGridView2->TabIndex = 5;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm3::dataGridView1_CellContentClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(124, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 28);
			this->label4->TabIndex = 7;
			this->label4->Text = L"PATIENT DETAILS";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(707, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(307, 31);
			this->label5->TabIndex = 8;
			this->label5->Text = L"APPOINTMENT TIMINGS";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 651);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm3";
			this->Text = L"aurorahospitals.com";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
	{
	
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		SqlConnection conn(con);
		conn.Open();
		String^ con = "Data Source=Deepak\\SQLEXPRESS;Initial Catalog=lucky;Integrated Security=True;Encrypt=False";
		String^ sqlq = "SELECT * FROM hospital;";
		SqlCommand^ cmd = gcnew SqlCommand(sqlq, % conn);
		SqlDataAdapter^ da = gcnew SqlDataAdapter();
		da->SelectCommand = cmd;
		DataTable^ dtb = gcnew DataTable();
		da->Fill(dtb);
		BindingSource^ bsource = gcnew BindingSource();
		bsource-> DataSource = dtb;
		dataGridView1-> DataSource = bsource;
		conn.Close();
		void dataload();
		{
			SqlConnection conn(con);
			conn.Open();
			String^ con = "Data Source=Deepak\\SQLEXPRESS;Initial Catalog=lucky;Integrated Security=True;Encrypt=False";
			String^ sqlq = "SELECT * FROM ap_timings;";
			SqlCommand^ cmd = gcnew SqlCommand(sqlq, % conn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter();

			da->SelectCommand = cmd;
			DataTable^ dtb = gcnew DataTable();
			da->Fill(dtb);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dtb;
			dataGridView2->DataSource = bsource;
			conn.Close();
		}

		
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{

	MessageBox::Show("printed Successfully", "success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Close();
}
};
}
