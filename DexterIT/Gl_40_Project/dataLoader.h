#pragma once

using namespace System;
#include "String.h"
#include <list>
#include <iostream>
#include <string>
#include <fstream>

	public ref class DataLoader
	{
	public:
		DataLoader();
		DataLoader(String ^filePath) :_filePath(filePath) {}
		void ecrireFichier(std::list<std::string> newDatas);
		std::list<std::string> lireFichier();
		~DataLoader();
		void setPath(String ^filePath) { _filePath = filePath; }
	private:
		String ^_filePath;
	};

	
