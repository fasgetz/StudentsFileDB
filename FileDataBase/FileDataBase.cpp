// FileDataBaseStudents.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "Program.h"

using namespace std;

string family;
bool even(const Student& value) { return value.family == "r"; }

void main()
{
	setlocale(LC_ALL, "rus"); // установка локали


	Program program;
	program.StartProgram();


}