#include<iostream>
#include<direct.h>
#include<sstream>
#include<fstream>


int main() {
	setlocale(LC_ALL, "Rus");
		
	std::cout << "Введите путь для создания папки -> ";
	std::string fold_path;
	std::getline(std::cin, fold_path);
	_mkdir("fold_path");

	return 0;	
}