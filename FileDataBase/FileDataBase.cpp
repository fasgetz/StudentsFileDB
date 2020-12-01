// FileDataBaseStudents.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//
#include <fstream>
#include <iostream>

#include "Program.h"
#include "FileLogic.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus"); // ��������� ������
	//cout << "������� ����� ����: ";
	// ��������� ������
	Program program;
	std::list<Student> list;
	Student stud;
	stud.name = "andrew";
	stud.family = "radyukevich";
	stud.lastname = "sergeevich";
	stud.age = 21;
	stud.number = 1;
	stud.gender = "male";
	list.push_front(stud);
	list.push_front(stud);
	list.push_front(stud);
	list.push_front(stud);
	list.push_front(stud);

	// ��������� � �����





	FileLogic logic;
	logic.Save(list);



	std::list<Student> newList = logic.LoadFile();
	

	for (Student item : newList) {
		cout << item.family;
	}

	//Program program;
	//program.StartProgram();


}