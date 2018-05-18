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
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^  pb_Jeu_Un;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btn_Commencer;
	private: System::Windows::Forms::Label^  lb_GameName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_Results;
	private: System::Windows::Forms::Label^  lb_Competences;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lb_Regles;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(appMenu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->applicationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_Competences = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lb_Regles = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_Results = (gcnew System::Windows::Forms::Button());
			this->btn_Commencer = (gcnew System::Windows::Forms::Button());
			this->lb_GameName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pb_Jeu_Un = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Jeu_Un))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->applicationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1350, 24);
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
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				63.62264F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36.37736F)));
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 28);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1325, 578);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->lb_Competences);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->lb_Regles);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->btn_Results);
			this->groupBox1->Controls->Add(this->btn_Commencer);
			this->groupBox1->Controls->Add(this->lb_GameName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(845, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(477, 572);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Déscription";
			// 
			// lb_Competences
			// 
			this->lb_Competences->AutoSize = true;
			this->lb_Competences->Location = System::Drawing::Point(14, 366);
			this->lb_Competences->Name = L"lb_Competences";
			this->lb_Competences->Size = System::Drawing::Size(340, 13);
			this->lb_Competences->TabIndex = 7;
			this->lb_Competences->Text = L"Cliquer sur une image pour faire apparaître les compétences travaillées";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 353);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Compétences utilisées : ";
			// 
			// lb_Regles
			// 
			this->lb_Regles->AutoSize = true;
			this->lb_Regles->Location = System::Drawing::Point(14, 174);
			this->lb_Regles->Name = L"lb_Regles";
			this->lb_Regles->Size = System::Drawing::Size(325, 13);
			this->lb_Regles->TabIndex = 5;
			this->lb_Regles->Text = L"Cliquer sur une image pour faire apparaître les règles du jeu associé";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Règles :";
			// 
			// btn_Results
			// 
			this->btn_Results->Location = System::Drawing::Point(342, 503);
			this->btn_Results->Name = L"btn_Results";
			this->btn_Results->Size = System::Drawing::Size(129, 46);
			this->btn_Results->TabIndex = 3;
			this->btn_Results->Text = L"Voir les anciens resultats";
			this->btn_Results->UseVisualStyleBackColor = true;
			this->btn_Results->Click += gcnew System::EventHandler(this, &appMenu::btn_Results_Click);
			// 
			// btn_Commencer
			// 
			this->btn_Commencer->Location = System::Drawing::Point(6, 503);
			this->btn_Commencer->Name = L"btn_Commencer";
			this->btn_Commencer->Size = System::Drawing::Size(129, 46);
			this->btn_Commencer->TabIndex = 2;
			this->btn_Commencer->Text = L"Commencer";
			this->btn_Commencer->UseVisualStyleBackColor = true;
			this->btn_Commencer->Click += gcnew System::EventHandler(this, &appMenu::btn_Commencer_Click);
			// 
			// lb_GameName
			// 
			this->lb_GameName->AutoSize = true;
			this->lb_GameName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_GameName->Location = System::Drawing::Point(11, 107);
			this->lb_GameName->Name = L"lb_GameName";
			this->lb_GameName->Size = System::Drawing::Size(86, 16);
			this->lb_GameName->TabIndex = 1;
			this->lb_GameName->Text = L"Nom du jeu";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(449, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cliquer sur une image pour afficher les détails du jeu";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->pb_Jeu_Un, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->richTextBox1, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(836, 572);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// pb_Jeu_Un
			// 
			this->pb_Jeu_Un->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pb_Jeu_Un->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_Jeu_Un.Image")));
			this->pb_Jeu_Un->ImageLocation = L"";
			this->pb_Jeu_Un->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_Jeu_Un.InitialImage")));
			this->pb_Jeu_Un->Location = System::Drawing::Point(3, 3);
			this->pb_Jeu_Un->Name = L"pb_Jeu_Un";
			this->pb_Jeu_Un->Size = System::Drawing::Size(412, 280);
			this->pb_Jeu_Un->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pb_Jeu_Un->TabIndex = 0;
			this->pb_Jeu_Un->TabStop = false;
			this->pb_Jeu_Un->Click += gcnew System::EventHandler(this, &appMenu::actionClickPbUn);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(421, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(412, 280);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// appMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1350, 618);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"appMenu";
			this->Text = L"appMenu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Jeu_Un))->EndInit();
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
};
}
