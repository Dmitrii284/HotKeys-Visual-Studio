#pragma once
#include<iostream>
#include<fstream>
#include<string>


void chek() {
	char sym = 0, n = 0, y = 0;
	std::cin >> sym;
	switch (sym) {
	case'Y': case 'y':
		std::cout << "������� ���� � �������� �����(�������� - C: / person): ";
		break;
	case'N': case 'n':
		std::cout << "����� �� ���������!!! \n";
		break;
	default:
		std::cout << "������ �����!!\n";
	}
	
}
 


