#include<iostream>
#include<direct.h>
#include<string>
#include "Main.h"
#include <fstream>


int main() {
	setlocale(LC_ALL, "Rus");
	
	std::string name;
	std::string str;
	
	std::cout << "Введите путь для создания папки -> " << std::endl;
	std::getline(std::cin, name);
	std::cout << "\n";
	
	std::getline(std::cin, str);
	_mkdir(str.c_str());

	return 0;	
}