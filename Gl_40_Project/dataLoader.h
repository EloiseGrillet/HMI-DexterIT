#pragma once
#include "String.h";
#include <list>;
#include <iostream>
#include <string>
#include <fstream>

namespace Gl_40_Project 
{
	using namespace std;
	using namespace System;
	public class DataLoader
	{
	public:
		DataLoader();
		DataLoader(string filePath) :_filePath(filePath){}
		void ecrireFichier(list<string> newDatas);
		list<string> lireFichier();
		~DataLoader();

	private:
		string _filePath; 
		list<string> datas;
	};

	DataLoader::DataLoader()
	{
	}

	list<string> DataLoader::lireFichier()
	{

		// Il nous faut un structure de sauvegarde dans un fichier : numeroJeu;Score;Date (Ou non , pas oblig� sur la date) || Et on �crit �a ligne par ligne
		ifstream fichier("test.txt", ios::in);  // on ouvre en lecture

		if (fichier)  // si l'ouverture a fonctionn�
		{
			string contenu;  // d�claration d'une cha�ne qui contiendra la ligne lue
			while (getline(fichier, contenu)) // On parcourt tout notre fichier
			{
				datas.push_back(contenu); // On ajoute contenu dans notre liste de donn�es
			}
			fichier.close();// On ferme le fichier 
		}
		else
			cerr << "Impossible d'ouvrir le fichier !" << endl;
		
		return datas;
	}
	void DataLoader::ecrireFichier(list<string> newDatas)
	{
		ofstream fichier("results.txt", ios::out || ios::ate); // ouverture en �criture du fichier, et on se positionne � la fin, on ne veut pas perdre les donn�es
		if (fichier)
		{
			for each (string data in newDatas)
			{
				fichier << data;
			}
		}
		else
		{
			cerr << "Impossible d'ouvrir le fichier !" << endl;
		}
	}

	DataLoader::~DataLoader()
	{
	}
}
