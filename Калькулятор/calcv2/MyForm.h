#pragma once
#include "lllint.h"

std::string num;
big_integer first, second;
bool rz = false; //флаг результата в окне
unsigned short int oper = 0;

namespace calcv2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

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
			this->sp = gcnew SoundPlayer("Лесная мелодия.wav");
			this->sp->PlayLooping();
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
	private: System::Windows::Forms::Button^ button_min;
	protected:
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button_clr;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button_pls;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button_rez;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button_del;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button_div;
	private: System::Windows::Forms::TextBox^ textbox;
	private: System::Windows::Forms::Button^ button_mod;
	private: System::Windows::Forms::Button^ button_mul;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::ComponentModel::IContainer^ components;
	private: //Где-нибудь в коде
		SoundPlayer^ sp;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		//сгенерированный код
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_min = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button_clr = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button_pls = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_rez = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->textbox = (gcnew System::Windows::Forms::TextBox());
			this->button_mod = (gcnew System::Windows::Forms::Button());
			this->button_mul = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_min
			// 
			this->button_min->BackColor = System::Drawing::Color::LimeGreen;
			this->button_min->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_min->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_min->ForeColor = System::Drawing::Color::Black;
			this->button_min->Location = System::Drawing::Point(500, 390);
			this->button_min->Margin = System::Windows::Forms::Padding(2);
			this->button_min->Name = L"button_min";
			this->button_min->Size = System::Drawing::Size(108, 99);
			this->button_min->TabIndex = 6;
			this->button_min->Text = L"-";
			this->button_min->UseVisualStyleBackColor = false;
			this->button_min->Click += gcnew System::EventHandler(this, &MyForm::button_min_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LimeGreen;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(500, 265);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 103);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button_clr
			// 
			this->button_clr->BackColor = System::Drawing::Color::LimeGreen;
			this->button_clr->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_clr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_clr->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clr->ForeColor = System::Drawing::Color::Black;
			this->button_clr->Location = System::Drawing::Point(783, 266);
			this->button_clr->Margin = System::Windows::Forms::Padding(2);
			this->button_clr->Name = L"button_clr";
			this->button_clr->Size = System::Drawing::Size(109, 102);
			this->button_clr->TabIndex = 10;
			this->button_clr->Text = L"C";
			this->button_clr->UseVisualStyleBackColor = false;
			this->button_clr->Click += gcnew System::EventHandler(this, &MyForm::button_clr_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LimeGreen;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(230, 266);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 102);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button_pls
			// 
			this->button_pls->BackColor = System::Drawing::Color::LimeGreen;
			this->button_pls->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_pls.BackgroundImage")));
			this->button_pls->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_pls->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_pls->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pls->ForeColor = System::Drawing::Color::Black;
			this->button_pls->Location = System::Drawing::Point(96, 390);
			this->button_pls->Margin = System::Windows::Forms::Padding(2);
			this->button_pls->Name = L"button_pls";
			this->button_pls->Size = System::Drawing::Size(105, 99);
			this->button_pls->TabIndex = 3;
			this->button_pls->Text = L"+";
			this->button_pls->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button_pls->UseVisualStyleBackColor = false;
			this->button_pls->Click += gcnew System::EventHandler(this, &MyForm::button_pls_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LimeGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(499, 140);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 103);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button_rez
			// 
			this->button_rez->BackColor = System::Drawing::Color::LimeGreen;
			this->button_rez->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_rez->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_rez->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_rez->ForeColor = System::Drawing::Color::Black;
			this->button_rez->Location = System::Drawing::Point(783, 390);
			this->button_rez->Margin = System::Windows::Forms::Padding(2);
			this->button_rez->Name = L"button_rez";
			this->button_rez->Size = System::Drawing::Size(109, 99);
			this->button_rez->TabIndex = 5;
			this->button_rez->Text = L"=";
			this->button_rez->UseVisualStyleBackColor = false;
			this->button_rez->Click += gcnew System::EventHandler(this, &MyForm::button_rez_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LimeGreen;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(364, 140);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 103);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LimeGreen;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(640, 265);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(111, 103);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LimeGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(230, 140);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 103);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LimeGreen;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(364, 265);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(104, 103);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::LimeGreen;
			this->button0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->ForeColor = System::Drawing::Color::Black;
			this->button0->Location = System::Drawing::Point(96, 140);
			this->button0->Margin = System::Windows::Forms::Padding(2);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(105, 103);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LimeGreen;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(96, 266);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 102);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button_del
			// 
			this->button_del->BackColor = System::Drawing::Color::LimeGreen;
			this->button_del->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_del->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_del->ForeColor = System::Drawing::Color::Black;
			this->button_del->Location = System::Drawing::Point(783, 140);
			this->button_del->Margin = System::Windows::Forms::Padding(2);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(109, 103);
			this->button_del->TabIndex = 9;
			this->button_del->Text = L"←";
			this->button_del->UseVisualStyleBackColor = false;
			this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LimeGreen;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(640, 140);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 103);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button_div
			// 
			this->button_div->BackColor = System::Drawing::Color::LimeGreen;
			this->button_div->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_div->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_div->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_div->ForeColor = System::Drawing::Color::Black;
			this->button_div->Location = System::Drawing::Point(364, 390);
			this->button_div->Margin = System::Windows::Forms::Padding(2);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(104, 99);
			this->button_div->TabIndex = 7;
			this->button_div->Text = L"/";
			this->button_div->UseVisualStyleBackColor = false;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button_div_Click);
			// 
			// textbox
			// 
			this->textbox->BackColor = System::Drawing::Color::FloralWhite;
			this->textbox->Cursor = System::Windows::Forms::Cursors::No;
			this->textbox->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox->ForeColor = System::Drawing::Color::Black;
			this->textbox->Location = System::Drawing::Point(96, 51);
			this->textbox->Margin = System::Windows::Forms::Padding(2);
			this->textbox->Name = L"textbox";
			this->textbox->Size = System::Drawing::Size(796, 60);
			this->textbox->TabIndex = 12;
			this->textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textbox->TextChanged += gcnew System::EventHandler(this, &MyForm::textbox_TextChanged);
			// 
			// button_mod
			// 
			this->button_mod->BackColor = System::Drawing::Color::LimeGreen;
			this->button_mod->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_mod->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_mod->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mod->ForeColor = System::Drawing::Color::Black;
			this->button_mod->Location = System::Drawing::Point(230, 390);
			this->button_mod->Margin = System::Windows::Forms::Padding(2);
			this->button_mod->Name = L"button_mod";
			this->button_mod->Size = System::Drawing::Size(105, 99);
			this->button_mod->TabIndex = 8;
			this->button_mod->Text = L"%";
			this->button_mod->UseVisualStyleBackColor = false;
			this->button_mod->Click += gcnew System::EventHandler(this, &MyForm::button_mod_Click);
			// 
			// button_mul
			// 
			this->button_mul->BackColor = System::Drawing::Color::LimeGreen;
			this->button_mul->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_mul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_mul->Font = (gcnew System::Drawing::Font(L"GOST type B", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mul->ForeColor = System::Drawing::Color::Black;
			this->button_mul->Location = System::Drawing::Point(640, 390);
			this->button_mul->Margin = System::Windows::Forms::Padding(2);
			this->button_mul->Name = L"button_mul";
			this->button_mul->Size = System::Drawing::Size(111, 99);
			this->button_mul->TabIndex = 4;
			this->button_mul->Text = L"*";
			this->button_mul->UseVisualStyleBackColor = false;
			this->button_mul->Click += gcnew System::EventHandler(this, &MyForm::button_mul_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button_mul);
			this->panel1->Controls->Add(this->button_mod);
			this->panel1->Controls->Add(this->textbox);
			this->panel1->Controls->Add(this->button_div);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button_del);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button0);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button_rez);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button_pls);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button_clr);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button_min);
			this->panel1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel1->Location = System::Drawing::Point(1, -18);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(999, 533);
			this->panel1->TabIndex = 13;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(998, 505);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//функция для перевода из System::String^ в string 
		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		//Проверка ввода на буквы
		bool check()
		{
			for (size_t i = 0; i < num.length(); i++)
				if (num[i] == ' ' || num[i] == '0' || num[i] == '1' || num[i] == '2' || num[i] == '3' || num[i] == '4' || 
					num[i] == '5' || num[i] == '6' || num[i] == '7' || num[i] == '8' || num[i] == '9')
					return true;
			System::Windows::Forms::MessageBox::Show("Во вводе есть неверные знаки или он пуст", "Ошибка");
			cls();
			return false;
		}
		//очистка textbox
		inline void cls() {
			num = " ";
			textbox->Text = " ";
			rz = false;
		}
		//функция обработки результата
		void rez()
		{
			if (!((second == 0) && (oper = 4))) {
				big_integer rez;
				switch (oper)
				{
				case 1: rez = first + second; break;
				case 2: rez = first - second; break;
				case 3: rez = first * second; break;
				case 4: rez = first / second; break;
				case 5: rez = first % second; break;
				default: break;
				}
				//вывод в textbox
				System::String^ s;
				if (rez._digits.empty()) s = "0";
				else {
					if (rez._is_negative) s += "-";
					s += rez._digits.back();
					for (long long i = static_cast<long long>(rez._digits.size()) - 2; i >= 0; --i) s += rez._digits[i];
				}
				textbox->Text = s;

				first = rez;
				second = NULL;
				rz = true;
			}
			else //Вывод предупреждения
				System::Windows::Forms::MessageBox::Show("Вы делите на ноль", "Ошибка"); //формат [текст] [заголовок]
		}
		//ввод чисел

	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		button0->BackColor = Color::YellowGreen;	
		if (rz) //если есть остаток от пердыдущих действий - очистка textbox
			cls();
		num += "0";
		textbox->Text += "0";
		/*button0->BackColor = Color::LimeGreen;*/
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "1";
		textbox->Text += "1";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "2";
		textbox->Text += "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		button3->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "3";
		textbox->Text += "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		button4->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "4";
		textbox->Text += "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		button5->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "5";
		textbox->Text += "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		button6->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "6";
		textbox->Text += "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		button7->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "7";
		textbox->Text += "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		button8->BackColor = Color::YellowGreen;
		if (rz)
			cls();
		num += "8";
		textbox->Text += "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		button9->BackColor = Color::YellowGreen;
		if(rz)
			cls();
		num += "9";
		textbox->Text += "9";
	}
		   //операции
	private: System::Void button_pls_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check()) {
			button_pls->BackColor = Color::YellowGreen;
			big_integer a(num); //если есть первое число для действий - вводится только второе
			if (first == NULL) {
				first = a;
				cls();
			}
			else if (second == NULL) {
				second = a;
				rez();
			}
			oper = 1;
		}
	}
	private: System::Void button_min_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check()) {
			button_min->BackColor = Color::YellowGreen;
			big_integer a(num);
			if (first == NULL) {
				first = a;
				cls();
			}
			else if (second == NULL) {
				second = a;
				rez();
			}
			oper = 2;
		}	}
	private: System::Void button_mul_Click(System::Object^ sender, System::EventArgs^ e) {
		button_mul->BackColor = Color::YellowGreen;
		if (check()) {
			big_integer a(num);
			if (first == NULL) {
				first = a;
				cls();
			}
			else if (second == NULL) {
				second = a;
				rez();
			}
			oper = 3;
		}	}
	private: System::Void button_div_Click(System::Object^ sender, System::EventArgs^ e) {
		button_div->BackColor = Color::YellowGreen;
		if (check()) {
			big_integer a(num);
			if (first == NULL) {
				first = a;
				cls();
			}
			else if (second == NULL) {
				second = a;
				rez();
			}
			oper = 4;
		}	}
	private: System::Void button_mod_Click(System::Object^ sender, System::EventArgs^ e) {
		button_mod->BackColor = Color::YellowGreen;
		if (check()) {
			big_integer a(num);
			if (first == NULL) {
				first = a;
				cls();
			}
			else if (second == NULL) {
				second = a;
				rez();
			}
			oper = 5;
		}	}
		   //вывод результата
	private: System::Void button_rez_Click(System::Object^ sender, System::EventArgs^ e) {
		button_rez->BackColor = Color::YellowGreen;
		if (check()) {
			big_integer a(num);
			second = a;
			rez();
		}
	}
		   //удаление
	private: System::Void button_del_Click(System::Object^ sender, System::EventArgs^ e) {
		button_del->BackColor = Color::YellowGreen;
		std::string temp; //заполнение строки всеми занками, кроме последнего
		for (int i = 0; i < num.length() - 1; i++)
			temp += num[i];
		num = temp;
		System::String^ s = gcnew String(num.c_str());
		textbox->Text = s;
	}
	private: System::Void button_clr_Click(System::Object^ sender, System::EventArgs^ e) {
		button_clr->BackColor = Color::YellowGreen;
		second = NULL;
		first = NULL;
		oper = 0;
		cls();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

};

}
