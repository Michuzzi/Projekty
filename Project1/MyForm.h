#include "Game.h"
#include<fstream>
#include <msclr/marshal.h>
#pragma once

namespace Project1 {
	//ref class Poczatek;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->gra= new Game();
			//this->gra = new Game();
//			this->tablica = gcnew array<PictureBox ^>(10);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			 if ( gra )
			 {
				 delete gra ;
			 }
			 gra = nullptr ;
		}


		public: property String^ PassedValue
		{
			void set(String^ value)
			{
				label2->Text = value;
			}
			String^ get()
			{
				return label2->Text;
			}

		}
	protected: 


						 private: System::ComponentModel::IContainer^  components;

			 Game *gra;
			 //int gra.Karta1,gra.Karta2; int Click;
			 //int ID_TAB_0;
	private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	protected: 
		private: int seconds;
	private:
		/// <summary>
		/// Required designer Cases.
		/// </summary>
//		System::ComponentModel::IContainer ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label->Location = System::Drawing::Point(348, -3);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(0, 17);
			this->label->TabIndex = 16;
			// 
			// timer1
			// 
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1136, 17);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(328, 201);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(1136, 224);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(328, 201);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(760, 638);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(328, 201);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(1136, 638);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(328, 201);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(1136, 431);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(328, 201);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(760, 431);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(328, 201);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 11;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(380, 638);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(328, 201);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 13;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(380, 431);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(328, 201);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 10;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(14, 431);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(328, 201);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(14, 638);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(328, 201);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(760, 224);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(328, 201);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(14, 224);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(328, 201);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(380, 224);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(328, 201);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(380, 17);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(328, 201);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(328, 201);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(760, 17);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(328, 201);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(458, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(708, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 19;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(636, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"GRACZ:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(972, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(904, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 17);
			this->label5->TabIndex = 22;
			this->label5->Text = L"WYNIK:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(295, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 17);
			this->label6->TabIndex = 23;
			this->label6->Text = L"CZAS:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1491, 849);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			gra->Click = 1;
			seconds = 1;	
		 }
private : void Odblokuj()
		  {
			  	this->pictureBox1->Enabled = true;
				this->pictureBox2->Enabled = true;
				this->pictureBox3->Enabled = true;
				this->pictureBox4->Enabled = true;
				this->pictureBox5->Enabled = true;
				this->pictureBox6->Enabled = true;
				this->pictureBox7->Enabled = true;
				this->pictureBox8->Enabled = true;
				this->pictureBox9->Enabled = true;
				this->pictureBox10->Enabled =true;
				this->pictureBox11->Enabled =true;
				this->pictureBox12->Enabled =true;
				this->pictureBox13->Enabled =true;
				this->pictureBox14->Enabled =true;
				this->pictureBox15->Enabled =true;
				this->pictureBox16->Enabled =true;
		  }
		  private : void Zablokuj()
		  {
			  	this->pictureBox1->Enabled = false;
				this->pictureBox2->Enabled = false;
				this->pictureBox3->Enabled = false;
				this->pictureBox4->Enabled = false;
				this->pictureBox5->Enabled = false;
				this->pictureBox6->Enabled = false;
				this->pictureBox7->Enabled = false;
				this->pictureBox8->Enabled = false;
				this->pictureBox9->Enabled = false;
				this->pictureBox10->Enabled =false;
				this->pictureBox11->Enabled =false;
				this->pictureBox12->Enabled =false;
				this->pictureBox13->Enabled =false;
				this->pictureBox14->Enabled =false;
				this->pictureBox15->Enabled =false;
				this->pictureBox16->Enabled =false;
		  }
private : void Przypisz(int Cases, int ID)  
		  {
				this->timer2->Start();
		  array <String^>^ files = System::IO::Directory::GetFiles("ZDJDJ\\Karty");
		  switch(Cases)
				{ //for switch
				case 1:
					this->pictureBox1->Image = gcnew Drawing::Bitmap(files[ID]);				
					break;

				case 2:			
					
					this->pictureBox2->Image = gcnew Drawing::Bitmap(files[ID]);
					break;

				case 3:
					
					this->pictureBox3->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 4:
					
					this->pictureBox4->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 5:
					
					this->pictureBox5->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 6:
					
					this->pictureBox6->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 7:
					
					this->pictureBox7->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;


				case 8:
					
					this->pictureBox8->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;


				case 9:
					
					this->pictureBox9->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 10:
					
					this->pictureBox10->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 11:
					
					this->pictureBox11->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 12:
					
					this->pictureBox12->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;


				case 13:
					
					this->pictureBox13->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 14:
					
					this->pictureBox14->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 15:
					
					this->pictureBox15->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;

				case 16:
					
					this->pictureBox16->Image = gcnew Drawing::Bitmap(files[ID]);					
					break;
				}		  		  
		  }

 private:  void Karta(int PBox_ID,int P_X,int P_Y)
		  {
			   
		  array <String^>^ files = System::IO::Directory::GetFiles("ZDJDJ\\Karty");
		  
			 if (this->gra->Click == 1) 
			 {					
				 timer1->Stop();
				 this->gra->Karta1 = PBox_ID;
									  
				this->gra->SetChooseX(P_X,P_Y);
				
				 this->gra->GetChooseX();
				 
				 this->gra->ID_TAB_0 = this->gra->get0(P_X-1,P_Y-1);
			
				Przypisz(PBox_ID,this->gra->ID_TAB_0);
			 	
				this->gra->Click = 2;	 
			 }

			 else if (gra->Click == 2)
			 {
				this->gra->Karta2 = PBox_ID;
				if (this->gra->Karta1 == this->gra->Karta2)
				{ 
					this->gra->Back();	
				}
				this->gra->SetChooseY(P_X,P_Y);
				this->gra->GetChooseY();
				Zablokuj();									
				this->gra->ID_TAB_0 = this->gra->get0(P_X-1,P_Y-1);
				
			    Przypisz(PBox_ID,this->gra->ID_TAB_0);
				if(this->gra->Sprawdzaj()== false)
						{						
							this->gra->Back();					
							this->timer1->Start();							
						}
				else if(this->gra->Sprawdzaj()== true)
						{						
													
						Odblokuj();		
						if(this->gra->Wygrana()==false)
						{
							this->timer2->Stop();
							this->label->BackColor=SystemColors::HotTrack;
							System::Media::SoundPlayer ^simpleSound = gcnew
							System::Media::SoundPlayer("Sound\\BW.wav");
							simpleSound->Play();
							MessageBox::Show("Brawo, udalo Ci sie ukonczyc gre Memory!","Gratulacje!", MessageBoxButtons::OK,MessageBoxIcon::Hand);
							if (IDOK)
							{
								this->Close();
								
							}				
						}

						}							

				this->gra->Click = 1;
			 }			 
		  }

		  private : void Zamiana(int a, int b) 
		  {
			array <String^>^ files = System::IO::Directory::GetFiles("ZDJDJ\\Karty");

			Przypisz(this->gra->Karta1,0);
			Przypisz(this->gra->Karta2,0);
			Odblokuj();	

		  }
			



private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
				array <String^>^ files = System::IO::Directory::GetFiles("ZDJDJ\\Karty");
				Zamiana(this->gra->Karta1,this->gra->Karta2); 				
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {			 
			 Karta(1,1,1);
			 this->pictureBox1->Enabled = false;
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Karta(2,1,2);	
			this->pictureBox2->Enabled = false;
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(3,1,3);
			 this->pictureBox3->Enabled = false;
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(4,1,4);	
			 this->pictureBox4->Enabled = false;
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(5,2,1);
			 this->pictureBox5->Enabled = false;
		
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(6,2,2);
			 this->pictureBox6->Enabled = false;
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(7,2,3);
			 this->pictureBox7->Enabled = false;
		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(8,2,4);
			 this->pictureBox8->Enabled = false;
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(9,3,1);
			 this->pictureBox9->Enabled = false;
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(10,3,2);
			 this->pictureBox10->Enabled = false;
		 }
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(11,3,3);
			 this->pictureBox11->Enabled = false;
		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(12,3,4);
			 this->pictureBox12->Enabled = false;
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(13,4,1);
			 this->pictureBox13->Enabled = false;
		 }
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(14,4,2);
			 this->pictureBox14->Enabled = false;
		 }
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(15,4,3);
			 this->pictureBox15->Enabled = false;
		 }
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Karta(16,4,4);
			 this->pictureBox16->Enabled = false;
		 }

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			  seconds++;
			  int wynik=2000-(seconds*1.24);
				 seconds= seconds % 6000;
				 label4->Text = wynik.ToString();
				 label->Text = String::Format("{0}.{1}", (seconds/10).ToString(),(seconds%10).ToString());
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};

}

