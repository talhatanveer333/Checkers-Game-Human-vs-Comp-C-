#pragma once
#include<time.h>
#include<cstdlib>
#include<string>
void disable();

namespace Project1{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	bool player = true;
	//bool address = true;
	int add = 0;
	int move = 0;
	bool player_1 = false;
	int kill1 = 12, kill2 = 12;
	int *const kil1 = &kill1;
	int *const kil2 = &kill2;
	bool left = false;
	bool right = false;

	/// <summary>
	/// Summary for Bead12
	/// </summary>
	public ref class Bead12 : public System::Windows::Forms::Form
	{
	public:
		Bead12(void)
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
		~Bead12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn10;
	private: System::Windows::Forms::Button^  btn13;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  loading;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn11;
	private: System::Windows::Forms::Button^  btn12;
	private: System::Windows::Forms::Button^  btn24;
    private: System::Windows::Forms::Button^  btn23;
    private: System::Windows::Forms::Button^  btn22;
	private: System::Windows::Forms::Button^  btn21;
	private: System::Windows::Forms::Button^  btn27;
	private: System::Windows::Forms::Button^  btn28;
	private: System::Windows::Forms::Button^  btn26;
	private: System::Windows::Forms::Button^  btn25;
	private: System::Windows::Forms::Button^  btn32;
	private: System::Windows::Forms::Button^  btn31;
	private: System::Windows::Forms::Button^  btn30;
	private: System::Windows::Forms::Button^  btn29;
	private: System::Windows::Forms::Button^  btn15;
	private: System::Windows::Forms::Button^  btn16;
	private: System::Windows::Forms::Button^  btn20;
	private: System::Windows::Forms::Button^  btn18;
	private: System::Windows::Forms::Button^  btn17;
	private: System::Windows::Forms::Button^  btn14;
	private: System::Windows::Forms::Button^  btn19;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
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
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn10 = (gcnew System::Windows::Forms::Button());
			this->btn13 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->loading = (gcnew System::Windows::Forms::Label());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn11 = (gcnew System::Windows::Forms::Button());
			this->btn12 = (gcnew System::Windows::Forms::Button());
			this->btn24 = (gcnew System::Windows::Forms::Button());
			this->btn23 = (gcnew System::Windows::Forms::Button());
			this->btn22 = (gcnew System::Windows::Forms::Button());
			this->btn21 = (gcnew System::Windows::Forms::Button());
			this->btn27 = (gcnew System::Windows::Forms::Button());
			this->btn28 = (gcnew System::Windows::Forms::Button());
			this->btn26 = (gcnew System::Windows::Forms::Button());
			this->btn25 = (gcnew System::Windows::Forms::Button());
			this->btn32 = (gcnew System::Windows::Forms::Button());
			this->btn31 = (gcnew System::Windows::Forms::Button());
			this->btn30 = (gcnew System::Windows::Forms::Button());
			this->btn29 = (gcnew System::Windows::Forms::Button());
			this->btn15 = (gcnew System::Windows::Forms::Button());
			this->btn16 = (gcnew System::Windows::Forms::Button());
			this->btn20 = (gcnew System::Windows::Forms::Button());
			this->btn18 = (gcnew System::Windows::Forms::Button());
			this->btn17 = (gcnew System::Windows::Forms::Button());
			this->btn14 = (gcnew System::Windows::Forms::Button());
			this->btn19 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Lime;
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn1->Location = System::Drawing::Point(65, 70);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(45, 36);
			this->btn1->TabIndex = 1;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Bead12::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Lime;
			this->btn2->Location = System::Drawing::Point(167, 70);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(45, 36);
			this->btn2->TabIndex = 3;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Bead12::btn2_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Lime;
			this->btn5->Location = System::Drawing::Point(14, 112);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(45, 36);
			this->btn5->TabIndex = 5;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Bead12::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Lime;
			this->btn6->Location = System::Drawing::Point(116, 112);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(45, 36);
			this->btn6->TabIndex = 7;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Bead12::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Lime;
			this->btn7->Location = System::Drawing::Point(218, 111);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(45, 36);
			this->btn7->TabIndex = 9;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Bead12::btn7_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Lime;
			this->btn9->Location = System::Drawing::Point(65, 154);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(45, 36);
			this->btn9->TabIndex = 11;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Bead12::btn9_Click);
			// 
			// btn10
			// 
			this->btn10->BackColor = System::Drawing::Color::Lime;
			this->btn10->Location = System::Drawing::Point(167, 153);
			this->btn10->Name = L"btn10";
			this->btn10->Size = System::Drawing::Size(45, 36);
			this->btn10->TabIndex = 13;
			this->btn10->UseVisualStyleBackColor = false;
			this->btn10->Click += gcnew System::EventHandler(this, &Bead12::btn10_Click);
			// 
			// btn13
			// 
			this->btn13->BackColor = System::Drawing::Color::White;
			this->btn13->Location = System::Drawing::Point(14, 196);
			this->btn13->Name = L"btn13";
			this->btn13->Size = System::Drawing::Size(45, 36);
			this->btn13->TabIndex = 15;
			this->btn13->UseVisualStyleBackColor = false;
			this->btn13->Click += gcnew System::EventHandler(this, &Bead12::btn13_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Enabled = false;
			this->progressBar1->ForeColor = System::Drawing::Color::Lime;
			this->progressBar1->Location = System::Drawing::Point(320, 27);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(0, 0);
			this->progressBar1->TabIndex = 30;
			// 
			// loading
			// 
			this->loading->AutoSize = true;
			this->loading->BackColor = System::Drawing::Color::White;
			this->loading->Font = (gcnew System::Drawing::Font(L"Ravie", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loading->ForeColor = System::Drawing::Color::Black;
			this->loading->Location = System::Drawing::Point(164, 22);
			this->loading->Name = L"loading";
			this->loading->Size = System::Drawing::Size(0, 17);
			this->loading->TabIndex = 31;
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Lime;
			this->btn3->Location = System::Drawing::Point(269, 70);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(45, 36);
			this->btn3->TabIndex = 32;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Bead12::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Lime;
			this->btn4->Location = System::Drawing::Point(371, 70);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(45, 36);
			this->btn4->TabIndex = 34;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Bead12::btn4_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Lime;
			this->btn8->Location = System::Drawing::Point(320, 112);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(45, 36);
			this->btn8->TabIndex = 36;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Bead12::btn8_Click);
			// 
			// btn11
			// 
			this->btn11->BackColor = System::Drawing::Color::Lime;
			this->btn11->Location = System::Drawing::Point(269, 154);
			this->btn11->Name = L"btn11";
			this->btn11->Size = System::Drawing::Size(45, 36);
			this->btn11->TabIndex = 38;
			this->btn11->UseVisualStyleBackColor = false;
			this->btn11->Click += gcnew System::EventHandler(this, &Bead12::btn11_Click);
			// 
			// btn12
			// 
			this->btn12->BackColor = System::Drawing::Color::Lime;
			this->btn12->Location = System::Drawing::Point(371, 154);
			this->btn12->Name = L"btn12";
			this->btn12->Size = System::Drawing::Size(45, 36);
			this->btn12->TabIndex = 40;
			this->btn12->UseVisualStyleBackColor = false;
			this->btn12->Click += gcnew System::EventHandler(this, &Bead12::btn12_Click);
			// 
			// btn24
			// 
			this->btn24->BackColor = System::Drawing::Color::Red;
			this->btn24->Location = System::Drawing::Point(320, 280);
			this->btn24->Name = L"btn24";
			this->btn24->Size = System::Drawing::Size(45, 36);
			this->btn24->TabIndex = 53;
			this->btn24->UseVisualStyleBackColor = false;
			this->btn24->Click += gcnew System::EventHandler(this, &Bead12::btn24_Click);
			// 
			// btn23
			// 
			this->btn23->BackColor = System::Drawing::Color::Red;
			this->btn23->Location = System::Drawing::Point(218, 280);
			this->btn23->Name = L"btn23";
			this->btn23->Size = System::Drawing::Size(45, 36);
			this->btn23->TabIndex = 51;
			this->btn23->UseVisualStyleBackColor = false;
			this->btn23->Click += gcnew System::EventHandler(this, &Bead12::btn23_Click);
			// 
			// btn22
			// 
			this->btn22->BackColor = System::Drawing::Color::Red;
			this->btn22->Location = System::Drawing::Point(116, 280);
			this->btn22->Name = L"btn22";
			this->btn22->Size = System::Drawing::Size(45, 36);
			this->btn22->TabIndex = 49;
			this->btn22->UseVisualStyleBackColor = false;
			this->btn22->Click += gcnew System::EventHandler(this, &Bead12::btn22_Click);
			// 
			// btn21
			// 
			this->btn21->BackColor = System::Drawing::Color::Red;
			this->btn21->Location = System::Drawing::Point(14, 280);
			this->btn21->Name = L"btn21";
			this->btn21->Size = System::Drawing::Size(45, 36);
			this->btn21->TabIndex = 47;
			this->btn21->UseVisualStyleBackColor = false;
			this->btn21->Click += gcnew System::EventHandler(this, &Bead12::btn21_Click);
			// 
			// btn27
			// 
			this->btn27->BackColor = System::Drawing::Color::Red;
			this->btn27->Location = System::Drawing::Point(269, 322);
			this->btn27->Name = L"btn27";
			this->btn27->Size = System::Drawing::Size(45, 36);
			this->btn27->TabIndex = 62;
			this->btn27->UseVisualStyleBackColor = false;
			this->btn27->Click += gcnew System::EventHandler(this, &Bead12::btn27_Click);
			// 
			// btn28
			// 
			this->btn28->BackColor = System::Drawing::Color::Red;
			this->btn28->Location = System::Drawing::Point(371, 322);
			this->btn28->Name = L"btn28";
			this->btn28->Size = System::Drawing::Size(45, 36);
			this->btn28->TabIndex = 60;
			this->btn28->UseVisualStyleBackColor = false;
			this->btn28->Click += gcnew System::EventHandler(this, &Bead12::btn28_Click);
			// 
			// btn26
			// 
			this->btn26->BackColor = System::Drawing::Color::Red;
			this->btn26->Location = System::Drawing::Point(167, 322);
			this->btn26->Name = L"btn26";
			this->btn26->Size = System::Drawing::Size(45, 36);
			this->btn26->TabIndex = 58;
			this->btn26->UseVisualStyleBackColor = false;
			this->btn26->Click += gcnew System::EventHandler(this, &Bead12::btn26_Click);
			// 
			// btn25
			// 
			this->btn25->BackColor = System::Drawing::Color::Red;
			this->btn25->Location = System::Drawing::Point(65, 322);
			this->btn25->Name = L"btn25";
			this->btn25->Size = System::Drawing::Size(45, 36);
			this->btn25->TabIndex = 56;
			this->btn25->UseVisualStyleBackColor = false;
			this->btn25->Click += gcnew System::EventHandler(this, &Bead12::btn25_Click);
			// 
			// btn32
			// 
			this->btn32->BackColor = System::Drawing::Color::Red;
			this->btn32->Location = System::Drawing::Point(320, 364);
			this->btn32->Name = L"btn32";
			this->btn32->Size = System::Drawing::Size(45, 36);
			this->btn32->TabIndex = 69;
			this->btn32->UseVisualStyleBackColor = false;
			this->btn32->Click += gcnew System::EventHandler(this, &Bead12::btn32_Click);
			// 
			// btn31
			// 
			this->btn31->BackColor = System::Drawing::Color::Red;
			this->btn31->Location = System::Drawing::Point(218, 364);
			this->btn31->Name = L"btn31";
			this->btn31->Size = System::Drawing::Size(45, 36);
			this->btn31->TabIndex = 67;
			this->btn31->UseVisualStyleBackColor = false;
			this->btn31->Click += gcnew System::EventHandler(this, &Bead12::btn31_Click);
			// 
			// btn30
			// 
			this->btn30->BackColor = System::Drawing::Color::Red;
			this->btn30->Location = System::Drawing::Point(116, 364);
			this->btn30->Name = L"btn30";
			this->btn30->Size = System::Drawing::Size(45, 36);
			this->btn30->TabIndex = 65;
			this->btn30->UseVisualStyleBackColor = false;
			this->btn30->Click += gcnew System::EventHandler(this, &Bead12::btn30_Click);
			// 
			// btn29
			// 
			this->btn29->BackColor = System::Drawing::Color::Red;
			this->btn29->Location = System::Drawing::Point(14, 364);
			this->btn29->Name = L"btn29";
			this->btn29->Size = System::Drawing::Size(45, 36);
			this->btn29->TabIndex = 63;
			this->btn29->UseVisualStyleBackColor = false;
			this->btn29->Click += gcnew System::EventHandler(this, &Bead12::btn29_Click);
			// 
			// btn15
			// 
			this->btn15->BackColor = System::Drawing::Color::White;
			this->btn15->Location = System::Drawing::Point(218, 196);
			this->btn15->Name = L"btn15";
			this->btn15->Size = System::Drawing::Size(45, 36);
			this->btn15->TabIndex = 71;
			this->btn15->UseVisualStyleBackColor = false;
			this->btn15->Click += gcnew System::EventHandler(this, &Bead12::btn15_Click);
			// 
			// btn16
			// 
			this->btn16->BackColor = System::Drawing::Color::White;
			this->btn16->Location = System::Drawing::Point(320, 196);
			this->btn16->Name = L"btn16";
			this->btn16->Size = System::Drawing::Size(45, 36);
			this->btn16->TabIndex = 74;
			this->btn16->UseVisualStyleBackColor = false;
			this->btn16->Click += gcnew System::EventHandler(this, &Bead12::btn16_Click);
			// 
			// btn20
			// 
			this->btn20->BackColor = System::Drawing::Color::White;
			this->btn20->Location = System::Drawing::Point(371, 238);
			this->btn20->Name = L"btn20";
			this->btn20->Size = System::Drawing::Size(45, 36);
			this->btn20->TabIndex = 75;
			this->btn20->UseVisualStyleBackColor = false;
			this->btn20->Click += gcnew System::EventHandler(this, &Bead12::btn20_Click);
			// 
			// btn18
			// 
			this->btn18->BackColor = System::Drawing::Color::White;
			this->btn18->Location = System::Drawing::Point(167, 238);
			this->btn18->Name = L"btn18";
			this->btn18->Size = System::Drawing::Size(45, 36);
			this->btn18->TabIndex = 77;
			this->btn18->UseVisualStyleBackColor = false;
			this->btn18->Click += gcnew System::EventHandler(this, &Bead12::btn18_Click);
			// 
			// btn17
			// 
			this->btn17->BackColor = System::Drawing::Color::White;
			this->btn17->Location = System::Drawing::Point(65, 238);
			this->btn17->Name = L"btn17";
			this->btn17->Size = System::Drawing::Size(45, 36);
			this->btn17->TabIndex = 80;
			this->btn17->UseVisualStyleBackColor = false;
			this->btn17->Click += gcnew System::EventHandler(this, &Bead12::btn17_Click);
			// 
			// btn14
			// 
			this->btn14->BackColor = System::Drawing::Color::White;
			this->btn14->Location = System::Drawing::Point(116, 196);
			this->btn14->Name = L"btn14";
			this->btn14->Size = System::Drawing::Size(45, 36);
			this->btn14->TabIndex = 82;
			this->btn14->UseVisualStyleBackColor = false;
			this->btn14->Click += gcnew System::EventHandler(this, &Bead12::btn14_Click);
			// 
			// btn19
			// 
			this->btn19->BackColor = System::Drawing::Color::White;
			this->btn19->Location = System::Drawing::Point(269, 238);
			this->btn19->Name = L"btn19";
			this->btn19->Size = System::Drawing::Size(45, 36);
			this->btn19->TabIndex = 85;
			this->btn19->UseVisualStyleBackColor = false;
			this->btn19->Click += gcnew System::EventHandler(this, &Bead12::btn19_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SpringGreen;
			this->label1->Location = System::Drawing::Point(478, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 27);
			this->label1->TabIndex = 86;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(468, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 21);
			this->label2->TabIndex = 87;
			this->label2->Text = L"1st Player Turn";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mistral", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(0, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 16);
			this->label3->TabIndex = 88;
			this->label3->Text = L"Player 1 Color";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mistral", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(368, 410);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 19);
			this->label5->TabIndex = 90;
			this->label5->Text = L"AI Player";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->gameToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(743, 24);
			this->menuStrip1->TabIndex = 91;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->gameToolStripMenuItem->Text = L"Game";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Bead12::newGameToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Bead12::exitToolStripMenuItem_Click);
			// 
			// Bead12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(743, 436);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn19);
			this->Controls->Add(this->btn14);
			this->Controls->Add(this->btn17);
			this->Controls->Add(this->btn18);
			this->Controls->Add(this->btn20);
			this->Controls->Add(this->btn16);
			this->Controls->Add(this->btn15);
			this->Controls->Add(this->btn32);
			this->Controls->Add(this->btn31);
			this->Controls->Add(this->btn30);
			this->Controls->Add(this->btn29);
			this->Controls->Add(this->btn27);
			this->Controls->Add(this->btn28);
			this->Controls->Add(this->btn26);
			this->Controls->Add(this->btn25);
			this->Controls->Add(this->btn24);
			this->Controls->Add(this->btn23);
			this->Controls->Add(this->btn22);
			this->Controls->Add(this->btn21);
			this->Controls->Add(this->btn12);
			this->Controls->Add(this->btn11);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->loading);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->btn13);
			this->Controls->Add(this->btn10);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Bead12";
			this->Text = L"Checker\'s";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		void movement()
		{
			if (add == 1)//for 1 button
			{
				if (move == 5 && btn5->BackColor == Color::White)
				{
					btn1->BackColor = Color::White;
					btn5->BackColor = Color::Lime;
					player_1 = true;
				}
				else if (move == 6 && btn6->BackColor == Color::White)
				{
					btn1->BackColor = Color::White;
					btn6->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 10 && (btn6->BackColor == Color::Red || btn6->BackColor == Color::Blue))
				{
					btn1->BackColor = Color::White;
					btn10->BackColor = Color::Lime;
					btn6->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 2)//for 2 button
			{
				if (move == 6 && btn6->BackColor == Color::White)
				{
					btn2->BackColor = Color::White;
					btn6->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 7 && btn7->BackColor == Color::White)
				{
					btn2->BackColor = Color::White;
					btn7->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 9 && (btn6->BackColor == Color::Red || btn6->BackColor == Color::Blue))
				{
					btn2->BackColor = Color::White;
					btn9->BackColor = Color::Lime;
					btn6->BackColor = Color::White; player_1 = true;
					*kil1-=1;
				}
				else if (move == 11 && (btn7->BackColor == Color::Red || btn7->BackColor == Color::Blue))
				{
					btn2->BackColor = Color::White;
					btn11->BackColor = Color::Lime;
					btn7->BackColor = Color::White; player_1 = true;
					*kil1-=1;
				}
			}
			else if (add == 3)//for 3 button
			{
				if (move == 7 && btn7->BackColor == Color::White)
				{
					btn3->BackColor = Color::White;
					btn7->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 8 && btn8->BackColor == Color::White)
				{
					btn3->BackColor = Color::White;
					btn8->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 10 && (btn7->BackColor == Color::Red || btn7->BackColor == Color::Blue))
				{
					btn3->BackColor = Color::White;
					btn10->BackColor = Color::Lime; player_1 = true;
					btn7->BackColor = Color::White;
					*kil1-=1;
				}
				else if (move == 12 && (btn8->BackColor == Color::Red || btn8->BackColor == Color::Blue))
				{
					btn3->BackColor = Color::White;
					btn12->BackColor = Color::Lime;
					btn8->BackColor = Color::White; player_1 = true;
					*kil1-=1;
				}
			}

			
			else if (add == 4)//for 4 button
			{
				if (move == 8 && btn8->BackColor == Color::White)
				{
					btn4->BackColor = Color::White;
					btn8->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 11 && (btn8->BackColor == Color::Red || btn8->BackColor == Color::Blue))
				{
					btn4->BackColor = Color::White;
					btn11->BackColor = Color::Lime;
					btn8->BackColor = Color::White; player_1 = true;
					*kil1-=1;
				}
				/*else if (move == 11 && (btn7->BackColor == Color::Red || btn7->BackColor == Color::Blue))
				{
					btn2->BackColor = Color::White;
					btn11->BackColor = Color::Lime;
					btn7->BackColor = Color::White;
					*kil1-=1;player_1 = true;
				}*/
			}
			
			else if (add == 5)//for 5 button
			{
				if (move == 9 && btn9->BackColor == Color::White)
				{
					btn5->BackColor = Color::White;
					btn9->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 14 && (btn9->BackColor == Color::Red || btn9->BackColor == Color::Blue))
				{
					btn5->BackColor = Color::White;
					btn14->BackColor = Color::Lime;
					btn9->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			
			else if (add == 6)//for 6 button
			{
				if (move == 9 && btn9->BackColor == Color::White)
				{
					btn6->BackColor = Color::White;
					btn9->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 10 && btn10->BackColor == Color::White)
				{
					btn6->BackColor = Color::White;
					btn10->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 13 && (btn9->BackColor == Color::Red || btn9->BackColor == Color::Blue))
				{
					btn6->BackColor = Color::White;
					btn13->BackColor = Color::Lime;
					btn9->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 15 && (btn10->BackColor == Color::Red || btn10->BackColor == Color::Blue))
				{
					btn6->BackColor = Color::White;
					btn15->BackColor = Color::Lime;
					btn10->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			
			else if (add == 7)//for 7 button
			{
				if (move == 10 && btn10->BackColor == Color::White)
				{
					btn7->BackColor = Color::White;
					btn10->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 11 && btn11->BackColor == Color::White)
				{
					btn7->BackColor = Color::White;
					btn11->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 14 && (btn10->BackColor == Color::Red || btn10->BackColor == Color::Blue))
				{
					btn7->BackColor = Color::White;
					btn14->BackColor = Color::Lime;
					btn10->BackColor = Color::White; player_1 = true;
					*kil1-=1;
				}
				else if (move == 16 && (btn11->BackColor == Color::Red || btn11->BackColor == Color::Blue))
				{
					btn7->BackColor = Color::White;
					btn16->BackColor = Color::Lime;
					btn11->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			
			else if (add == 8)//for 8 button
			{
				if (move == 11 && btn11->BackColor == Color::White)
				{
					btn8->BackColor = Color::White;
					btn11->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 12 && btn12->BackColor == Color::White)
				{
					btn8->BackColor = Color::White;
					btn12->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 15 && (btn11->BackColor == Color::Red || btn11->BackColor == Color::Blue))
				{
					btn8->BackColor = Color::White;
					btn15->BackColor = Color::Lime;
					btn11->BackColor = Color::White; player_1 = true;
					*kil1-=1;
				}
			}

			else if (add == 9)//for 9 button
			{
				if (move == 14 && btn14->BackColor == Color::White)
				{
					btn9->BackColor = Color::White;
					btn14->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 13 && btn13->BackColor == Color::White)
				{
					btn9->BackColor = Color::White;
					btn13->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 18 && (btn14->BackColor == Color::Red || btn14->BackColor == Color::Blue))
				{
					btn9->BackColor = Color::White;
					btn18->BackColor = Color::Lime;
					btn14->BackColor = Color::White; player_1 = true;
					*kil1-=1;
				}
			}
			else if (add == 10)//for 10 button
			{
				if (move == 14 && btn14->BackColor == Color::White)
				{
					btn10->BackColor = Color::White;
					btn14->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 15 && btn15->BackColor == Color::White)
				{
					btn10->BackColor = Color::White;
					btn15->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 17 && (btn14->BackColor == Color::Red || btn14->BackColor == Color::Blue))
				{
					btn10->BackColor = Color::White;
					btn17->BackColor = Color::Lime;
					btn14->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 19 && (btn15->BackColor == Color::Red || btn15->BackColor == Color::Blue))
				{
					btn10->BackColor = Color::White;
					btn19->BackColor = Color::Lime;
					btn15->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 11)//for 11 button
			{
				if (move == 15 && btn15->BackColor == Color::White)
				{
					btn11->BackColor = Color::White;
					btn15->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 16 && btn16->BackColor == Color::White)
				{
					btn11->BackColor = Color::White;
					btn16->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 18 && (btn15->BackColor == Color::Red || btn15->BackColor == Color::Blue))
				{
					btn11->BackColor = Color::White;
					btn18->BackColor = Color::Lime;
					btn15->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 20 && (btn16->BackColor == Color::Red || btn16->BackColor == Color::Blue))
				{
					btn11->BackColor = Color::White;
					btn20->BackColor = Color::Lime;
					btn16->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 12)//for 12 button
			{
				if (move == 16 && btn16->BackColor == Color::White)
				{
					btn12->BackColor = Color::White;
					btn16->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 19 && (btn16->BackColor == Color::Red || btn16->BackColor == Color::Blue))
				{
					btn12->BackColor = Color::White;
					btn19->BackColor = Color::Lime;
					btn16->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 13)//for 13 button
			{
				if (move == 17 && btn17->BackColor == Color::White)
				{
					btn13->BackColor = Color::White;
					btn17->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 22 && (btn17->BackColor == Color::Red || btn17->BackColor == Color::Blue))
				{
					btn13->BackColor = Color::White;
					btn22->BackColor = Color::Lime;
					btn17->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 14)//for 14 button
			{
				if (move == 17 && btn17->BackColor == Color::White)
				{
					btn14->BackColor = Color::White;
					btn17->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 18 && btn18->BackColor == Color::White)
				{
					btn14->BackColor = Color::White;
					btn18->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 21 && (btn17->BackColor == Color::Red || btn17->BackColor == Color::Blue))
				{
					btn14->BackColor = Color::White;
					btn21->BackColor = Color::Lime;
					btn17->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 23 && (btn18->BackColor == Color::Red || btn18->BackColor == Color::Blue))
				{
					btn14->BackColor = Color::White;
					btn23->BackColor = Color::Lime;
					btn18->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 15)//for 15 button
			{
				if (move == 18 && btn18->BackColor == Color::White)
				{
					btn15->BackColor = Color::White;
					btn18->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 19 && btn19->BackColor == Color::White)
				{
					btn15->BackColor = Color::White;
					btn19->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 22 && (btn18->BackColor == Color::Red || btn18->BackColor == Color::Blue))
				{
					btn15->BackColor = Color::White;
					btn22->BackColor = Color::Lime;
					btn18->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 24 && (btn19->BackColor == Color::Red || btn19->BackColor == Color::Blue))
				{
					btn15->BackColor = Color::White;
					btn24->BackColor = Color::Lime;
					btn19->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 16)//for 16 button
			{
				if (move == 19 && btn19->BackColor == Color::White)
				{
					btn16->BackColor = Color::White;
					btn19->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 20 && btn20->BackColor == Color::White)
				{
					btn16->BackColor = Color::White;
					btn20->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 23 && (btn19->BackColor == Color::Red || btn19->BackColor == Color::Blue))
				{
					btn16->BackColor = Color::White;
					btn23->BackColor = Color::Lime;
					btn19->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				
			}
			else if (add == 17)//for 17 button
			{
				if (move == 21 && btn21->BackColor == Color::White)
				{
					btn17->BackColor = Color::White;
					btn21->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 22 && btn22->BackColor == Color::White)
				{
					btn17->BackColor = Color::White;
					btn22->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 26 && (btn22->BackColor == Color::Red || btn22->BackColor == Color::Blue))
				{
					btn17->BackColor = Color::White;
					btn26->BackColor = Color::Lime;
					btn22->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
		
			}
			else if (add == 18)//for 18 button
			{
				if (move == 22 && btn23->BackColor == Color::White)
				{
					btn18->BackColor = Color::White;
					btn22->BackColor = Color::Lime; player_1 = true;
				}
				else if (move ==23 && btn23->BackColor == Color::White)
				{
					btn18->BackColor = Color::White;
					btn23->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 25 && (btn22->BackColor == Color::Red || btn22->BackColor == Color::Blue))
				{
					btn18->BackColor = Color::White;
					btn25->BackColor = Color::Lime;
					btn22->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 27 && (btn23->BackColor == Color::Red || btn23->BackColor == Color::Blue))
				{
					btn18->BackColor = Color::White;
					btn27->BackColor = Color::Lime;
					btn23->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 19)//for 19 button
			{
				if (move == 23 && btn23->BackColor == Color::White)
				{
					btn19->BackColor = Color::White;
					btn23->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 24 && btn24->BackColor == Color::White)
				{
					btn19->BackColor = Color::White;
					btn24->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 26 && (btn23->BackColor == Color::Red || btn23->BackColor == Color::Blue))
				{
					btn19->BackColor = Color::White;
					btn26->BackColor = Color::Lime;
					btn23->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 28 && (btn24->BackColor == Color::Red || btn24->BackColor == Color::Blue))
				{
					btn19->BackColor = Color::White;
					btn28->BackColor = Color::Lime;
					btn24->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 20)//for 20 button
			{
				if (move == 24 && btn24->BackColor == Color::White)
				{
					btn20->BackColor = Color::White;
					btn24->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 27 && (btn24->BackColor == Color::Red || btn24->BackColor == Color::Blue))
				{
					btn20->BackColor = Color::White;
					btn27->BackColor = Color::Lime;
					btn24->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 21)//for 21 button
			{
				if (move == 25 && btn25->BackColor == Color::White)
				{
					btn21->BackColor = Color::White;
					btn25->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 30 && (btn25->BackColor == Color::Red || btn25->BackColor == Color::Blue))
				{
					btn21->BackColor = Color::White;
					btn30->BackColor = Color::Lime;
					btn25->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
		
			}
			else if (add == 22)//for 22 button
			{
				if (move == 25 && btn25->BackColor == Color::White)
				{
					btn22->BackColor = Color::White;
					btn25->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 26 && btn26->BackColor == Color::White)
				{
					btn22->BackColor = Color::White;
					btn26->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 29 && (btn25->BackColor == Color::Red || btn25->BackColor == Color::Blue))
				{
					btn22->BackColor = Color::White;
					btn29->BackColor = Color::Lime;
					btn25->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 31 && (btn26->BackColor == Color::Red || btn26->BackColor == Color::Blue))
				{
					btn22->BackColor = Color::White;
					btn31->BackColor = Color::Lime;
					btn26->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 23)//for 23 button
			{
				if (move == 26 && btn26->BackColor == Color::White)
				{
					btn23->BackColor = Color::White;
					btn26->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 27 && btn27->BackColor == Color::White)
				{
					btn23->BackColor = Color::White;
					btn27->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 30 && (btn26->BackColor == Color::Red || btn26->BackColor == Color::Blue))
				{
					btn23->BackColor = Color::White;
					btn30->BackColor = Color::Lime;
					btn26->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
				else if (move == 32 && (btn27->BackColor == Color::Red || btn27->BackColor == Color::Blue))
				{
					btn23->BackColor = Color::White;
					btn32->BackColor = Color::Lime;
					btn27->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			}
			else if (add == 24)//for 24 button
			{
				if (move == 27 && btn27->BackColor == Color::White)
				{
					btn24->BackColor = Color::White;
					btn27->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 28 && btn28->BackColor == Color::White)
				{
					btn24->BackColor = Color::White;
					btn28->BackColor = Color::Lime; player_1 = true;
				}
				// killings
				else if (move == 31 && (btn27->BackColor == Color::Red || btn27->BackColor == Color::Blue))
				{
					btn24->BackColor = Color::White;
					btn31->BackColor = Color::Lime;
					btn27->BackColor = Color::White;
					*kil1 -= 1; player_1 = true;
				}
			
			}
			else if (add == 25)//for 25 button
			{
				if (move == 29 && btn29->BackColor == Color::White)
				{
					btn25->BackColor = Color::White;
					btn29->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 30 && btn30->BackColor == Color::White)
				{
					btn25->BackColor = Color::White;
					btn30->BackColor = Color::Lime; player_1 = true;
				}
				////////// downside killings are valid till 24button
			}
			else if (add == 26)//for 26 button
			{
				if (move == 30 && btn30->BackColor == Color::White)
				{
					btn26->BackColor = Color::White;
					btn30->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 31 && btn31->BackColor == Color::White)
				{
					btn26->BackColor = Color::White;
					btn31->BackColor = Color::Lime; player_1 = true;
				}
			}
			else if (add == 27)//for 27 button
			{
				if (move == 31 && btn31->BackColor == Color::White)
				{
					btn27->BackColor = Color::White;
					btn31->BackColor = Color::Lime; player_1 = true;
				}
				else if (move == 32 && btn32->BackColor == Color::White)
				{
					btn27->BackColor = Color::White;
					btn32->BackColor = Color::Lime; player_1 = true;
				}
			}
			else if (add == 28)//for 28 button
			{
				if (move == 32 && btn32->BackColor == Color::White)
				{
					btn28->BackColor = Color::White;
					btn32->BackColor = Color::Lime; player_1 = true;
				}
			}
			///last row cannot move to downside
			if (player_1 == false)
			{
				enable_white();
				disable_lime();
			}
}
void label()
{
	if (player == true)
	{
		label2->Text = "1st Player Turn";
		disable_white();
		disable_red();
		enable_lime();
	}
	else if (player == false)
	{
		label2->Text = "Choose Destination";
		disable_lime();
		disable_red();
		enable_white();
	}
}
void win()
{
	if (*kil1== 0)
	{
		label1->Text = "1st Player is Winner!";
		
	}
	else if (*kil2 == 0)
	{
		label1->Text = "You Loose!";
	}
}
		void kingcreator()
		{
			label();
			win();
			if (btn29->BackColor == Color::Lime)
				btn29->BackColor = Color::Yellow;
			if (btn30->BackColor == Color::Lime)
				btn30->BackColor = Color::Yellow;
			if (btn31->BackColor == Color::Lime)
				btn31->BackColor = Color::Yellow;
			if (btn32->BackColor == Color::Lime)
				btn32->BackColor = Color::Yellow;
			if (btn1->BackColor == Color::Red)
				btn1->BackColor = Color::Blue;
			if (btn2->BackColor == Color::Red)
				btn2->BackColor = Color::Blue;
			if (btn3->BackColor == Color::Red)
				btn3->BackColor = Color::Blue;
			if (btn4->BackColor == Color::Red)
				btn4->BackColor = Color::Blue;

		}
		void killing_and_movement(int &AI_position)
		{
			
		}
		void AI()
		{
			bool moved;
			int AI_position;
			//////////////////////////
			//////Following code choose appropriate position for AI////////

			if (btn6->BackColor == Color::Lime && btn10->BackColor == Color::Red &&btn1->BackColor == Color::White)
			{
				AI_position = 1;
			}//write left and right
			else if (btn7->BackColor == Color::Lime && btn11->BackColor == Color::Red &&btn2->BackColor == Color::White)
			{
				right = true;
				AI_position = 2;
			}////2nd
			else if (btn6->BackColor == Color::Lime && btn9->BackColor == Color::Red &&btn5->BackColor == Color::White)
			{
				left = true;
				AI_position = 2;
			}
			else if (btn8->BackColor == Color::Lime && btn12->BackColor == Color::Red &&btn3->BackColor == Color::White)
			{
				right = true;
				AI_position = 3;
			}//2
			else if (btn7->BackColor == Color::Lime && btn10->BackColor == Color::Red &&btn3->BackColor == Color::White)
			{
				left = true;
				AI_position = 3;
			}
			else if (btn8->BackColor == Color::Lime && btn11->BackColor == Color::Red &&btn4->BackColor == Color::White)
				AI_position = 4;//2nd
			else if (btn9->BackColor == Color::Lime && btn14->BackColor == Color::Red &&btn5->BackColor == Color::White)
				AI_position = 5;
			else if (btn10->BackColor == Color::Lime && btn15->BackColor == Color::Red &&btn6->BackColor == Color::White)
			{
				right = true;
				AI_position = 6;
			}//2
			else if (btn9->BackColor == Color::Lime && btn13->BackColor == Color::Red &&btn6->BackColor == Color::White)
			{
				left = true;
				AI_position = 6;
			}
			else if (btn11->BackColor == Color::Lime && btn16->BackColor == Color::Red &&btn7->BackColor == Color::White)
			{
				right = true;
				AI_position = 7;
			}//2
			else if (btn10->BackColor == Color::Lime && btn14->BackColor == Color::Red &&btn7->BackColor == Color::White)
			{
				left = true;
				AI_position = 7;
			}
			else if (btn11->BackColor == Color::Lime && btn15->BackColor == Color::Red &&btn8->BackColor == Color::White)
				AI_position = 8;
			else if (btn14->BackColor == Color::Lime && btn18->BackColor == Color::Red &&btn9->BackColor == Color::White)
				AI_position = 9;
			else if (btn14->BackColor == Color::Lime && btn17->BackColor == Color::Red &&btn10->BackColor == Color::White)
			{
				left = true;
				AI_position = 10;
			}//2
			else if (btn15->BackColor == Color::Lime && btn19->BackColor == Color::Red &&btn10->BackColor == Color::White)
			{
				right = true;
				AI_position = 10;
			}
			else if (btn15->BackColor == Color::Lime && btn18->BackColor == Color::Red &&btn11->BackColor == Color::White)
			{
				left = true;
				AI_position = 11;
			}//2
			else if (btn16->BackColor == Color::Lime && btn20->BackColor == Color::Red &&btn11->BackColor == Color::White)
			{
				right = true;
				AI_position = 11;
			}
			else if (btn16->BackColor == Color::Lime && btn19->BackColor == Color::Red &&btn12->BackColor == Color::White)
				AI_position = 12;
			else if (btn17->BackColor == Color::Lime && btn22->BackColor == Color::Red &&btn13->BackColor == Color::White)
				AI_position = 13;
			else if (btn17->BackColor == Color::Lime && btn21->BackColor == Color::Red &&btn14->BackColor == Color::White)
			{
				left = true;
				AI_position = 14;
			}//2
			else if (btn18->BackColor == Color::Lime && btn23->BackColor == Color::Red &&btn14->BackColor == Color::White)
			{
				right = true;
				AI_position = 14;
			}
			else if (btn18->BackColor == Color::Lime && btn22->BackColor == Color::Red &&btn15->BackColor == Color::White)
			{
				left = true;
				AI_position = 15;
			}//2
			else if (btn19->BackColor == Color::Lime && btn24->BackColor == Color::Red &&btn15->BackColor == Color::White)
			{
				right = true;
				AI_position = 15;
			}
			else if (btn19->BackColor == Color::Lime && btn23->BackColor == Color::Red &&btn16->BackColor == Color::White)
				AI_position = 16;
			else if (btn22->BackColor == Color::Lime && btn26->BackColor == Color::Red &&btn17->BackColor == Color::White)
				AI_position = 17;
			else if (btn22->BackColor == Color::Lime && btn25->BackColor == Color::Red &&btn18->BackColor == Color::White)
			{
				left = true;
				AI_position = 18;
			}//2
			else if (btn23->BackColor == Color::Lime && btn27->BackColor == Color::Red &&btn18->BackColor == Color::White)
			{
				right = true;
				AI_position = 18;
			}
			else if (btn23->BackColor == Color::Lime && btn26->BackColor == Color::Red &&btn19->BackColor == Color::White)
			{
				left = true;
				AI_position = 19;
			}//2
			else if (btn24->BackColor == Color::Lime && btn28->BackColor == Color::Red &&btn19->BackColor == Color::White)
			{
				right = true;
				AI_position = 19;
			}
			else if (btn24->BackColor == Color::Lime && btn27->BackColor == Color::Red &&btn20->BackColor == Color::White)
				AI_position = 20;
			else if (btn25->BackColor == Color::Lime && btn30->BackColor == Color::Red &&btn21->BackColor == Color::White)
				AI_position = 21;
			else if (btn25->BackColor == Color::Lime && btn29->BackColor == Color::Red &&btn22->BackColor == Color::White)
			{
				left = true;
				AI_position = 22;
			}//2
			else if (btn26->BackColor == Color::Lime && btn31->BackColor == Color::Red &&btn22->BackColor == Color::White)
			{
				right = true;
				AI_position = 22;
			}
			else if (btn26->BackColor == Color::Lime && btn30->BackColor == Color::Red &&btn23->BackColor == Color::White)
			{
				left = true;
				AI_position = 23;
			}//2
			else if (btn27->BackColor == Color::Lime && btn32->BackColor == Color::Red &&btn23->BackColor == Color::White)
			{
				right = true;
				AI_position = 23;
			}
			else if (btn27->BackColor == Color::Lime && btn31->BackColor == Color::Red &&btn24->BackColor == Color::White)
				AI_position = 24;
			else
			{
				if (btn21->BackColor == Color::Red && btn17->BackColor == Color::White)
					AI_position = 17;
				else if (btn22->BackColor == Color::Red && btn18->BackColor == Color::White)
					AI_position = 18;
				else if (btn23->BackColor == Color::Red && btn19->BackColor == Color::White)
					AI_position = 19;
				else if (btn24->BackColor == Color::Red && btn20->BackColor == Color::White)
					AI_position = 20;
				else if (btn17->BackColor == Color::Red && btn13->BackColor == Color::White)
					AI_position = 13;
				else if (btn18->BackColor == Color::Red && btn14->BackColor == Color::White)
					AI_position = 14;
				else if (btn19->BackColor == Color::Red && btn15->BackColor == Color::White)
					AI_position = 15;
				else if (btn20->BackColor == Color::Red && btn16->BackColor == Color::White)
					AI_position = 16;
				else if (btn13->BackColor == Color::Red && btn9->BackColor == Color::White)
					AI_position = 9;
				else if (btn14->BackColor == Color::Red && btn10->BackColor == Color::White)
					AI_position = 10;
				else if (btn15->BackColor == Color::Red && btn11->BackColor == Color::White)
					AI_position = 11;
				else if (btn16->BackColor == Color::Red && btn12->BackColor == Color::White)
					AI_position = 12;
				else if (btn9->BackColor == Color::Red && btn5->BackColor == Color::White)
					AI_position = 5;
				else if (btn10->BackColor == Color::Red && btn6->BackColor == Color::White)
					AI_position = 6;
				else if (btn11->BackColor == Color::Red && btn7->BackColor == Color::White)
					AI_position = 7;
				else if (btn22->BackColor == Color::Red && btn8->BackColor == Color::White)
					AI_position = 8;
				else if (btn5->BackColor == Color::Red && btn1->BackColor == Color::White)
					AI_position = 1;
				else if (btn6->BackColor == Color::Red && btn2->BackColor == Color::White)
					AI_position = 2;
				else if (btn7->BackColor == Color::Red && btn3->BackColor == Color::White)
					AI_position = 3;
				else if (btn8->BackColor == Color::Red && btn4->BackColor == Color::White)
					AI_position = 4;
				else if (btn25->BackColor == Color::Red && btn21->BackColor == Color::White)
					AI_position = 21;
				else if (btn26->BackColor == Color::Red && btn22->BackColor == Color::White)
					AI_position = 22;
				else if (btn27->BackColor == Color::Red && btn23->BackColor == Color::White)
					AI_position = 23;
				else if (btn28->BackColor == Color::Red && btn24->BackColor == Color::White)
					AI_position = 24;
				else if (btn29->BackColor == Color::Red && btn25->BackColor == Color::White)
					AI_position = 25;
				else if (btn30->BackColor == Color::Red && btn26->BackColor == Color::White)
					AI_position = 26;
				else if (btn31->BackColor == Color::Red && btn27->BackColor == Color::White)
					AI_position = 27;
				else if (btn32->BackColor == Color::Red && btn28->BackColor == Color::White)
					AI_position = 28;
				/*else if (btn17->BackColor == Color::Red)
				AI_position = 13;
				else if (btn18->BackColor == Color::Red)
				AI_position = 14;
				else if (btn19->BackColor == Color::Red)
				AI_position = 15;
				else if (btn20->BackColor == Color::Red)
				AI_position = 16;*/

				/*else
				while (!(AI_position >= 1 && AI_position <= 28))
				{
				srand(time(NULL));
				AI_position = rand() % 28;
				}*/
			}
			//////////////////////////
			//////End////////////////

				//////this code moves the AI buttons to chosen position////////
				if (AI_position == 1)
				{
					if (btn1->BackColor == Color::White && btn5->BackColor == Color::Red)
					{
						btn1->BackColor = Color::Red;
						btn5->BackColor = Color::White;
						moved = true;
					}
					else if (btn1->BackColor == Color::White && btn6->BackColor == Color::Red)
					{

						btn1->BackColor = Color::Red;
						btn6->BackColor = Color::White; moved = true;
					}
					else//killing
					{
						btn1->BackColor = Color::Red;
						btn6->BackColor = Color::White;
						btn10->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 2)
				{
					if (btn2->BackColor == Color::White && btn6->BackColor == Color::Red)
					{
						btn2->BackColor = Color::Red;
						btn6->BackColor = Color::White; moved = true;
					}
					else if (btn2->BackColor == Color::White && btn7->BackColor == Color::Red)
					{
						btn2->BackColor = Color::Red;
						btn7->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn2->BackColor = Color::Red;
						btn6->BackColor = Color::White;
						btn9->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn2->BackColor = Color::Red;
						btn7->BackColor = Color::White;
						btn11->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 3)
				{
					if (btn3->BackColor == Color::White && btn7->BackColor == Color::Red)
					{
						btn3->BackColor = Color::Red;
						btn7->BackColor = Color::White; moved = true;
					}
					else if (btn3->BackColor == Color::White && btn8->BackColor == Color::Red)
					{
						btn3->BackColor = Color::Red;
						btn8->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn3->BackColor = Color::Red;
						btn7->BackColor = Color::White;
						btn10->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn3->BackColor = Color::Red;
						btn8->BackColor = Color::White;
						btn12->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 4)
				{
					if (btn4->BackColor == Color::White && btn8->BackColor == Color::Red)
					{
						btn4->BackColor = Color::Red;
						btn8->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn4->BackColor = Color::Red;
						btn8->BackColor = Color::White;
						btn11->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 5)
				{
					if (btn5->BackColor == Color::White && btn9->BackColor == Color::Red)
					{
						btn5->BackColor = Color::Red;
						btn9->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn5->BackColor = Color::Red;
						btn9->BackColor = Color::White;
						btn14->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 6)
				{
					if (btn6->BackColor == Color::White && btn9->BackColor == Color::Red)
					{
						btn6->BackColor = Color::Red;
						btn9->BackColor = Color::White; moved = true;
					}
					else if (btn6->BackColor == Color::White && btn12->BackColor == Color::Red)
					{
						btn6->BackColor = Color::Red;
						btn12->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn6->BackColor = Color::Red;
						btn9->BackColor = Color::White;
						btn13->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn6->BackColor = Color::Red;
						btn10->BackColor = Color::White;
						btn15->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 7)
				{
					if (btn7->BackColor == Color::White && btn10->BackColor == Color::Red)
					{
						btn7->BackColor = Color::Red;
						btn10->BackColor = Color::White; moved = true;
					}
					else if (btn7->BackColor == Color::White && btn11->BackColor == Color::Red)
					{
						btn7->BackColor = Color::Red;
						btn11->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn7->BackColor = Color::Red;
						btn10->BackColor = Color::White;
						btn14->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn7->BackColor = Color::Red;
						btn11->BackColor = Color::White;
						btn16->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 8)
				{
					if (btn8->BackColor == Color::White && btn11->BackColor == Color::Red)
					{
						btn8->BackColor = Color::Red;
						btn11->BackColor = Color::White; moved = true;
					}
					else if (btn8->BackColor == Color::White && btn12->BackColor == Color::Red)
					{
						btn8->BackColor = Color::Red;
						btn12->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn8->BackColor = Color::Red;
						btn11->BackColor = Color::White;
						btn15->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 9)
				{
					if (btn9->BackColor == Color::White && btn13->BackColor == Color::Red)
					{
						btn9->BackColor = Color::Red;
						btn13->BackColor = Color::White; moved = true;
					}
					else if (btn9->BackColor == Color::White && btn14->BackColor == Color::Red)
					{
						btn9->BackColor = Color::Red;
						btn14->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn9->BackColor = Color::Red;
						btn14->BackColor = Color::White;
						btn18->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 10)
				{
					if (btn10->BackColor == Color::White && btn14->BackColor == Color::Red)
					{
						btn10->BackColor = Color::Red;
						btn14->BackColor = Color::White; moved = true;
					}
					else if (btn10->BackColor == Color::White && btn15->BackColor == Color::Red)
					{
						btn10->BackColor = Color::Red;
						btn15->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn10->BackColor = Color::Red;
						btn14->BackColor = Color::White;
						btn17->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn10->BackColor = Color::Red;
						btn15->BackColor = Color::White;
						btn19->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 11)
				{
					if (btn11->BackColor == Color::White && btn15->BackColor == Color::Red)
					{
						btn11->BackColor = Color::Red;
						btn15->BackColor = Color::White; moved = true;
					}
					else if (btn11->BackColor == Color::White && btn16->BackColor == Color::Red)
					{
						btn11->BackColor = Color::Red;
						btn16->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn11->BackColor = Color::Red;
						btn15->BackColor = Color::White;
						btn18->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn11->BackColor = Color::Red;
						btn16->BackColor = Color::White;
						btn20->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 12)
				{
					if (btn12->BackColor == Color::White && btn16->BackColor == Color::Red)
					{
						btn12->BackColor = Color::Red;
						btn16->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn12->BackColor = Color::Red;
						btn16->BackColor = Color::White;
						btn19->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 13)
				{
					if (btn13->BackColor == Color::White && btn17->BackColor == Color::Red)
					{
						btn13->BackColor = Color::Red;
						btn17->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn13->BackColor = Color::Red;
						btn17->BackColor = Color::White;
						btn22->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 14)
				{
					if (btn14->BackColor == Color::White && btn17->BackColor == Color::Red)
					{
						btn14->BackColor = Color::Red;
						btn17->BackColor = Color::White; moved = true;
					}
					else if (btn14->BackColor == Color::White && btn18->BackColor == Color::Red)
					{
						btn14->BackColor = Color::Red;
						btn18->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn14->BackColor = Color::Red;
						btn17->BackColor = Color::White;
						btn21->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn14->BackColor = Color::Red;
						btn18->BackColor = Color::White;
						btn23->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 15)
				{
					if (btn15->BackColor == Color::White && btn18->BackColor == Color::Red)
					{
						btn15->BackColor = Color::Red;
						btn18->BackColor = Color::White; moved = true;
					}
					else if (btn15->BackColor == Color::White && btn19->BackColor == Color::Red)
					{
						btn15->BackColor = Color::Red;
						btn19->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn15->BackColor = Color::Red;
						btn18->BackColor = Color::White;
						btn22->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn15->BackColor = Color::Red;
						btn19->BackColor = Color::White;
						btn24->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 16)
				{
					if (btn16->BackColor == Color::White && btn19->BackColor == Color::Red)
					{
						btn16->BackColor = Color::Red;
						btn19->BackColor = Color::White; moved = true;
					}
					else if (btn16->BackColor == Color::White && btn20->BackColor == Color::Red)
					{
						btn16->BackColor = Color::Red;
						btn20->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn16->BackColor = Color::Red;
						btn19->BackColor = Color::White;
						btn23->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 17)
				{
					if (btn17->BackColor == Color::White && btn21->BackColor == Color::Red)
					{
						btn17->BackColor = Color::Red;
						btn21->BackColor = Color::White; moved = true;
					}
					else if (btn17->BackColor == Color::White && btn22->BackColor == Color::Red)
					{
						btn17->BackColor = Color::Red;
						btn22->BackColor = Color::White; moved = true;
					}
					else//killing
					{
						btn17->BackColor = Color::Red;
						btn22->BackColor = Color::White;
						btn26->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 18)
				{
					if (btn18->BackColor == Color::White && btn22->BackColor == Color::Red)
					{
						btn18->BackColor = Color::Red;
						btn22->BackColor = Color::White; moved = true;
					}
					else if (btn18->BackColor == Color::White && btn23->BackColor == Color::Red)
					{
						btn18->BackColor = Color::Red;
						btn23->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn18->BackColor = Color::Red;
						btn22->BackColor = Color::White;
						btn25->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn18->BackColor = Color::Red;
						btn23->BackColor = Color::White;
						btn27->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 19)
				{
					if (btn19->BackColor == Color::White && btn23->BackColor == Color::Red)
					{
						btn19->BackColor = Color::Red;
						btn23->BackColor = Color::White; moved = true;
					}
					else if (btn19->BackColor == Color::White && btn24->BackColor == Color::Red)
					{
						btn19->BackColor = Color::Red;
						btn24->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn19->BackColor = Color::Red;
						btn23->BackColor = Color::White;
						btn26->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn19->BackColor = Color::Red;
						btn24->BackColor = Color::White;
						btn28->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 20)
				{
					if (btn20->BackColor == Color::White && btn24->BackColor == Color::Red)
					{
						btn20->BackColor = Color::Red;
						btn24->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn20->BackColor = Color::Red;
						btn24->BackColor = Color::White;
						btn27->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 21)
				{
					if (btn21->BackColor == Color::White && btn25->BackColor == Color::Red)
					{
						btn21->BackColor = Color::Red;
						btn25->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn21->BackColor = Color::Red;
						btn25->BackColor = Color::White;
						btn30->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 22)
				{
					if (btn22->BackColor == Color::White && btn25->BackColor == Color::Red)
					{
						btn22->BackColor = Color::Red;
						btn25->BackColor = Color::White; moved = true;
					}
					else if (btn22->BackColor == Color::White && btn26->BackColor == Color::Red)
					{
						btn22->BackColor = Color::Red;
						btn26->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn22->BackColor = Color::Red;
						btn25->BackColor = Color::White;
						btn29->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn22->BackColor = Color::Red;
						btn26->BackColor = Color::White;
						btn31->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 23)
				{
					if (btn23->BackColor == Color::White && btn26->BackColor == Color::Red)
					{
						btn23->BackColor = Color::Red;
						btn26->BackColor = Color::White; moved = true;
					}
					else if (btn23->BackColor == Color::White && btn27->BackColor == Color::Red)
					{
						btn23->BackColor = Color::Red;
						btn27->BackColor = Color::White; moved = true;
					}//killing
					else if (left == true && right == false)
					{
						btn23->BackColor = Color::Red;
						btn26->BackColor = Color::White;
						btn30->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
					else if (left == false && right == true)
					{
						btn23->BackColor = Color::Red;
						btn27->BackColor = Color::White;
						btn32->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 24)
				{
					if (btn24->BackColor == Color::White && btn27->BackColor == Color::Red)
					{
						btn24->BackColor = Color::Red;
						btn27->BackColor = Color::White; moved = true;
					}
					else if (btn24->BackColor == Color::White && btn28->BackColor == Color::Red)
					{
						btn24->BackColor = Color::Red;
						btn28->BackColor = Color::White; moved = true;
					}
					else //killing
					{
						btn24->BackColor = Color::Red;
						btn27->BackColor = Color::White;
						btn31->BackColor = Color::White;
						*kil2 -= 1; moved = true;
					}
				}
				else if (AI_position == 25)
				{
					if (btn25->BackColor == Color::White && btn29->BackColor == Color::Red)
					{
						btn25->BackColor = Color::Red;
						btn29->BackColor = Color::White; moved = true;
					}
					else if (btn25->BackColor == Color::White && btn30->BackColor == Color::Red)
					{
						btn25->BackColor = Color::Red;
						btn30->BackColor = Color::White; moved = true;
					}
				}
				else if (AI_position == 26)
				{
					if (btn26->BackColor == Color::White && btn30->BackColor == Color::Red)
					{
						btn26->BackColor = Color::Red;
						btn30->BackColor = Color::White; moved = true;
					}
					else if (btn26->BackColor == Color::White && btn31->BackColor == Color::Red)
					{
						btn26->BackColor = Color::Red;
						btn31->BackColor = Color::White; moved = true;
					}
				}
				else if (AI_position == 27)
				{
					if (btn27->BackColor == Color::White && btn31->BackColor == Color::Red)
					{
						btn27->BackColor = Color::Red;
						btn31->BackColor = Color::White; moved = true;
					}
					else if (btn27->BackColor == Color::White && btn32->BackColor == Color::Red)
					{
						btn27->BackColor = Color::Red;
						btn32->BackColor = Color::White; moved = true;
					}
				}
				else if (AI_position == 28)
				{
					if (btn28->BackColor == Color::White && btn32->BackColor == Color::Red)
					{
						btn28->BackColor = Color::Red;
						btn32->BackColor = Color::White; moved = true;
					}
				}
				////////////////
				right = false;
				left = false;
				move = false;
				//////reset done!//////
}
void disable_red()
{

	if (btn1->BackColor == Color::Red)
		this->btn1->Enabled = false;
	if (btn2->BackColor == Color::Red)
		this->btn2->Enabled = false;
	if (btn3->BackColor == Color::Red)
		this->btn3->Enabled = false;
	if (btn4->BackColor == Color::Red)
		this->btn4->Enabled = false;
	if (btn5->BackColor == Color::Red)
		this->btn5->Enabled = false;
	if (btn6->BackColor == Color::Red)
		this->btn6->Enabled = false;
	if (btn7->BackColor == Color::Red)
		this->btn7->Enabled = false;
	if (btn8->BackColor == Color::Red)
		this->btn8->Enabled = false;
	if (btn9->BackColor == Color::Red)
		this->btn9->Enabled = false;
	if (btn10->BackColor == Color::Red)
		this->btn10->Enabled = false;
	if (btn11->BackColor == Color::Red)
		this->btn11->Enabled = false;
	if (btn12->BackColor == Color::Red)
		this->btn12->Enabled = false;
	if (btn13->BackColor == Color::Red)
		this->btn13->Enabled = false;
	if (btn14->BackColor == Color::Red)
		this->btn14->Enabled = false;
	if (btn15->BackColor == Color::Red)
		this->btn15->Enabled = false;
	if (btn16->BackColor == Color::Red)
		this->btn16->Enabled = false;
	if (btn17->BackColor == Color::Red)
		this->btn17->Enabled = false;
	if (btn18->BackColor == Color::Red)
		this->btn18->Enabled = false;
	if (btn19->BackColor == Color::Red)
		this->btn19->Enabled = false;
	if (btn20->BackColor == Color::Red)
		this->btn20->Enabled = false;
	if (btn21->BackColor == Color::Red)
		this->btn21->Enabled = false;
	if (btn22->BackColor == Color::Red)
		this->btn22->Enabled = false;
	if (btn23->BackColor == Color::Red)
		this->btn23->Enabled = false;
	if (btn24->BackColor == Color::Red)
		this->btn24->Enabled = false;
	if (btn25->BackColor == Color::Red)
		this->btn25->Enabled = false;
}
void enable_red()
{

	if (btn1->BackColor == Color::Red)
		this->btn1->Enabled = true;
	if (btn2->BackColor == Color::Red)
		this->btn2->Enabled = true;
	if (btn3->BackColor == Color::Red)
		this->btn3->Enabled = true;
	if (btn4->BackColor == Color::Red)
		this->btn4->Enabled = true;
	if (btn5->BackColor == Color::Red)
		this->btn5->Enabled = true;
	if (btn6->BackColor == Color::Red)
		this->btn6->Enabled = true;
	if (btn7->BackColor == Color::Red)
		this->btn7->Enabled = true;
	if (btn8->BackColor == Color::Red)
		this->btn8->Enabled = true;
	if (btn9->BackColor == Color::Red)
		this->btn9->Enabled = true;
	if (btn10->BackColor == Color::Red)
		this->btn10->Enabled = true;
	if (btn11->BackColor == Color::Red)
		this->btn11->Enabled = true;
	if (btn12->BackColor == Color::Red)
		this->btn12->Enabled = true;
	if (btn13->BackColor == Color::Red)
		this->btn13->Enabled = true;
	if (btn14->BackColor == Color::Red)
		this->btn14->Enabled = true;
	if (btn15->BackColor == Color::Red)
		this->btn15->Enabled = true;
	if (btn16->BackColor == Color::Red)
		this->btn16->Enabled = true;
	if (btn17->BackColor == Color::Red)
		this->btn17->Enabled = true;
	if (btn18->BackColor == Color::Red)
		this->btn18->Enabled = true;
	if (btn19->BackColor == Color::Red)
		this->btn19->Enabled = true;
	if (btn20->BackColor == Color::Red)
		this->btn20->Enabled = true;
	if (btn21->BackColor == Color::Red)
		this->btn21->Enabled = true;
	if (btn22->BackColor == Color::Red)
		this->btn22->Enabled = true;
	if (btn23->BackColor == Color::Red)
		this->btn23->Enabled = true;
	if (btn24->BackColor == Color::Red)
		this->btn24->Enabled = true;
	if (btn25->BackColor == Color::Red)
		this->btn25->Enabled = true;
}
void disable_lime()
{
	if (btn1->BackColor == Color::Lime)
		this->btn1->Enabled = false;
	if (btn2->BackColor == Color::Lime)
		this->btn2->Enabled = false;
	if (btn3->BackColor == Color::Lime)
		this->btn3->Enabled = false;
	if (btn4->BackColor == Color::Lime)
		this->btn4->Enabled = false;
	if (btn5->BackColor == Color::Lime)
		this->btn5->Enabled = false;
	if (btn6->BackColor == Color::Lime)
		this->btn6->Enabled = false;
	if (btn7->BackColor == Color::Lime)
		this->btn7->Enabled = false;
	if (btn8->BackColor == Color::Lime)
		this->btn8->Enabled = false;
	if (btn9->BackColor == Color::Lime)
		this->btn9->Enabled = false;
	if (btn10->BackColor == Color::Lime)
		this->btn10->Enabled = false;
	if (btn11->BackColor == Color::Lime)
		this->btn11->Enabled = false;
	if (btn12->BackColor == Color::Lime)
		this->btn12->Enabled = false;
	if (btn13->BackColor == Color::Lime)
		this->btn13->Enabled = false;
	if (btn14->BackColor == Color::Lime)
		this->btn14->Enabled = false;
	if (btn15->BackColor == Color::Lime)
		this->btn15->Enabled = false;
	if (btn16->BackColor == Color::Lime)
		this->btn16->Enabled = false;
	if (btn17->BackColor == Color::Lime)
		this->btn17->Enabled = false;
	if (btn18->BackColor == Color::Lime)
		this->btn18->Enabled = false;
	if (btn19->BackColor == Color::Lime)
		this->btn19->Enabled = false;
	if (btn20->BackColor == Color::Lime)
		this->btn20->Enabled = false;
	if (btn21->BackColor == Color::Lime)
		this->btn21->Enabled = false;
	if (btn22->BackColor == Color::Lime)
		this->btn22->Enabled = false;
	if (btn23->BackColor == Color::Lime)
		this->btn23->Enabled = false;
	if (btn24->BackColor == Color::Lime)
		this->btn24->Enabled = false;
	if (btn25->BackColor == Color::Lime)
		this->btn25->Enabled = false;
}
void enable_lime()
{
	if (btn1->BackColor == Color::Lime)
		this->btn1->Enabled = true;
	if (btn2->BackColor == Color::Lime)
		this->btn2->Enabled = true;
	if (btn3->BackColor == Color::Lime)
		this->btn3->Enabled = true;
	if (btn4->BackColor == Color::Lime)
		this->btn4->Enabled = true;
	if (btn5->BackColor == Color::Lime)
		this->btn5->Enabled = true;
	if (btn6->BackColor == Color::Lime)
		this->btn6->Enabled = true;
	if (btn7->BackColor == Color::Lime)
		this->btn7->Enabled = true;
	if (btn8->BackColor == Color::Lime)
		this->btn8->Enabled = true;
	if (btn9->BackColor == Color::Lime)
		this->btn9->Enabled = true;
	if (btn10->BackColor == Color::Lime)
		this->btn10->Enabled = true;
	if (btn11->BackColor == Color::Lime)
		this->btn11->Enabled = true;
	if (btn12->BackColor == Color::Lime)
		this->btn12->Enabled = true;
	if (btn13->BackColor == Color::Lime)
		this->btn13->Enabled = true;
	if (btn14->BackColor == Color::Lime)
		this->btn14->Enabled = true;
	if (btn15->BackColor == Color::Lime)
		this->btn15->Enabled = true;
	if (btn16->BackColor == Color::Lime)
		this->btn16->Enabled = true;
	if (btn17->BackColor == Color::Lime)
		this->btn17->Enabled = true;
	if (btn18->BackColor == Color::Lime)
		this->btn18->Enabled = true;
	if (btn19->BackColor == Color::Lime)
		this->btn19->Enabled = true;
	if (btn20->BackColor == Color::Lime)
		this->btn20->Enabled = true;
	if (btn21->BackColor == Color::Lime)
		this->btn21->Enabled = true;
	if (btn22->BackColor == Color::Lime)
		this->btn22->Enabled = true;
	if (btn23->BackColor == Color::Lime)
		this->btn23->Enabled = true;
	if (btn24->BackColor == Color::Lime)
		this->btn24->Enabled = true;
	if (btn25->BackColor == Color::Lime)
		this->btn25->Enabled = true;
	if (btn26->BackColor == Color::Lime)
		this->btn26->Enabled = true;
	if (btn27->BackColor == Color::Lime)
		this->btn27->Enabled = true;
	if (btn28->BackColor == Color::Lime)
		this->btn28->Enabled = true;
	if (btn29->BackColor == Color::Lime)
		this->btn29->Enabled = true;
	if (btn30->BackColor == Color::Lime)
		this->btn30->Enabled = true;
	if (btn31->BackColor == Color::Lime)
		this->btn31->Enabled = true;
	if (btn32->BackColor == Color::Lime)
		this->btn32->Enabled = true;

}
void enable_white()
{

	if (btn1->BackColor == Color::White)
		this->btn1->Enabled = true;
	if (btn2->BackColor == Color::White)
		this->btn2->Enabled = true;
	if (btn3->BackColor == Color::White)
		this->btn3->Enabled = true;
	if (btn4->BackColor == Color::White)
		this->btn4->Enabled = true;
	if (btn5->BackColor == Color::White)
		this->btn5->Enabled = true;
	if (btn6->BackColor == Color::White)
		this->btn6->Enabled = true;
	if (btn7->BackColor == Color::White)
		this->btn7->Enabled = true;
	if (btn8->BackColor == Color::White)
		this->btn8->Enabled = true;
	if (btn9->BackColor == Color::White)
		this->btn9->Enabled = true;
	if (btn10->BackColor == Color::White)
		this->btn10->Enabled = true;
	if (btn11->BackColor == Color::White)
		this->btn11->Enabled = true;
	if (btn12->BackColor == Color::White)
		this->btn12->Enabled = true;
	if (btn13->BackColor == Color::White)
		this->btn13->Enabled = true;
	if (btn14->BackColor == Color::White)
		this->btn14->Enabled = true;
	if (btn15->BackColor == Color::White)
		this->btn15->Enabled = true;
	if (btn16->BackColor == Color::White)
		this->btn16->Enabled = true;
	if (btn17->BackColor == Color::White)
		this->btn17->Enabled = true;
	if (btn18->BackColor == Color::White)
		this->btn18->Enabled = true;
	if (btn19->BackColor == Color::White)
		this->btn19->Enabled = true;
	if (btn20->BackColor == Color::White)
		this->btn20->Enabled = true;
	if (btn21->BackColor == Color::White)
		this->btn21->Enabled = true;
	if (btn22->BackColor == Color::White)
		this->btn22->Enabled = true;
	if (btn23->BackColor == Color::White)
		this->btn23->Enabled = true;
	if (btn24->BackColor == Color::White)
		this->btn24->Enabled = true;
	if (btn25->BackColor == Color::White)
		this->btn25->Enabled = true;
}
void disable_white()
{

	if (btn1->BackColor == Color::White)
		this->btn1->Enabled = false;
	if (btn2->BackColor == Color::White)
		this->btn2->Enabled = false;
	if (btn3->BackColor == Color::White)
		this->btn3->Enabled = false;
	if (btn4->BackColor == Color::White)
		this->btn4->Enabled = false;
	if (btn5->BackColor == Color::White)
		this->btn5->Enabled = false;
	if (btn6->BackColor == Color::White)
		this->btn6->Enabled = false;
	if (btn7->BackColor == Color::White)
		this->btn7->Enabled = false;
	if (btn8->BackColor == Color::White)
		this->btn8->Enabled = false;
	if (btn9->BackColor == Color::White)
		this->btn9->Enabled = false;
	if (btn10->BackColor == Color::White)
		this->btn10->Enabled = false;
	if (btn11->BackColor == Color::White)
		this->btn11->Enabled = false;
	if (btn12->BackColor == Color::White)
		this->btn12->Enabled = false;
	if (btn13->BackColor == Color::White)
		this->btn13->Enabled = false;
	if (btn14->BackColor == Color::White)
		this->btn14->Enabled = false;
	if (btn15->BackColor == Color::White)
		this->btn15->Enabled = false;
	if (btn16->BackColor == Color::White)
		this->btn16->Enabled = false;
	if (btn17->BackColor == Color::White)
		this->btn17->Enabled = false;
	if (btn18->BackColor == Color::White)
		this->btn18->Enabled = false;
	if (btn19->BackColor == Color::White)
		this->btn19->Enabled = false;
	if (btn20->BackColor == Color::White)
		this->btn20->Enabled = false;
	if (btn21->BackColor == Color::White)
		this->btn21->Enabled = false;
	if (btn22->BackColor == Color::White)
		this->btn22->Enabled = false;
	if (btn23->BackColor == Color::White)
		this->btn23->Enabled = false;
	if (btn24->BackColor == Color::White)
		this->btn24->Enabled = false;
	if (btn25->BackColor == Color::White)
		this->btn25->Enabled = false;
}
void new_game()
{
	btn1->BackColor = Color::Lime;
	btn2->BackColor = Color::Lime;
	btn3->BackColor = Color::Lime;
	btn4->BackColor = Color::Lime;
	btn5->BackColor = Color::Lime;
	btn6->BackColor = Color::Lime;
	btn7->BackColor = Color::Lime;
	btn8->BackColor = Color::Lime;
	btn9->BackColor = Color::Lime;
	btn10->BackColor = Color::Lime;
	btn11->BackColor = Color::Lime;
	btn12->BackColor = Color::Lime;
	btn13->BackColor = Color::White;
	btn14->BackColor = Color::White;
	btn15->BackColor = Color::White;
	btn16->BackColor = Color::White;
	btn17->BackColor = Color::White;
	btn18->BackColor = Color::White;
	btn19->BackColor = Color::White;
	btn20->BackColor = Color::White;
	btn21->BackColor = Color::Red;
	btn22->BackColor = Color::Red;
	btn23->BackColor = Color::Red;
	btn24->BackColor = Color::Red;
	btn25->BackColor = Color::Red;
	btn26->BackColor = Color::Red;
	btn27->BackColor = Color::Red;
	btn28->BackColor = Color::Red;
	btn29->BackColor = Color::Red;
	btn30->BackColor = Color::Red;
	btn31->BackColor = Color::Red;
	btn32->BackColor = Color::Red;
	////////////
	player = true;
	player_1 = false;
	kill1 = 12, kill2 = 12;
	left = false;
    right = false;
	label2->Text = "1st Player Turn";
	label1->Text = " ";
	enable_lime();
}
int exit()
{
	disable_red();
	disable_white();
	disable_lime();
	MessageBox::Show ("Game Exit");
	return 0;
}
		
#pragma endregion

private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 9;
		player = false;
	}
	else if (player == false)
	{
		move = 9;
		movement();
		player = true;
		AI();
	}
	kingcreator();
	
}
private: System::Void btn14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 14;
		player = false;
	}
	else if (player == false)
	{
		move = 14;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 13;
		player = false;
	}
	else if (player == false)
	{
		move = 13;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 10;
		player = false;
	}
	else if (player == false)
	{
		move = 10;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 15;
		player = false;
	}
	else if (player == false)
	{
		move = 15;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 11;
		player = false;
	}
	else if (player == false)
	{
		move = 11;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 16;
		player = false;
	}
	else if (player == false)
	{
		move = 16;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 12;
		player = false;
	}
	else if (player == false)
	{
		move = 12;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 1;
		player = false;
	}
	else if (player == false)
	{
		move = 1;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 2;
		player = false;
	}
	else if (player == false)
	{
		move = 2;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 3;
		player = false;
	}
	else if (player == false)
	{
		move = 3		;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 4;
		player = false;
	}
	else if (player == false)
	{
		move = 4;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 5;
		player = false;
	}
	else  if (player == false)
	{
		move = 5;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 6;
		player = false;
	}
	else if (player == false)
	{
		move = 6;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 7;
		player = false;
	}
	else if (player == false)
	{
		move = 7;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 8;
		player = false;
	}
	else if (player == false)
	{
		move = 8;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 17;
		player = false;
	}
	else if (player == false)
	{
		move = 17;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 18;
		player = false;
		AI();
	}
	else if (player == false)
	{
		move = 18;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 19;
		player = false;
	}
	else if (player == false)
	{
		move = 19;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 20;
		player = false;
	}
	else if (player == false)
	{
		move = 20;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn21_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 21;
		player = false;
	}
	else if (player == false)
	{
		move = 21;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 22;
		player = false;
	}
	else if (player == false)
	{
		move = 22;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 23;
		player = false;
	}
	else if (player == false)
	{
		move = 23;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 24;
		player = false;
	}
	else if (player == false)
	{
		move = 24;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 25;
		player = false;
	}
	else if (player == false)
	{
		move = 25;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 26;
		player = false;
	}
	else if (player == false)
	{
		move = 26;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn27_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 27;
		player = false;
	}
	else if (player == false)
	{
		move = 27;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn28_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 28;
		player = false;
	}
	else if (player == false)
	{
		move = 28;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 29;
		player = false;
	}
	else if (player == false)
	{
		move = 29;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn30_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 30;
		player = false;
	}
	else if (player == false)
	{
		move = 30;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 31;
		player = false;
	}
	else if (player == false)
	{
		move = 31;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void btn32_Click(System::Object^  sender, System::EventArgs^  e) {
	if (player == true){
		add = 32;
		player = false;
	}
	else if (player == false)
	{
		move = 32;
		movement();
		player = true;
		AI();
	}
	kingcreator();
}
private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	new_game();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	exit();
}
};
}