#pragma once
#include <iostream>

using namespace std;

class Human {
public:
	Human(string sur_name, string name, string second_name) // конструктор, _init()_
	{
		this->sur_name = sur_name;
		this->name = name;
		this->second_name = second_name;
		this->education = "Отсутствует";
	}

	void grown() { // функция роста человека
		if (this->education == "Отсутствует") {
			this->education = "Детсад";
		}

		if (this->education == "Детсад") {
			this->education = "Школа";
		}

		if (this->education == "Школа") {
			this->education = "Университе";
		}

		if (this->education == "Университе") {
			this->education = "Работа";
		}
	}

	void getEducation() { // получить образование
		cout << this->sur_name << ' ' << this->name << ' ' << this->second_name << " have education: " << this->education << endl;
	}

private:
	string name;
	string sur_name;
	string second_name;
	string education;
};
