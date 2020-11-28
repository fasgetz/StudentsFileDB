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
		std::cout << "\n\n1) Вывод студентов\n";
		std::cout << "2) Добавить студента\n";
		std::cout << "3) Удалить студента (по фамилии)\n";
		std::cout << "4) Редактировать студента\n";
		std::cout << "5) Завершение программы\n";
	}
public:
	void StartProgram() {
		while (true) {
			// Рисуем меню
			RenderMenu();

			string inp;
			cout << "Введите номер меню: ";
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

					cout << "Введите имя: ";
					cin >> inp;
					student.name = inp;

					cout << "Введите фамилию: ";
					cin >> inp;
					student.family = inp;

					cout << "Введите отчество: ";
					cin >> inp;
					student.lastname = inp;


					while (true) {
						cout << "Введите возраст: ";
						cin >> inp;

						try {
							int age = stoi(inp);

							student.age = age;

							break;
						}
						catch (std::invalid_argument exAge) {
							cout << "Вы ввели не число\n";
						}

					}

					cout << "Введите гендер (Основные М и Ж): ";
					cin >> inp;

					student.gender = inp;

					app.Add(student);
					break;
				}				
				case (3):
					app.RemoveStudentFamily("r");
					cout << "выбран 3\n";;
					break;
				case (4):
					cout << "выбран 4\n";;
					break;
				case (5): {
					cout << "Завершение программы\n";;
					return;
				}
				default: {
					cout << "Выберите действующий пункт из меню!\n";;
					break;
				}
				}

			}
			catch (std::invalid_argument e) {
				cout << "Вы ввели не число\n";
			}
		}
	}
};

