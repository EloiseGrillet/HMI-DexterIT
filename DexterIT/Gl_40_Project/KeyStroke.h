#pragma once
#include <list>
#include "Convertisseur.h"
#include "DataLoader.h"
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <string>
#include <AtlBase.h>
#include <atlconv.h>
#include <msclr\marshal_atl.h>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>

namespace Gl_40_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for KeyStroke
	/// </summary>
	public ref class KeyStroke : public System::Windows::Forms::Form
	{
	public:
		KeyStroke()
		{
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KeyStroke()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lb_guideWord;

	private: System::Windows::Forms::TextBox^  tb_userInput;

	private: System::Windows::Forms::Label^  lb_time;
	private: System::Windows::Forms::Timer^  timer;

	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  lb_score;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		int count;
		int score;
		DataLoader dl;
		String ^words;
		cli::array<String^>^ myWords;
		Convertisseur conv;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_guideWord = (gcnew System::Windows::Forms::Label());
			this->tb_userInput = (gcnew System::Windows::Forms::TextBox());
			this->lb_time = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lb_score = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lb_guideWord);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1108, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// lb_guideWord
			// 
			this->lb_guideWord->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lb_guideWord->AutoSize = true;
			this->lb_guideWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_guideWord->Location = System::Drawing::Point(453, 16);
			this->lb_guideWord->Name = L"lb_guideWord";
			this->lb_guideWord->Size = System::Drawing::Size(204, 73);
			this->lb_guideWord->TabIndex = 0;
			this->lb_guideWord->Text = L"label1";
			// 
			// tb_userInput
			// 
			this->tb_userInput->Location = System::Drawing::Point(12, 298);
			this->tb_userInput->Name = L"tb_userInput";
			this->tb_userInput->Size = System::Drawing::Size(1108, 20);
			this->tb_userInput->TabIndex = 1;
			this->tb_userInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &KeyStroke::textBox1_KeyDown);
			// 
			// lb_time
			// 
			this->lb_time->AutoSize = true;
			this->lb_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_time->Location = System::Drawing::Point(13, 184);
			this->lb_time->Name = L"lb_time";
			this->lb_time->Size = System::Drawing::Size(59, 25);
			this->lb_time->TabIndex = 2;
			this->lb_time->Text = L"Time";
			// 
			// lb_score
			// 
			this->lb_score->AutoSize = true;
			this->lb_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_score->Location = System::Drawing::Point(992, 185);
			this->lb_score->Name = L"lb_score";
			this->lb_score->Size = System::Drawing::Size(85, 24);
			this->lb_score->TabIndex = 3;
			this->lb_score->Text = L"Score : 0";
			// 
			// KeyStroke
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1132, 575);
			this->Controls->Add(this->lb_score);
			this->Controls->Add(this->lb_time);
			this->Controls->Add(this->tb_userInput);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1148, 614);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1148, 614);
			this->Name = L"KeyStroke";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KeyStroke";
			this->TopMost = true;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &KeyStroke::KeyStroke_FormClosed);
			this->Load += gcnew System::EventHandler(this, &KeyStroke::KeyStroke_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KeyStroke_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//L'interval du timer est à 1 seconde 
		timer->Interval = 1000;
		//Le tick est ajouté à l'event handler pour modifier le texte du label périodiquement
		timer->Tick += gcnew System::EventHandler(this, &KeyStroke::timer_Tick);
		//On à 60 seconde;
		count = 60;
		this->lb_time->Text = Convert::ToString(count);
		//Et on commence à compter.
		timer->Start();
		// ------------- Initialisation du label guide
		list<string> mots = dl.lireFichier(); // récupération des mots possibles
		String^ mot = pickRandomMots(mots); // sélection aléatoire
		lb_guideWord->Text = mot; // Affectation

		

	}

	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		if (count > 0)
		{
			// Affichage du temps restant
			this->lb_time->Text = Convert::ToString(count--);
		}
		if (count == 0)
		{
			// Arrêt du timer
			timer->Stop();

			// apparition du bouton continuer
			// btn_continue.Visible = true;
		}
	}

	private: System::Void KeyStroke_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
	{

	}

	/// Vérifie que le mot est bien écrit
	private: System::Boolean verifMot(String ^mot, String ^reference)
	{
		return mot->Equals(reference);
	}


	private: System::String^ pickRandomMots(list<std::string> listeMots)
	{
		//marshal_context^ context = gcnew marshal_context();// Nécessaire sinon la conversion ne marche pas.
		
		String^ mot = "";
		srand(time(NULL));
		int index = rand() % listeMots.size() - 1;
		int i = 0;
		for each (std::string str in listeMots)
		{ 
			if (i == index)
			{
				mot = msclr::interop::marshal_as<System::String^>(str.data());
				i++;
			}
			else { i++; }
		}
		return mot;
	}

	/// Système de validation du mot, incrèmente le score, et ce tant que count !=0
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		// Si l'utilisateur presse espace ou entrée
		if (e->KeyData == Keys::Space || e->KeyData == Keys::Enter)
		{
			// On vérifie le mot
			if (verifMot(tb_userInput->Text, lb_guideWord->Text))
			{
				// Si c'est le bon
				score++; // On incrémente le score
			}
			lb_score->Text = "Score : " + score; // On réécrit le label du score
			list<string> mots = dl.lireFichier();
			String^ mot = pickRandomMots(mots);
			lb_guideWord->Text = mot;

			tb_userInput->Clear(); // quoi qu'il arrive, on clear la text box

			tb_userInput->Text = "";
		}
	}

	};
}
