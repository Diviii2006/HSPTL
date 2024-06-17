#pragma once
#include"MyForm2.h"

namespace HSPTL {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::Red;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(766, 77);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(259, 34);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->Value = System::DateTime(2024, 4, 8, 17, 49, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::dateTimePicker1_ValueChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(554, 412);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ENTER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(401, 249);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 33);
			this->label1->TabIndex = 4;
			this->label1->Text = L"SPECIALISTS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(741, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 33);
			this->label2->TabIndex = 4;
			this->label2->Text = L"TIMINGS";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"1.CARDIOLOGIST", L"2.DENTIST", L"3.ENT SPECIALIST",
					L"4.GYNECOLOGIST", L"5.PSYCHIATRIST"
			});
			this->comboBox1->Location = System::Drawing::Point(398, 318);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(216, 30);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"SELECT";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(386, 532);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(573, 31);
			this->label3->TabIndex = 6;
			this->label3->Text = L"NOTE:-SATURDAY AND SUNDAY ARE HOLIDAYS";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"10:00AM-10:30AM", L"10:30AM-11:00AM", L"11:00AM-11:30AM",
					L"11:30AM-12:00PM", L"12:00PM-12:30PM", L"12:30PM-01:00PM"
			});
			this->comboBox2->Location = System::Drawing::Point(729, 313);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(230, 35);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"SELECT";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(333, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(420, 50);
			this->label4->TabIndex = 8;
			this->label4->Text = L"AURORA HOSPITALS";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1108, 605);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"MyForm1";
			this->Text = L"aurorahospitals.com";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox1->Text=="SELECT" && comboBox2->Text=="SELECT")
		{
			MessageBox::Show("please select items", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
			else
			{
				String^ timings = comboBox2->Text;
				String^ specialist = comboBox1->Text;
				String^ date = dateTimePicker1->Text;
				String^ con = "Data Source=Deepak\\SQLEXPRESS;Initial Catalog=lucky;Integrated Security=True;Encrypt=False";
				SqlConnection conn(con);
				conn.Open();
				String^ sqlq = "INSERT INTO ap_timings(timings,specialist,date) VALUES(@timings,@specialist,@date);";
				SqlCommand cmd(sqlq, % conn);
				cmd.Parameters->AddWithValue("@timings", timings);
				cmd.Parameters->AddWithValue("@specialist", specialist);
				cmd.Parameters->AddWithValue("@date", date);
				cmd.ExecuteNonQuery();
				conn.Close();
				this->Hide();
				MyForm2^ mf2 = gcnew MyForm2();
				mf2->ShowDialog();
			}
		
		
	}
	
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}