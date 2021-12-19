#pragma once

#include <ctime>
#include <vector>
#include "table.h"

namespace elfernGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button68;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ status;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::Timer^ timer5;
	private: System::Windows::Forms::Timer^ timer6;

















































	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"7_of_clubs.png");
			this->imageList1->Images->SetKeyName(1, L"7_of_diamonds.png");
			this->imageList1->Images->SetKeyName(2, L"7_of_hearts.png");
			this->imageList1->Images->SetKeyName(3, L"7_of_spades.png");
			this->imageList1->Images->SetKeyName(4, L"8_of_clubs.png");
			this->imageList1->Images->SetKeyName(5, L"8_of_diamonds.png");
			this->imageList1->Images->SetKeyName(6, L"8_of_hearts.png");
			this->imageList1->Images->SetKeyName(7, L"8_of_spades.png");
			this->imageList1->Images->SetKeyName(8, L"9_of_clubs.png");
			this->imageList1->Images->SetKeyName(9, L"9_of_diamonds.png");
			this->imageList1->Images->SetKeyName(10, L"9_of_hearts.png");
			this->imageList1->Images->SetKeyName(11, L"9_of_spades.png");
			this->imageList1->Images->SetKeyName(12, L"10_of_clubs.png");
			this->imageList1->Images->SetKeyName(13, L"10_of_diamonds.png");
			this->imageList1->Images->SetKeyName(14, L"10_of_hearts.png");
			this->imageList1->Images->SetKeyName(15, L"10_of_spades.png");
			this->imageList1->Images->SetKeyName(16, L"jack_of_clubs2.png");
			this->imageList1->Images->SetKeyName(17, L"jack_of_diamonds2.png");
			this->imageList1->Images->SetKeyName(18, L"jack_of_hearts2.png");
			this->imageList1->Images->SetKeyName(19, L"jack_of_spades2.png");
			this->imageList1->Images->SetKeyName(20, L"queen_of_clubs2.png");
			this->imageList1->Images->SetKeyName(21, L"queen_of_diamonds2.png");
			this->imageList1->Images->SetKeyName(22, L"queen_of_hearts2.png");
			this->imageList1->Images->SetKeyName(23, L"queen_of_spades2.png");
			this->imageList1->Images->SetKeyName(24, L"king_of_clubs2.png");
			this->imageList1->Images->SetKeyName(25, L"king_of_diamonds2.png");
			this->imageList1->Images->SetKeyName(26, L"king_of_hearts2.png");
			this->imageList1->Images->SetKeyName(27, L"king_of_spades2.png");
			this->imageList1->Images->SetKeyName(28, L"ace_of_clubs.png");
			this->imageList1->Images->SetKeyName(29, L"ace_of_diamonds.png");
			this->imageList1->Images->SetKeyName(30, L"ace_of_hearts.png");
			this->imageList1->Images->SetKeyName(31, L"ace_of_spades2.png");
			this->imageList1->Images->SetKeyName(32, L"shirt.png");
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(19, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 180);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(48, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 180);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(77, 448);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 180);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(107, 448);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 180);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(136, 448);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 180);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(165, 448);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 180);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(194, 448);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(111, 180);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(224, 448);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 180);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(253, 448);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(111, 180);
			this->button9->TabIndex = 0;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(282, 448);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(111, 180);
			this->button10->TabIndex = 0;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Location = System::Drawing::Point(311, 448);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(111, 180);
			this->button11->TabIndex = 0;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Location = System::Drawing::Point(341, 448);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(111, 180);
			this->button12->TabIndex = 0;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Location = System::Drawing::Point(370, 448);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(111, 180);
			this->button13->TabIndex = 0;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Location = System::Drawing::Point(399, 448);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(111, 180);
			this->button14->TabIndex = 0;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Location = System::Drawing::Point(428, 448);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(111, 180);
			this->button15->TabIndex = 0;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Location = System::Drawing::Point(458, 448);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(111, 180);
			this->button16->TabIndex = 0;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Location = System::Drawing::Point(487, 448);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(111, 180);
			this->button17->TabIndex = 0;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Location = System::Drawing::Point(516, 448);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(111, 180);
			this->button18->TabIndex = 0;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Location = System::Drawing::Point(545, 448);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(111, 180);
			this->button19->TabIndex = 0;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->Location = System::Drawing::Point(575, 448);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(111, 180);
			this->button20->TabIndex = 0;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->Location = System::Drawing::Point(604, 448);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(111, 180);
			this->button21->TabIndex = 0;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Visible = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->Location = System::Drawing::Point(633, 448);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(111, 180);
			this->button22->TabIndex = 0;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Visible = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->Location = System::Drawing::Point(662, 448);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(111, 180);
			this->button23->TabIndex = 0;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Visible = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->Location = System::Drawing::Point(692, 448);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(111, 180);
			this->button24->TabIndex = 0;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Visible = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->Location = System::Drawing::Point(721, 448);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(111, 180);
			this->button25->TabIndex = 0;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Visible = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->Location = System::Drawing::Point(750, 448);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(111, 180);
			this->button26->TabIndex = 0;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Visible = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->Location = System::Drawing::Point(779, 448);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(111, 180);
			this->button27->TabIndex = 0;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Visible = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->Location = System::Drawing::Point(809, 448);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(111, 180);
			this->button28->TabIndex = 0;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Visible = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->Location = System::Drawing::Point(838, 448);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(111, 180);
			this->button29->TabIndex = 0;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Visible = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->Location = System::Drawing::Point(867, 448);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(111, 180);
			this->button30->TabIndex = 0;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Visible = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->Location = System::Drawing::Point(896, 448);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(111, 180);
			this->button31->TabIndex = 0;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Visible = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->Location = System::Drawing::Point(926, 448);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(111, 180);
			this->button32->TabIndex = 0;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Visible = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->Enabled = false;
			this->button33->Location = System::Drawing::Point(19, 22);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(111, 180);
			this->button33->TabIndex = 0;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Visible = false;
			// 
			// button34
			// 
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->Enabled = false;
			this->button34->Location = System::Drawing::Point(48, 22);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(111, 180);
			this->button34->TabIndex = 0;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Visible = false;
			// 
			// button35
			// 
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->Enabled = false;
			this->button35->Location = System::Drawing::Point(77, 22);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(111, 180);
			this->button35->TabIndex = 0;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Visible = false;
			// 
			// button36
			// 
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->Enabled = false;
			this->button36->Location = System::Drawing::Point(107, 22);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(111, 180);
			this->button36->TabIndex = 0;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Visible = false;
			// 
			// button37
			// 
			this->button37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button37->Enabled = false;
			this->button37->Location = System::Drawing::Point(136, 22);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(111, 180);
			this->button37->TabIndex = 0;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Visible = false;
			// 
			// button38
			// 
			this->button38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button38->Enabled = false;
			this->button38->Location = System::Drawing::Point(165, 22);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(111, 180);
			this->button38->TabIndex = 0;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Visible = false;
			// 
			// button39
			// 
			this->button39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button39->Enabled = false;
			this->button39->Location = System::Drawing::Point(194, 22);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(111, 180);
			this->button39->TabIndex = 0;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Visible = false;
			// 
			// button40
			// 
			this->button40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button40->Enabled = false;
			this->button40->Location = System::Drawing::Point(224, 22);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(111, 180);
			this->button40->TabIndex = 0;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Visible = false;
			// 
			// button41
			// 
			this->button41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button41->Enabled = false;
			this->button41->Location = System::Drawing::Point(253, 22);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(111, 180);
			this->button41->TabIndex = 0;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Visible = false;
			// 
			// button42
			// 
			this->button42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button42->Enabled = false;
			this->button42->Location = System::Drawing::Point(282, 22);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(111, 180);
			this->button42->TabIndex = 0;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Visible = false;
			// 
			// button43
			// 
			this->button43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button43->Enabled = false;
			this->button43->Location = System::Drawing::Point(311, 22);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(111, 180);
			this->button43->TabIndex = 0;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Visible = false;
			// 
			// button44
			// 
			this->button44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button44->Enabled = false;
			this->button44->Location = System::Drawing::Point(341, 22);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(111, 180);
			this->button44->TabIndex = 0;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Visible = false;
			// 
			// button45
			// 
			this->button45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button45->Enabled = false;
			this->button45->Location = System::Drawing::Point(370, 22);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(111, 180);
			this->button45->TabIndex = 0;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Visible = false;
			// 
			// button46
			// 
			this->button46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button46->Enabled = false;
			this->button46->Location = System::Drawing::Point(399, 22);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(111, 180);
			this->button46->TabIndex = 0;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Visible = false;
			// 
			// button47
			// 
			this->button47->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button47->Enabled = false;
			this->button47->Location = System::Drawing::Point(428, 22);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(111, 180);
			this->button47->TabIndex = 0;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Visible = false;
			// 
			// button48
			// 
			this->button48->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button48->Enabled = false;
			this->button48->Location = System::Drawing::Point(458, 22);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(111, 180);
			this->button48->TabIndex = 0;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Visible = false;
			// 
			// button49
			// 
			this->button49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button49->Enabled = false;
			this->button49->Location = System::Drawing::Point(487, 22);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(111, 180);
			this->button49->TabIndex = 0;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Visible = false;
			// 
			// button50
			// 
			this->button50->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button50->Enabled = false;
			this->button50->Location = System::Drawing::Point(516, 22);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(111, 180);
			this->button50->TabIndex = 0;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Visible = false;
			// 
			// button51
			// 
			this->button51->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button51->Enabled = false;
			this->button51->Location = System::Drawing::Point(545, 22);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(111, 180);
			this->button51->TabIndex = 0;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Visible = false;
			// 
			// button52
			// 
			this->button52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button52->Enabled = false;
			this->button52->Location = System::Drawing::Point(575, 22);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(111, 180);
			this->button52->TabIndex = 0;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Visible = false;
			// 
			// button53
			// 
			this->button53->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button53->Enabled = false;
			this->button53->Location = System::Drawing::Point(604, 22);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(111, 180);
			this->button53->TabIndex = 0;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Visible = false;
			// 
			// button54
			// 
			this->button54->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button54->Enabled = false;
			this->button54->Location = System::Drawing::Point(633, 22);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(111, 180);
			this->button54->TabIndex = 0;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Visible = false;
			// 
			// button55
			// 
			this->button55->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button55->Enabled = false;
			this->button55->Location = System::Drawing::Point(662, 22);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(111, 180);
			this->button55->TabIndex = 0;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Visible = false;
			// 
			// button56
			// 
			this->button56->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button56->Enabled = false;
			this->button56->Location = System::Drawing::Point(692, 22);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(111, 180);
			this->button56->TabIndex = 0;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Visible = false;
			// 
			// button57
			// 
			this->button57->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button57->Enabled = false;
			this->button57->Location = System::Drawing::Point(721, 22);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(111, 180);
			this->button57->TabIndex = 0;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Visible = false;
			// 
			// button58
			// 
			this->button58->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button58->Enabled = false;
			this->button58->Location = System::Drawing::Point(750, 22);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(111, 180);
			this->button58->TabIndex = 0;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Visible = false;
			// 
			// button59
			// 
			this->button59->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button59->Enabled = false;
			this->button59->Location = System::Drawing::Point(779, 22);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(111, 180);
			this->button59->TabIndex = 0;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Visible = false;
			// 
			// button60
			// 
			this->button60->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button60->Enabled = false;
			this->button60->Location = System::Drawing::Point(809, 22);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(111, 180);
			this->button60->TabIndex = 0;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Visible = false;
			// 
			// button61
			// 
			this->button61->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button61->Enabled = false;
			this->button61->Location = System::Drawing::Point(838, 22);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(111, 180);
			this->button61->TabIndex = 0;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Visible = false;
			// 
			// button62
			// 
			this->button62->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button62->Enabled = false;
			this->button62->Location = System::Drawing::Point(867, 22);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(111, 180);
			this->button62->TabIndex = 0;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Visible = false;
			// 
			// button63
			// 
			this->button63->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button63->Enabled = false;
			this->button63->Location = System::Drawing::Point(896, 22);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(111, 180);
			this->button63->TabIndex = 0;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Visible = false;
			// 
			// button64
			// 
			this->button64->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button64->Enabled = false;
			this->button64->Location = System::Drawing::Point(926, 22);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(111, 180);
			this->button64->TabIndex = 0;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Visible = false;
			// 
			// button65
			// 
			this->button65->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button65->Enabled = false;
			this->button65->Location = System::Drawing::Point(415, 244);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(111, 180);
			this->button65->TabIndex = 0;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Visible = false;
			// 
			// button66
			// 
			this->button66->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button66->Enabled = false;
			this->button66->Location = System::Drawing::Point(604, 244);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(111, 180);
			this->button66->TabIndex = 0;
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(434, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Your card";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(600, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Computer\'s card";
			this->label2->Visible = false;
			// 
			// button67
			// 
			this->button67->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button67->Enabled = false;
			this->button67->Location = System::Drawing::Point(19, 244);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(111, 180);
			this->button67->TabIndex = 0;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 23);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Deck";
			this->label3->Visible = false;
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::Color::White;
			this->button68->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button68->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button68->Location = System::Drawing::Point(926, 293);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(111, 41);
			this->button68->TabIndex = 2;
			this->button68->Text = L"Start";
			this->button68->UseVisualStyleBackColor = false;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::button68_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->status });
			this->statusStrip1->Location = System::Drawing::Point(0, 636);
			this->statusStrip1->MaximumSize = System::Drawing::Size(1099, 30);
			this->statusStrip1->MinimumSize = System::Drawing::Size(1099, 30);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1099, 30);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// status
			// 
			this->status->BackColor = System::Drawing::Color::White;
			this->status->Font = (gcnew System::Drawing::Font(L"Bebas Neue Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(91, 25);
			this->status->Text = L"Let\'s Start!";
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 2000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 2000;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 2000;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 2000;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm::timer6_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGreen;
			this->ClientSize = System::Drawing::Size(1099, 666);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button68);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1115, 705);
			this->Name = L"MyForm";
			this->Text = L"elfernGame";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	cli::array<Button^>^ buttonsPlayer = gcnew cli::array<Button^>(32);
	cli::array<Button^>^ buttonsComputer = gcnew cli::array<Button^>(32);
	private: void updateTable(table tb);
	private: void playerMove(int cardId);
	private: void playerAnswer(int cardId);
	private: table getTable();
	private: void resetNames(table tb);
	private: void disableButtons();
	private: void enableButtons();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(1);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(2);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(3);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(4);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(5);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(6);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(7);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(8);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(9);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(10);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(11);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(12);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(13);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(14);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(15);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(16);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(17);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(18);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(19);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(20);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(21);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(22);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(23);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(24);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(25);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(26);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(27);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(28);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(29);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(30);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	playerMove(31);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer5_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer6_Tick(System::Object^ sender, System::EventArgs^ e);
};
}
