
#include <iostream>
#include<direct.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "Rus");
	char n;
	char check;
	std::cout << " Создать папку: ";
	std::cin >> n;
	char *dirname = &n;
	check = _mkdir(dirname,0777);
	// check if directory is created or not
	if (!check)
		printf("Вы создали папку\n");
	else {
		printf("Unable to create directory\n");
		exit(1);		
	}
	system("dir");
	return 0;
}
