#include "MyForm.h"
#include "About.h"
#pragma once


namespace Project1 {
	//ref class MyForm;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Poczatek
	/// </summary>
	public ref class Poczatek : public System::Windows::Forms::Form
	{
	public:
		Poczatek(void)
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
		~Poczatek()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  menuStripHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  menuStripAbout;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button_ok;
			 private: System::Windows::Forms::Label^  label;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Poczatek::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStripHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStripAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->menuStripHelp});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(795, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuStripHelp
			// 
			this->menuStripHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->menuStripAbout});
			this->menuStripHelp->Name = L"menuStripHelp";
			this->menuStripHelp->Size = System::Drawing::Size(53, 24);
			this->menuStripHelp->Text = L"Help";
			// 
			// menuStripAbout
			// 
			this->menuStripAbout->Name = L"menuStripAbout";
			this->menuStripAbout->Size = System::Drawing::Size(119, 24);
			this->menuStripAbout->Text = L"About";
			this->menuStripAbout->Click += gcnew System::EventHandler(this, &Poczatek::menuStripAbout_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(283, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(136, 42);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(46, 17);
			this->label->TabIndex = 16;
			this->label->Text = L"label1";
			// 
			// button_ok
			// 
			this->button_ok->BackColor = System::Drawing::Color::Tomato;
			this->button_ok->Location = System::Drawing::Point(42, 116);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(283, 33);
			this->button_ok->TabIndex = 2;
			this->button_ok->Text = L"NOWA GRA";
			this->button_ok->UseVisualStyleBackColor = false;
			this->button_ok->Click += gcnew System::EventHandler(this, &Poczatek::button_ok_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(39, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"WprowadŸ nazwê gracza";
			this->label1->Click += gcnew System::EventHandler(this, &Poczatek::label1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(223, 61);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(126, 21);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Chcê instrukcjê";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tomato;
			this->button1->Location = System::Drawing::Point(42, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(283, 33);
			this->button1->TabIndex = 5;
			this->button1->Text = L"WYJŒCIE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Poczatek::button1_Click);
			// 
			// Poczatek
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(795, 520);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_ok);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Poczatek";
			this->Text = L"Poczatek";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuStripAbout_Click(System::Object^  sender, System::EventArgs^  e) {
			About ^help = gcnew About();

				// wyswietlenie okna dialogowego
				help->ShowDialog();

				if(help->DialogResult == System::Windows::Forms::DialogResult::OK)
				{
					delete help;
				}

			 }

	private: System::Void button_ok_Click(System::Object^  sender, System::EventArgs^  e) {
				System::Media::SoundPlayer ^simpleSound = gcnew
				System::Media::SoundPlayer("Sound\\SN.wav");
				simpleSound->Play();
				 this->button_ok->BackColor = System::Drawing::SystemColors::HotTrack;
				MyForm^ dlg=gcnew MyForm();
				dlg->PassedValue = this->textBox1->Text;
			
				if(checkBox1->Checked)
				{
					MessageBox::Show("Gra polega na odnajdywaniu par obrazków, Zdob¹dŸ jak najwiêkszy wynik i pamiêtaj, ¿e z ka¿d¹ sekund¹ wynik staje siê mniejszy!","Instrukcja", MessageBoxButtons::OK,MessageBoxIcon::Information);
				
				}
				this->Hide();
				dlg->ShowDialog();
				Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 Close();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
