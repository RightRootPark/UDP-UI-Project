#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f? Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf?en.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label17;

	protected:


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f? die Designerunterst?zung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge?dert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 464);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(157, 490);
			this->panel1->TabIndex = 1;
			this->panel1->Tag = L"RR";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 12);
			this->label8->TabIndex = 1;
			this->label8->Text = L"I(7)";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 12);
			this->label7->TabIndex = 1;
			this->label7->Text = L"I(6)";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 12);
			this->label6->TabIndex = 1;
			this->label6->Text = L"I(5)";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 12);
			this->label5->TabIndex = 1;
			this->label5->Text = L"I(4)";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 12);
			this->label4->TabIndex = 1;
			this->label4->Text = L"I(3)";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 12);
			this->label3->TabIndex = 1;
			this->label3->Text = L"I(2)";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"I(1)";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"I(0)";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(39, 220);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 21);
			this->textBox8->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(39, 112);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 21);
			this->textBox4->TabIndex = 0;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(39, 193);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 21);
			this->textBox7->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(39, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 21);
			this->textBox3->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(39, 166);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 21);
			this->textBox6->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(39, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(39, 139);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 21);
			this->textBox5->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(39, 247);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 21);
			this->textBox9->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 12);
			this->label9->TabIndex = 1;
			this->label9->Text = L"I(8)";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(39, 273);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 21);
			this->textBox10->TabIndex = 0;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(39, 300);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 21);
			this->textBox11->TabIndex = 0;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(39, 327);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 21);
			this->textBox12->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 276);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 12);
			this->label10->TabIndex = 1;
			this->label10->Text = L"I(9)";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 303);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(30, 12);
			this->label11->TabIndex = 1;
			this->label11->Text = L"I(10)";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(9, 330);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 12);
			this->label12->TabIndex = 1;
			this->label12->Text = L"I(11)";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(39, 354);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 21);
			this->textBox13->TabIndex = 0;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(39, 381);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 21);
			this->textBox14->TabIndex = 0;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(39, 408);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 21);
			this->textBox15->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 357);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 12);
			this->label13->TabIndex = 1;
			this->label13->Text = L"I(12)";
			this->label13->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 384);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(30, 12);
			this->label14->TabIndex = 1;
			this->label14->Text = L"I(13)";
			this->label14->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 411);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 12);
			this->label15->TabIndex = 1;
			this->label15->Text = L"I(14)";
			this->label15->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(228, 46);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 21);
			this->textBox16->TabIndex = 0;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(179, 52);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(43, 12);
			this->label16->TabIndex = 1;
			this->label16->Text = L"WiFi IP";
			this->label16->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(228, 70);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 21);
			this->textBox17->TabIndex = 0;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(179, 76);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 12);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Port";
			this->label17->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(58, 9);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(37, 12);
			this->label18->TabIndex = 1;
			this->label18->Text = L"DATA";
			this->label18->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 506);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Name = L"Form1";
			this->Text = L"RR UDP UI";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void eventLog1_EntryWritten(System::Object^  sender, System::Diagnostics::EntryWrittenEventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
