#ifndef LOGICFILE_H
#define LOGICFILE_H

#include <iostream>
#include <list>
#include <string>
#include "Student.cpp"
#include <fstream>
#include <sstream>
#include <vector>
#include "_Logic.h"


using namespace std;



/// <summary>
/// Логика сохранения в файле
/// </summary>
class LogicFile {

public:


	// Сохранение в файл
	bool Save(std::list<Student> list) {
		ofstream testFile("data");
		int iteration = 0;
		for (Student item : list) {
			if (list.size() - 1 > iteration++)
				testFile << item.number << ";" << item.name << ";" << item.family << ";" << item.lastname << ";" << item.age << ";" << item.gender << ";\n";
			else
				testFile << item.number << ";" << item.name << ";" << item.family << ";" << item.lastname << ";" << item.age << ";" << item.gender << ";";
		}
		testFile.close();

		return true;
	}
	// Считывание с файла
	std::list<Student> LoadFile() {
		std::list<Student> list; // список студентов
		string s; // сюда будем класть считанные строки
		ifstream file("data"); // файл из которого читаем (для линукс путь будет выглядеть по другому)

		while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
			//cout << s << endl; // выводим на экран
			auto arrays = split(s, ';');

			Student newStud;
			newStud.number = stoi(arrays[0]);
			newStud.name = arrays[1];
			newStud.family = arrays[2];
			newStud.lastname = arrays[3];
			newStud.age = stoi(arrays[4]);
			newStud.gender = arrays[5];

			list.push_back(newStud);
		}

		file.close(); // обязательно закрываем файл что бы не повредить его

		return list; // возвращаем список
	}



};

// Заканчиваем директивой препроцессора
#endif
