#pragma once
#include <iostream>
#include <string>
#include "LogicApp.h"
using namespace std;

class Program
{
public:
	LogicApp app;
	void RenderMenu() {
		std::cout << "\n\n1) ����� ���������\n";
		std::cout << "2) �������� ��������\n";
		std::cout << "3) ������� �������� (�� ������)\n";
		std::cout << "4) ������� �������� (�� �������)\n";
		std::cout << "5) ������� ���������� �������� � ������\n";
		std::cout << "6) ������������� ��������\n";
		std::cout << "7) ���������� ���������\n";
	}
public:
	void StartProgram() {
		while (true) {
			// ������ ����
			RenderMenu();

			string inp;
			cout << "������� ����� ����: ";
			cin >> inp;

			try {
				int res = stoi(inp);

				switch (res)
					{
					case (1): {
						app.WatchStudents();
						break;
					}
					case (2): {
						try {
							Student student;

							string inp;

							cout << "������� ���: ";
							cin >> inp;
							student.name = inp;

							cout << "������� �������: ";
							cin >> inp;
							student.family = inp;

							cout << "������� ��������: ";
							cin >> inp;
							student.lastname = inp;


							while (true) {
								cout << "������� �������: ";
								cin >> inp;

								try {
									int age = stoi(inp);

									student.age = age;

									break;
								}
								catch (std::invalid_argument exAge) {
									cout << "�� ����� �� �����\n";
								}

							}

							cout << "������� ������ (�������� male � female): ";
							cin >> inp;

							student.gender = inp;

							app.Add(student);
							break;
						}
						catch (...)
						{
							std::cout << "������! ��������� �������." << std::endl;
						}
					}			
					case (3): {
						try {
							string numberInp;

							cout << "������� ����� ���������� ��������: ";
							cin >> numberInp;

							int numb = stoi(numberInp);

							app.RemoveStudentNumb(numb);
						}
						catch (std::invalid_argument e) {
							cout << "�� ����� �� �����!\n";
						}
						catch (...)
						{
							std::cout << "������! ��������� �������." << std::endl;
						}

						break;
					}
					case (4): {
						try {
							string fam;

							cout << "������� ������� ���������� ��������: ";
							cin >> fam;
							app.RemoveStudentFamily(fam);
							break;
						}
						catch (...)
						{
							std::cout << "������! ��������� �������." << std::endl;
						}
					}
					case (5): {
						try {
							app.RemoveLastStudent();
							break;
						}
						catch (...)
						{
							std::cout << "������! ��������� �������." << std::endl;
						}
					}
					case (6): {
						try {
							string numberInp;

							cout << "������� ����� �������������� ��������: ";
							cin >> numberInp;

							int numb = stoi(numberInp);

							app.EditStudent(numb);							
						}
						catch (std::invalid_argument e) {
							cout << "�� ����� �� �����!\n";
						}
						
						break;
					}
					case (7): {
						cout << "���������� ���������\n";;
						return;
					}
					default: {
						cout << "�������� ����������� ����� �� ����!\n";;
						break;
					}
				}

			}
			catch (std::invalid_argument e) {
				cout << "�� ����� �� �����\n";
			}
		}
	}
};

