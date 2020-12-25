#pragma once
#include "MyForm1.h"
#include <windows.h>
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <fstream>

#include <string>
#include <msclr/marshal_cppstd.h>

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Threading;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		String^ imy;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(144, 41);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"јвторизаци€ пользовател€";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(226, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"¬ведите данные";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(78, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"»м€ пользовател€: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(78, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ѕароль:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(347, 152);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 28);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(347, 204);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 28);
			this->textBox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"¬ход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(641, 433);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"јвторизаци€";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		

			Visible = false;
			MyForm1^ form = gcnew MyForm1;
			form->ShowDialog();
			Close();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	System::String^ xyz = textBox1->Text;
	std::string converted_xyz = msclr::interop::marshal_as< std::string >(xyz);
	std::fstream f;
	f.open("C:\\text.txt", std::fstream::trunc | std::fstream::out);
	
	f << converted_xyz;
	

}
};
}
