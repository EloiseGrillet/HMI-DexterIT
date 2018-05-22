#pragma once
#include "DataLoader.h"


DataLoader::DataLoader()
{
}

std::list<std::string> DataLoader::lireFichier()
{

	std::list<std::string> datas;
	// Il nous faut un structure de sauvegarde dans un fichier : numeroJeu;Score;Date (Ou non , pas obligé sur la date) || Et on écrit ça ligne par ligne
	std::fstream fichier("D:\\_UTBM\\INFO02\\GL40\\Gl_40_Project_V2\\GL_40_Project\\mots.txt", std::fstream::in);// on ouvre en lecture

	if (fichier)  // si l'ouverture a fonctionné
	{
		std::string contenu;  // déclaration d'une chaîne qui contiendra la ligne lue
		while (getline(fichier, contenu)) // On parcourt tout notre fichier
		{
			datas.push_back(contenu); // On ajoute contenu dans notre liste de données
		}
		fichier.close();// On ferme le fichier 
	}
	else
		std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;

	return datas;
}


void DataLoader::ecrireFichier(std::list<std::string> newDatas)
{
	std::fstream fichier("D:\\_UTBM\\GL40\\Gl_40_Project_Sans_Saucisson_HALAL\\GL_40_Project\\mots.txt", std::fstream::out | std::fstream::app); // ouverture en écriture du fichier, et on se positionne à la fin, on ne veut pas perdre les données
	if (fichier)
	{
		for each (std::string data in newDatas)
		{
			data = data + "\n";
			fichier << data;
		}
	}
	else
	{
		std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;
	}
}

DataLoader::~DataLoader()
{
}