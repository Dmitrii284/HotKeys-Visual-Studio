
#include <iostream>
#include<direct.h>
#include <stdio.h>
#include "Main.h"
#include"Header.h"



int main() {
	setlocale(LC_ALL, "Rus");

	char sym = 0, N = 0, n = 0, Y = 0, y = 0, file_name = 0;

	std::cout << "Хотите создать папку ? y/n -> ";	
	chek();


	//std::cout << "Введите путь и название папки (например - C:/person):  ";
	std::string dir;
	std::cin >> dir;
	int status = _mkdir(dir.c_str());
	
	// check if directory is created or not
	if (!status)
		std::cout << "Вы находитесь в дирректории " << dir.c_str() << std::endl;
	else {
		printf("Не удалось создать каталог, или каталог с таким названием уже существует\n");
		return (0);
	}
	std::cout << "Введите имя файла -> ";
	std::cin >> file_name;	
	std::string path = (dir + '/' + file_name +'.' + "txt").c_str();
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		std::cout << "Файл с именем "<< file_name <<" создан.\nОткрыть его для редактирования ? (y / n) -> ";
		
			std::string str;
			std::getline(std::cin, str);
			out << str << '\n';
			std::cout << "Запись добавлена в файл!\n";
			std::cout << "Содержимое файла: .\n";
			print_file(path);
	}
	else
	{
		std::cout << "Ошибка открытия файла! \n";
	}
	out.close();



	return 0;
}



