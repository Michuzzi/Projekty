#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(359, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gra Memory zosta³a zaprojektowana i wykonana przez: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(100, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Krzysztof Kolanek U17974";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(100, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(449, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"3sem, kierunek Elektronika i Telekomunikacja";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(309, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(254, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Aby zamkn¹æ, wciœnij spacjê albo alt+Q";
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 248);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"About";
			this->Text = L"About";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &About::About_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &About::About_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

			private: System::Void About_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar == (char)Keys::Space)
				 {
					 this->DialogResult = System::Windows::Forms::DialogResult::OK;
				 }
			 }
	private: System::Void About_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if(e->Alt && e->KeyCode == Keys::Q)
				 {
					 this->DialogResult = System::Windows::Forms::DialogResult::OK;
				 }

			 }
	};
}
