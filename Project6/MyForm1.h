#pragma once
#include <windows.h>
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <regex>
#include <msclr/marshal_cppstd.h>

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;











	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(366, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(496, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���������� ������� �� ������� ��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 589);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"��������� ��������: ����� ������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 545);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 28);
			this->label3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1059, 581);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(389, 589);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 28);
			this->label4->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(71, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(191, 28);
			this->label5->TabIndex = 5;
			this->label5->Text = L"����������� ����:";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(71, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 28);
			this->label6->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(73, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 29);
			this->label7->TabIndex = 7;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1252, 626);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::vector<std::string> Separate(const std::string& strr)
		{
			std::vector<std::string> line;
			std::string token;
			std::istringstream iss(strr);
			while (std::getline(iss, token, '.'))
				line.push_back(token);
			return line;
		}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {	
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label4->Text = "������� �����: " + System::DateTime::Now.ToString();
		label5->Visible = true;
		
		std::string str;
		std::fstream f;
		f.open("C:\\text.txt", std::fstream::in | std::fstream::out);
		while (f) {

			std::getline(f, str);
			// ��������� ������ str
		}
		String^ s = gcnew String(str.c_str()); // ������������
		label3->Text = "������������  " + s; // ���������� � ����� ������� =)
		
		std::string arr;
		
		std::ifstream g;
		g.open("C:\\g.txt");
		while (!g.eof()) {
			g >> arr;
		}
		
		String^ j = gcnew String(arr.c_str()); // ������������
		label6->Text = j; // ���������� � ����� ������� =)
		arr = regex_replace(arr, regex("8"), "*");
		
		int k = 1;
		
		char mass[255];
		strcpy(mass, arr.c_str());

		//strcpy(mass, arr.c_str());
		for (int i = 0; i < strlen(mass); i++) {
			if (mass[i] == '.') {
				mass[i - k] = '*';
				k++;
			}
		}
		string strr = string(mass);
		

		std::vector<std::string> line = Separate(strr);
		for (int i = 0; i < line.size(); i++) {
			String^ sp = gcnew String(line[i].c_str()); // ������������
			label7->Text = label7->Text + "������ �" + (i+1) + " ���������� = " + sp + "\n";
		}

	}
};
}
