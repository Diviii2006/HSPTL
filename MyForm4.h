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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	public:
		String^ con = "Data Source=Deepak\\SQLEXPRESS;Initial Catalog=lucky;Integrated Security=True;Encrypt=False";
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(319, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(420, 50);
			this->label2->TabIndex = 2;
			this->label2->Text = L"AURORA HOSPITALS";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(384, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 45);
			this->label1->TabIndex = 3;
			this->label1->Text = L"WELCOME TO......";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 280);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(560, 355);
			this->dataGridView1->TabIndex = 6;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(578, 280);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(475, 355);
			this->dataGridView2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(261, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 44);
			this->button1->TabIndex = 8;
			this->button1->Text = L"SHOW ENTRIES";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(160, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 28);
			this->label4->TabIndex = 9;
			this->label4->Text = L"PATIENT DETAILS";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(615, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(307, 31);
			this->label5->TabIndex = 10;
			this->label5->Text = L"APPOINTMENT TIMINGS";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(635, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 41);
			this->button2->TabIndex = 11;
			this->button2->Text = L"CLOSE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1082, 645);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm4";
			this->Text = L"aurorahospitals.com";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		bsource->DataSource = dtb;
		dataGridView1->DataSource = bsource;
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Close();
}
private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
