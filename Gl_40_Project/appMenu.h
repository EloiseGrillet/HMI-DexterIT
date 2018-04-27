#pragma once

#include "dataLoader.h";
namespace Gl_40_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	DataLoader dl("result.txt");
	/// <summary>
	/// Summary for appMenu
	/// </summary>
	public ref class appMenu : public System::Windows::Forms::Form
	{
	public:
		appMenu(void)
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
		~appMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  applicationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitterToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::ComponentModel::IContainer^  components;























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(appMenu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->applicationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->applicationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1357, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// applicationToolStripMenuItem
			// 
			this->applicationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->quitterToolStripMenuItem });
			this->applicationToolStripMenuItem->Name = L"applicationToolStripMenuItem";
			this->applicationToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->applicationToolStripMenuItem->Text = L"Application";
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			this->quitterToolStripMenuItem->ToolTipText = L"Ferme l\'application";
			this->quitterToolStripMenuItem->Click += gcnew System::EventHandler(this, &appMenu::quitterToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(214, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SAUCISSON";
			this->label1->Click += gcnew System::EventHandler(this, &appMenu::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(413, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"MALOTRUS";
			this->label2->Click += gcnew System::EventHandler(this, &appMenu::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(604, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PATACHON";
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &appMenu::toolTip1_Popup);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(220, 263);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(492, 20);
			this->textBox1->TabIndex = 4;
			// 
			// appMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1357, 516);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"appMenu";
			this->Text = L"appMenu";
			this->Load += gcnew System::EventHandler(this, &appMenu::appMenu_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/// Sert à transformer une ^String en string
	void MarshalString(String ^ s, string& os) 
	{
		using namespace Runtime::InteropServices;
		const char* chars =	(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	private: System::Void setLabelsAfterClick(String ^gameName, String ^rules, String ^competences)
	{
		
		this->lb_GameName->Text = gameName;
		this->lb_Competences->Text = competences;
		this->lb_Regles->Text = rules;
	}
	private: System::Void quitterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Close();
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void actionClickPbUn(System::Object^  sender, System::EventArgs^  e) 
	{
		setLabelsAfterClick("Eclair.jpg", "Ne pas se faire écraser", "Esquive");
	}
	private: System::Void btn_Results_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		list<string> data = dl.lireFichier();
		for each (string d in data)
		{
			String^ newD = gcnew String(d.c_str());
			this->richTextBox1->Text = richTextBox1->Text + newD;
		}
	}
	private: System::Void btn_Commencer_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		list<string> newDatas;
		for each (String ^line in richTextBox1->Lines)
		{
			string data = "";
			MarshalString(line, data);
			cout << data << endl;
			newDatas.push_back(data);
		}
		dl.ecrireFichier(newDatas);
	}
private: System::Void tableLayoutPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
}
private: System::Void appMenu_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void app
};
}
