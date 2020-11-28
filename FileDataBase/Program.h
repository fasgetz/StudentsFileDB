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
		std::cout << "3) ������� �������� (�� �������)\n";
		std::cout << "4) ������������� ��������\n";
		std::cout << "5) ���������� ���������\n";
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

					cout << "������� ������ (�������� � � �): ";
					cin >> inp;

					student.gender = inp;

					app.Add(student);
					break;
				}				
				case (3):
					app.RemoveStudentFamily("r");
					cout << "������ 3\n";;
					break;
				case (4):
					cout << "������ 4\n";;
					break;
				case (5): {
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

