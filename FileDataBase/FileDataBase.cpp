// FileDataBaseStudents.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>

#include "Program.h"

using namespace std;

string family;
bool even(const Student& value) { return value.family == "r"; }

void main()
{
	setlocale(LC_ALL, "rus"); // ��������� ������


	Program program;
	program.StartProgram();


}