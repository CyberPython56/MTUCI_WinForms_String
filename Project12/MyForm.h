#pragma once
#include "Header.h"

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ btnClear;
	protected:

    private: System::Windows::Forms::Button^ btnTask;
    private: System::Windows::Forms::Button^ btnExit;



















    private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ rchTxtBox1;
	private: System::Windows::Forms::Label^ lblArray1;
	private: System::Windows::Forms::RichTextBox^ rchTxtBox2;
	private: System::Windows::Forms::Label^ lblArray2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ lblN;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnTask = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rchTxtBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->lblArray1 = (gcnew System::Windows::Forms::Label());
			this->rchTxtBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->lblArray2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lblN = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				152)));
			this->tableLayoutPanel3->Controls->Add(this->btnClear, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->btnTask, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->btnExit, 0, 2);
			this->tableLayoutPanel3->Location = System::Drawing::Point(655, 68);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 34)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(152, 235);
			this->tableLayoutPanel3->TabIndex = 62;
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnClear->Location = System::Drawing::Point(5, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(142, 71);
			this->btnClear->TabIndex = 44;
			this->btnClear->Text = L"Очистить";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnTask
			// 
			this->btnTask->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnTask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnTask->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTask->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnTask->Location = System::Drawing::Point(4, 80);
			this->btnTask->Name = L"btnTask";
			this->btnTask->Size = System::Drawing::Size(143, 73);
			this->btnTask->TabIndex = 32;
			this->btnTask->Text = L"Решение";
			this->btnTask->UseVisualStyleBackColor = false;
			this->btnTask->Click += gcnew System::EventHandler(this, &MyForm::btnTask_Click);
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnExit->Location = System::Drawing::Point(4, 159);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(143, 73);
			this->btnExit->TabIndex = 33;
			this->btnExit->Text = L"Выход";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->label1->Location = System::Drawing::Point(15, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(792, 44);
			this->label1->TabIndex = 58;
			this->label1->Text = L"Приложениие в заданной строке, состоящей из слов, разделенных одним или более про"
				L"белами, \r\nвставляет в середину каждого слова четной длины букву «К» и находит ко"
				L"личество вставок.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// rchTxtBox1
			// 
			this->rchTxtBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rchTxtBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->rchTxtBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rchTxtBox1->ForeColor = System::Drawing::Color::Black;
			this->rchTxtBox1->Location = System::Drawing::Point(3, 23);
			this->rchTxtBox1->Name = L"rchTxtBox1";
			this->rchTxtBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->rchTxtBox1->Size = System::Drawing::Size(610, 81);
			this->rchTxtBox1->TabIndex = 30;
			this->rchTxtBox1->Text = L"";
			// 
			// lblArray1
			// 
			this->lblArray1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblArray1->AutoSize = true;
			this->lblArray1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblArray1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->lblArray1->Location = System::Drawing::Point(3, 0);
			this->lblArray1->Name = L"lblArray1";
			this->lblArray1->Size = System::Drawing::Size(220, 20);
			this->lblArray1->TabIndex = 28;
			this->lblArray1->Text = L"Обрабатываемая строка";
			// 
			// rchTxtBox2
			// 
			this->rchTxtBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rchTxtBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->rchTxtBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rchTxtBox2->ForeColor = System::Drawing::Color::Black;
			this->rchTxtBox2->Location = System::Drawing::Point(3, 150);
			this->rchTxtBox2->Name = L"rchTxtBox2";
			this->rchTxtBox2->ReadOnly = true;
			this->rchTxtBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->rchTxtBox2->Size = System::Drawing::Size(610, 82);
			this->rchTxtBox2->TabIndex = 31;
			this->rchTxtBox2->Text = L"";
			this->rchTxtBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::rchTxtBox2_TextChanged);
			// 
			// lblArray2
			// 
			this->lblArray2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblArray2->AutoSize = true;
			this->lblArray2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblArray2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->lblArray2->Location = System::Drawing::Point(3, 127);
			this->lblArray2->Name = L"lblArray2";
			this->lblArray2->Size = System::Drawing::Size(179, 20);
			this->lblArray2->TabIndex = 29;
			this->lblArray2->Text = L"Полученная строка";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->lblArray1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->lblArray2, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->rchTxtBox2, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->rchTxtBox1, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 68);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(616, 235);
			this->tableLayoutPanel1->TabIndex = 63;
			// 
			// lblN
			// 
			this->lblN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblN->AutoSize = true;
			this->lblN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->lblN->Location = System::Drawing::Point(15, 322);
			this->lblN->Name = L"lblN";
			this->lblN->Size = System::Drawing::Size(199, 23);
			this->lblN->TabIndex = 32;
			this->lblN->Text = L"Количество вставок: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->ClientSize = System::Drawing::Size(816, 370);
			this->Controls->Add(this->lblN);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(832, 409);
			this->Name = L"MyForm";
			this->Text = L"Обработка строк";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void btnTask_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int n = 0;
		String^ str1 = rchTxtBox1->Text;
		if (!str1->IsNullOrEmpty(str1)) {
			String^ str2 = Insert(str1, n);
			rchTxtBox2->Text = str2;
			lblN->Text = "Количество вставок: " + n.ToString();
			fill(rchTxtBox2, str2);
		}
		else MessageBox::Show("Введите строку перед запуском программы", "Ошибка ввода!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Ошибка ввода!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	rchTxtBox1->Clear();
	rchTxtBox2->Clear();
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void rchTxtBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
