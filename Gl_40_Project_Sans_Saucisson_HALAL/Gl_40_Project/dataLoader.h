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

		// Il nous faut un structure de sauvegarde dans un fichier : numeroJeu;Score;Date (Ou non , pas obligé sur la date) || Et on écrit ça ligne par ligne
		ifstream fichier("test.txt", ios::in);  // on ouvre en lecture

		if (fichier)  // si l'ouverture a fonctionné
		{
			string contenu;  // déclaration d'une chaîne qui contiendra la ligne lue
			while (getline(fichier, contenu)) // On parcourt tout notre fichier
			{
				datas.push_back(contenu); // On ajoute contenu dans notre liste de données
			}
			fichier.close();// On ferme le fichier 
		}
		else
			cerr << "Impossible d'ouvrir le fichier !" << endl;
		
		return datas;
	}
	void DataLoader::ecrireFichier(list<string> newDatas)
	{
		ofstream fichier("results.txt", ios::out || ios::ate); // ouverture en écriture du fichier, et on se positionne à la fin, on ne veut pas perdre les données
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
