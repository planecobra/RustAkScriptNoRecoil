#pragma once

namespace PolarityRecode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for PolarityRecode
	/// </summary>
	public ref class PolarityRecode : public System::Windows::Forms::Form
	{
	public:
		PolarityRecode(void)
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
		~PolarityRecode()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;

	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;

	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ sensBox;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TrackBar^ trackBar1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PolarityRecode::typeid));
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->sensBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->BackColor = System::Drawing::Color::Black;
			this->radioButton8->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton8->Location = System::Drawing::Point(15, 225);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(51, 17);
			this->radioButton8->TabIndex = 8;
			this->radioButton8->Text = L"None";
			this->radioButton8->UseVisualStyleBackColor = false;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton8_Checked);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->BackColor = System::Drawing::Color::Black;
			this->radioButton7->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton7->Location = System::Drawing::Point(15, 183);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(73, 17);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->Text = L"M249 : F7";
			this->radioButton7->UseVisualStyleBackColor = false;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton7_Checked);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Black;
			this->radioButton5->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton5->Location = System::Drawing::Point(15, 163);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(96, 17);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->Text = L"Thompson : F6";
			this->radioButton5->UseVisualStyleBackColor = false;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton5_Checked);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::Color::Black;
			this->radioButton6->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton6->Location = System::Drawing::Point(15, 204);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(69, 17);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->Text = L"Semi : F8";
			this->radioButton6->UseVisualStyleBackColor = false;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton6_Checked);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Black;
			this->radioButton4->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton4->Location = System::Drawing::Point(15, 140);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(70, 17);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->Text = L"SMG : F5";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton4_Checked);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Black;
			this->radioButton1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton1->Location = System::Drawing::Point(15, 71);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(72, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->Text = L"AK47 : F2";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton1_Checked);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Black;
			this->radioButton3->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton3->Location = System::Drawing::Point(15, 117);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(68, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->Text = L"MP5 : F4";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton3_Checked);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Black;
			this->radioButton2->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton2->Location = System::Drawing::Point(15, 94);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(78, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"LR300 : F3";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton2_Checked);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->BackColor = System::Drawing::Color::Black;
			this->radioButton14->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton14->Location = System::Drawing::Point(15, 414);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(51, 17);
			this->radioButton14->TabIndex = 5;
			this->radioButton14->Text = L"None";
			this->radioButton14->UseVisualStyleBackColor = false;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton14_CheckedChanged);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->BackColor = System::Drawing::Color::Black;
			this->radioButton13->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton13->Location = System::Drawing::Point(15, 391);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(128, 17);
			this->radioButton13->TabIndex = 4;
			this->radioButton13->Text = L"Muzzle Boost : Num 6";
			this->radioButton13->UseVisualStyleBackColor = false;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton13_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->BackColor = System::Drawing::Color::Black;
			this->radioButton12->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton12->Location = System::Drawing::Point(15, 368);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(100, 17);
			this->radioButton12->TabIndex = 3;
			this->radioButton12->Text = L"Silencer : Num5";
			this->radioButton12->UseVisualStyleBackColor = false;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton12_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->BackColor = System::Drawing::Color::Black;
			this->radioButton11->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton11->Location = System::Drawing::Point(15, 345);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(100, 17);
			this->radioButton11->TabIndex = 2;
			this->radioButton11->Text = L"8x Sight : Num3";
			this->radioButton11->UseVisualStyleBackColor = false;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton11_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->BackColor = System::Drawing::Color::Black;
			this->radioButton10->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton10->Location = System::Drawing::Point(15, 322);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(111, 17);
			this->radioButton10->TabIndex = 1;
			this->radioButton10->Text = L"Holo Sight : Num1";
			this->radioButton10->UseVisualStyleBackColor = false;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->BackColor = System::Drawing::Color::Black;
			this->radioButton9->Checked = true;
			this->radioButton9->ForeColor = System::Drawing::Color::DarkOrchid;
			this->radioButton9->Location = System::Drawing::Point(15, 299);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(93, 17);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Simple : Num2";
			this->radioButton9->UseVisualStyleBackColor = false;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &PolarityRecode::radioButton9_CheckedChanged);
			// 
			// sensBox
			// 
			this->sensBox->BackColor = System::Drawing::Color::White;
			this->sensBox->ForeColor = System::Drawing::Color::DarkOrchid;
			this->sensBox->Location = System::Drawing::Point(526, 163);
			this->sensBox->Name = L"sensBox";
			this->sensBox->Size = System::Drawing::Size(206, 20);
			this->sensBox->TabIndex = 3;
			this->sensBox->TextChanged += gcnew System::EventHandler(this, &PolarityRecode::sensBox_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label5->Location = System::Drawing::Point(630, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 19);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Sensitivity:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Location = System::Drawing::Point(593, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Randomization:";
			this->label1->Click += gcnew System::EventHandler(this, &PolarityRecode::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(698, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PolarityRecode::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(-12, -2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(758, 49);
			this->panel2->TabIndex = 32;
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseUp);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label2->Location = System::Drawing::Point(555, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 16);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Status: Undetected";
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(4, 51);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 116);
			this->panel3->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(575, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label4->Location = System::Drawing::Point(24, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(231, 38);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Plague Cheats";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label6->Location = System::Drawing::Point(520, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(2)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label7->Location = System::Drawing::Point(646, 414);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 18);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Beta | V1.1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(737, 409);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseUp);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::Black;
			this->trackBar1->Location = System::Drawing::Point(523, 94);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(209, 45);
			this->trackBar1->TabIndex = 35;
			this->trackBar1->TickFrequency = 10;
			// 
			// PolarityRecode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(735, 448);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton14);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->sensBox);
			this->Controls->Add(this->radioButton13);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton12);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton11);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PolarityRecode";
			this->Text = L"Plague Cheats";
			this->Load += gcnew System::EventHandler(this, &PolarityRecode::PolarityRecode_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PolarityRecode::PolarityRecode_MouseUp);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_Checked(System::Object^ sender, System::EventArgs^ e) {
		isAK = true;
		isLR300 = false;
		isMP5 = false;
		isSMG = false; 
		isTHOMPSON = false;
		isSemi = false;
		isM249 = false;
	}
private: System::Void radioButton2_Checked(System::Object^ sender, System::EventArgs^ e) {
	isAK = false;
	isLR300 = true;
	isMP5 = false;
	isSMG = false;
	isTHOMPSON = false;
	isSemi = false;
	isM249 = false;
}
private: System::Void radioButton3_Checked(System::Object^ sender, System::EventArgs^ e) {
	isAK = false;
	isLR300 = false;
	isMP5 = true;
	isSMG = false;
	isTHOMPSON = false;
	isSemi = false;
	isM249 = false;
}
private: System::Void radioButton4_Checked(System::Object^ sender, System::EventArgs^ e) {
	isAK = false;
	isLR300 = false;
	isMP5 = false;
	isSMG = true;
	isTHOMPSON = false;
	isSemi = false;
	isM249 = false;
}
private: System::Void radioButton5_Checked(System::Object^ sender, System::EventArgs^ e) {
	isAK = false;
	isLR300 = false;
	isMP5 = false;
	isSMG = false;
	isTHOMPSON = true;
	isSemi = false;
	isM249 = false;
}
private: System::Void radioButton6_Checked(System::Object^ sender, System::EventArgs^ e) {
	isAK = false;
	isLR300 = false;
	isMP5 = false;
	isSMG = false;
	isTHOMPSON = false;
	isSemi = true;
	isM249 = false;
}
private: System::Void radioButton7_Checked(System::Object^ sender, System::EventArgs^ e) {
	isAK = false;
	isLR300 = false;
	isMP5 = false;
	isSMG = false;
	isTHOMPSON = false;
	isSemi = false;
	isM249 = true;
}
private: System::Void radioButton8_Checked(System::Object^ sender, System::EventArgs^ e) {
	isAK = false;
	isLR300 = false;
	isMP5 = false;
	isSMG = false;
	isTHOMPSON = false;
	isSemi = false;
	isM249 = false;
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	isSimple = true;
	isHolo = false;
	is8x = false;
	isSuppressor = false;
	isMuzzleBoost = false;
}
private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	isSimple = false;
	isHolo = true;
	is8x = false;
	isSuppressor = false;
	isMuzzleBoost = false;
}
private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	isSimple = false;
	isHolo = false;
	is8x = true;
	isSuppressor = false;
	isMuzzleBoost = false;
}
private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	isSimple = false;
	isHolo = false;
	is8x = false;
	isSuppressor = true;
	isMuzzleBoost = false;
}
private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	isSimple = false;
	isHolo = false;
	is8x = false;
	isSuppressor = false;
	isMuzzleBoost = true;
}
private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	isSimple = false;
	isHolo = false;
	is8x = false;
	isSuppressor = false;
	isMuzzleBoost = false;
}
private: System::Void sensBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ Sens = sensBox->Text;
	ReplacementFor_UserSens = (float)(Convert::ToDouble(Sens));
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	userRandom = trackBar1->Value;
	label6->Text = "" + userRandom;
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void PolarityRecode_Load(System::Object^ sender, System::EventArgs^ e) {
	dragging = false;
}
	bool dragging;
	Point offset;
private: System::Void PolarityRecode_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
private: System::Void PolarityRecode_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging) {
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}
private: System::Void PolarityRecode_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
