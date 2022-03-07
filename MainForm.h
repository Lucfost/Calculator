//ABDULLAYEV
#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// 
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TextBox^ txtDisplay;
    protected:

    protected:
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ btn_equals;
    private: System::Windows::Forms::Button^ btn_decimal;



    private: System::Windows::Forms::Button^ button22;


    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ btn_plus;


    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ btn_minus;


    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ btn_bump;



    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ btn_divide;


    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button_space;
    private: System::Windows::Forms::Button^ button_clear;


    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button_allclear;


	private:
		/// <summary>
		/// 
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 
		/// 
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
            this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btn_equals = (gcnew System::Windows::Forms::Button());
            this->btn_decimal = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->btn_plus = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->btn_minus = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->btn_bump = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->btn_divide = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button_space = (gcnew System::Windows::Forms::Button());
            this->button_clear = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button_allclear = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // txtDisplay
            // 
            this->txtDisplay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtDisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDisplay->ForeColor = System::Drawing::SystemColors::Window;
            this->txtDisplay->Location = System::Drawing::Point(9, 58);
            this->txtDisplay->Multiline = true;
            this->txtDisplay->Name = L"txtDisplay";
            this->txtDisplay->Size = System::Drawing::Size(339, 37);
            this->txtDisplay->TabIndex = 0;
            this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->ColumnCount = 4;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->Controls->Add(this->btn_equals, 3, 5);
            this->tableLayoutPanel1->Controls->Add(this->btn_decimal, 2, 5);
            this->tableLayoutPanel1->Controls->Add(this->button22, 0, 5);
            this->tableLayoutPanel1->Controls->Add(this->btn_plus, 3, 4);
            this->tableLayoutPanel1->Controls->Add(this->button19, 2, 4);
            this->tableLayoutPanel1->Controls->Add(this->button18, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->button17, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->btn_minus, 3, 3);
            this->tableLayoutPanel1->Controls->Add(this->button15, 2, 3);
            this->tableLayoutPanel1->Controls->Add(this->button14, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->button13, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn_bump, 3, 2);
            this->tableLayoutPanel1->Controls->Add(this->button11, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->button10, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->button9, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->btn_divide, 3, 1);
            this->tableLayoutPanel1->Controls->Add(this->button7, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->button6, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->button5, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->button_space, 3, 0);
            this->tableLayoutPanel1->Controls->Add(this->button_clear, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->button_allclear, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->button21, 1, 5);
            this->tableLayoutPanel1->Location = System::Drawing::Point(6, 114);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 6;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(345, 328);
            this->tableLayoutPanel1->TabIndex = 1;
            // 
            // btn_equals
            // 
            this->btn_equals->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_equals->BackColor = System::Drawing::Color::Salmon;
            this->btn_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_equals->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_equals->Location = System::Drawing::Point(261, 273);
            this->btn_equals->Name = L"btn_equals";
            this->btn_equals->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
            this->btn_equals->Size = System::Drawing::Size(81, 52);
            this->btn_equals->TabIndex = 2;
            this->btn_equals->Text = L"=";
            this->btn_equals->UseVisualStyleBackColor = false;
            this->btn_equals->Click += gcnew System::EventHandler(this, &MainForm::btn_equals_Click);
            // 
            // btn_decimal
            // 
            this->btn_decimal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_decimal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->btn_decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_decimal->Location = System::Drawing::Point(175, 273);
            this->btn_decimal->Name = L"btn_decimal";
            this->btn_decimal->Padding = System::Windows::Forms::Padding(2, 0, 0, 9);
            this->btn_decimal->Size = System::Drawing::Size(80, 52);
            this->btn_decimal->TabIndex = 2;
            this->btn_decimal->Text = L".";
            this->btn_decimal->UseVisualStyleBackColor = false;
            this->btn_decimal->Click += gcnew System::EventHandler(this, &MainForm::btn_decimal_Click);
            // 
            // button22
            // 
            this->button22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->Location = System::Drawing::Point(3, 273);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(80, 52);
            this->button22->TabIndex = 2;
            this->button22->Text = L"0";
            this->button22->UseVisualStyleBackColor = false;
            this->button22->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // button21
            // 
            this->button21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->Location = System::Drawing::Point(89, 273);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(80, 52);
            this->button21->TabIndex = 2;
            this->button21->Text = L"±";
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Click += gcnew System::EventHandler(this, &MainForm::button21_Click);
            // 
            // btn_plus
            // 
            this->btn_plus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_plus->Location = System::Drawing::Point(261, 219);
            this->btn_plus->Name = L"btn_plus";
            this->btn_plus->Size = System::Drawing::Size(81, 48);
            this->btn_plus->TabIndex = 2;
            this->btn_plus->Text = L"+";
            this->btn_plus->UseVisualStyleBackColor = false;
            this->btn_plus->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
            // 
            // button19
            // 
            this->button19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->Location = System::Drawing::Point(175, 219);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(80, 48);
            this->button19->TabIndex = 2;
            this->button19->Text = L"3";
            this->button19->UseVisualStyleBackColor = false;
            this->button19->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // button18
            // 
            this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->Location = System::Drawing::Point(89, 219);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(80, 48);
            this->button18->TabIndex = 2;
            this->button18->Text = L"2";
            this->button18->UseVisualStyleBackColor = false;
            this->button18->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // button17
            // 
            this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->Location = System::Drawing::Point(3, 219);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(80, 48);
            this->button17->TabIndex = 2;
            this->button17->Text = L"1";
            this->button17->UseVisualStyleBackColor = false;
            this->button17->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // btn_minus
            // 
            this->btn_minus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_minus->Location = System::Drawing::Point(261, 165);
            this->btn_minus->Name = L"btn_minus";
            this->btn_minus->Padding = System::Windows::Forms::Padding(0, 0, 0, 17);
            this->btn_minus->Size = System::Drawing::Size(81, 48);
            this->btn_minus->TabIndex = 2;
            this->btn_minus->Text = L"_";
            this->btn_minus->UseVisualStyleBackColor = false;
            this->btn_minus->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
            // 
            // button15
            // 
            this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->Location = System::Drawing::Point(175, 165);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(80, 48);
            this->button15->TabIndex = 2;
            this->button15->Text = L"6";
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // button14
            // 
            this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->Location = System::Drawing::Point(89, 165);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(80, 48);
            this->button14->TabIndex = 2;
            this->button14->Text = L"5";
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // button13
            // 
            this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->Location = System::Drawing::Point(3, 165);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(80, 48);
            this->button13->TabIndex = 2;
            this->button13->Text = L"4";
            this->button13->UseVisualStyleBackColor = false;
            this->button13->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // btn_bump
            // 
            this->btn_bump->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_bump->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->btn_bump->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_bump->Location = System::Drawing::Point(261, 111);
            this->btn_bump->Name = L"btn_bump";
            this->btn_bump->Size = System::Drawing::Size(81, 48);
            this->btn_bump->TabIndex = 2;
            this->btn_bump->Text = L"X";
            this->btn_bump->UseVisualStyleBackColor = false;
            this->btn_bump->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
            // 
            // button11
            // 
            this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(175, 111);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(80, 48);
            this->button11->TabIndex = 2;
            this->button11->Text = L"9";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // button10
            // 
            this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(89, 111);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(80, 48);
            this->button10->TabIndex = 2;
            this->button10->Text = L"8";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // button9
            // 
            this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(3, 111);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(80, 48);
            this->button9->TabIndex = 2;
            this->button9->Text = L"7";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
            // 
            // btn_divide
            // 
            this->btn_divide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_divide->Location = System::Drawing::Point(261, 57);
            this->btn_divide->Name = L"btn_divide";
            this->btn_divide->Size = System::Drawing::Size(81, 48);
            this->btn_divide->TabIndex = 2;
            this->btn_divide->Text = L"/";
            this->btn_divide->UseVisualStyleBackColor = false;
            this->btn_divide->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
            // 
            // button7
            // 
            this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(175, 57);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(80, 48);
            this->button7->TabIndex = 2;
            this->button7->Text = L"LOG";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(89, 57);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(80, 48);
            this->button6->TabIndex = 2;
            this->button6->Text = L"EXP";
            this->button6->UseVisualStyleBackColor = false;
            // 
            // button5
            // 
            this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(162)));
            this->button5->ForeColor = System::Drawing::SystemColors::Control;
            this->button5->Location = System::Drawing::Point(3, 57);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(80, 48);
            this->button5->TabIndex = 2;
            this->button5->Text = L"MOD";
            this->button5->UseVisualStyleBackColor = false;
            // 
            // button_space
            // 
            this->button_space->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button_space->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button_space->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_space.Image")));
            this->button_space->Location = System::Drawing::Point(261, 3);
            this->button_space->Name = L"button_space";
            this->button_space->Size = System::Drawing::Size(81, 48);
            this->button_space->TabIndex = 2;
            this->button_space->UseVisualStyleBackColor = false;
            this->button_space->Click += gcnew System::EventHandler(this, &MainForm::button_space_Click);
            // 
            // button_clear
            // 
            this->button_clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_clear->Location = System::Drawing::Point(175, 3);
            this->button_clear->Name = L"button_clear";
            this->button_clear->Size = System::Drawing::Size(80, 48);
            this->button_clear->TabIndex = 2;
            this->button_clear->Text = L"C";
            this->button_clear->UseVisualStyleBackColor = false;
            this->button_clear->Click += gcnew System::EventHandler(this, &MainForm::button_clear_Click);
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button1->AutoEllipsis = true;
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::Control;
            this->button1->Location = System::Drawing::Point(3, 3);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(80, 48);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Pi";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
            // 
            // button_SQRT
            // 
            this->button_allclear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button_allclear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(30)));
            this->button_allclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_allclear->ForeColor = System::Drawing::SystemColors::Control;
            this->button_allclear->Location = System::Drawing::Point(89, 3);
            this->button_allclear->Name = L"button_allclear";
            this->button_allclear->Size = System::Drawing::Size(80, 48);
            this->button_allclear->TabIndex = 2;
            this->button_allclear->Text = L"SQRT";
            this->button_allclear->UseVisualStyleBackColor = false;
            this->button_allclear->Click += gcnew System::EventHandler(this, &MainForm::button_allclear_Click);
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Gray;
            this->ClientSize = System::Drawing::Size(357, 440);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Controls->Add(this->txtDisplay);
            this->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ForeColor = System::Drawing::SystemColors::Control;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MinimumSize = System::Drawing::Size(373, 479);
            this->Name = L"MainForm";
            this->Text = L"Calculator";
            this->tableLayoutPanel1->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        double firstDigit, secondDigit, result;
        String^ operators;
        int iFirst, iSecond, iResults;
        int a;

    private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
        Button^ Numbers = safe_cast<Button^>(sender);

        if (txtDisplay->Text == "0")
        {
            txtDisplay->Text = Numbers->Text;
        }
        else
        {
            txtDisplay->Text = txtDisplay->Text + Numbers->Text;
        }
    }
    private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
        Button^ NumbersOp = safe_cast<Button^>(sender);

        firstDigit = Double::Parse(txtDisplay->Text);
        txtDisplay->Text = "";
        operators = NumbersOp->Text;

    }
    private: System::Void btn_decimal_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!txtDisplay->Text->Contains ("."))
        {
            txtDisplay->Text = txtDisplay->Text + ".";
        }
    }
    private: System::Void btn_equals_Click(System::Object^ sender, System::EventArgs^ e) {
        
        secondDigit = Double::Parse(txtDisplay->Text);

        if (operators == "+")
        {
            result = firstDigit + secondDigit;
            txtDisplay->Text = System::Convert::ToString(result);
        }

        else if (operators == "_")
        {
            result = firstDigit - secondDigit;
            txtDisplay->Text = System::Convert::ToString(result);
        }

        else if (operators == "X")
        {
            result = firstDigit * secondDigit;
            txtDisplay->Text = System::Convert::ToString(result);
        }

        else if (operators == "/")
        {
            result = firstDigit / secondDigit;
            txtDisplay->Text = System::Convert::ToString(result);
        }
        else if (operators == "MOD")
        {
            iFirst = Convert::ToInt32(firstDigit);
            iSecond = Convert::ToInt32(secondDigit);
            iResults = iFirst % iSecond;
            txtDisplay->Text = System::Convert::ToString(iResults);
        }
        else if (operators == "EXP")
        {
            result = (firstDigit, (1 / secondDigit));
            txtDisplay->Text = System::Convert::ToString(Math::Exp((result)));
        }   
    }
    private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
        txtDisplay->Text = "0";
    }
    private: System::Void button_allclear_Click(System::Object^ sender, System::EventArgs^ e) {
        a = Double::Parse(txtDisplay->Text);
        a = Math::Sqrt(a);
        txtDisplay->Text = System::Convert::ToString(txtDisplay->Text);
    }
    private: System::Void button_space_Click(System::Object^ sender, System::EventArgs^ e) {
        if (txtDisplay->Text->Length > 0)
        {
            txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
        }
        if (txtDisplay->Text == "")
        {
            txtDisplay->Text = "0";
        }
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        a = Double::Parse(txtDisplay->Text);
        txtDisplay->Text = System::Convert::ToString("LOG " + "(" + (txtDisplay->Text) + ")");
        a = Math::Log(a);
        txtDisplay->Text = System::Convert::ToString(a);
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        txtDisplay->Text = ("3.14159265359");
    }
    private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
        if (txtDisplay->Text->Contains("-"))
        {
            txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
        }
        else
        {
            txtDisplay->Text = "-" + txtDisplay->Text;
        }
    }
};
}
