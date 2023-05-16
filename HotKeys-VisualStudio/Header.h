#pragma once
#include<iostream>
#include<fstream>
#include<string>



bool print_file(std::string file_path) {
	static std::ifstream in;
	in.open(file_path);

	if (in.is_open()) {
		char sym;
		while (in.get(sym))
			std::cout << sym;
		std::cout << std::endl;
		in.close();
		return true;
	}

	return false;
}