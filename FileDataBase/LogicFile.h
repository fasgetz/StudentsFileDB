#ifndef LOGICFILE
#define LOGICFILE

#include <iostream>
#include <list>
#include <string>
#include "Student.h"
#include <fstream>
#include <sstream>
#include <vector>
#include "_Logic.h"


using namespace std;



/// <summary>
/// ������ ���������� � �����
/// </summary>
class LogicFile {

public:


	// ���������� � ����
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
	// ���������� � �����
	std::list<Student> LoadFile() {
		std::list<Student> list; // ������ ���������
		string s; // ���� ����� ������ ��������� ������
		ifstream file("data"); // ���� �� �������� ������ (��� ������ ���� ����� ��������� �� �������)

		while (getline(file, s)) { // ���� �� ��������� ����� ����� ������ ��������� ������ � ���������� (s)
			//cout << s << endl; // ������� �� �����
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

		file.close(); // ����������� ��������� ���� ��� �� �� ��������� ���

		return list; // ���������� ������
	}



};

// ����������� ���������� �������������
#endif