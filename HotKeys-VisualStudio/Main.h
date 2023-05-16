#pragma once
#include<iostream>
#include<fstream>
#include<string>


void chek() {
	char sym = 0, n = 0, y = 0;
	std::cin >> sym;
	switch (sym) {
	case'Y': case 'y':
		std::cout << "Введите путь и название папки(например - C: / person): ";
		break;
	case'N': case 'n':
		std::cout << "Выход из программы!!! \n";
		break;
	default:
		std::cout << "Ошибка ввода!!\n";
	}
	
}
 


