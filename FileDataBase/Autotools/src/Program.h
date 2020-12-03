#ifndef PROGRAM_H
#define PROGRAM_H

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
		std::cout << "3) Удалить студента (по номеру)\n";
		std::cout << "4) Удалить студента (по фамилии)\n";
		std::cout << "5) Редактировать студента\n";
		std::cout << "6) Завершение программы\n";
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
						try {
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

							cout << "Введите гендер (Основные male и female): ";
							cin >> inp;

							student.gender = inp;

							app.Add(student);
							break;
						}
						catch (...)
						{
							std::cout << "Ошибка! Повторите попытку." << std::endl;
						}
					}
					case (3): {
						try {
							string numberInp;

							cout << "Введите номер удаляемого студента: ";
							cin >> numberInp;

							int numb = stoi(numberInp);

							app.RemoveStudentNumb(numb);
						}
						catch (std::invalid_argument e) {
							cout << "Вы ввели не номер!\n";
						}
						catch (...)
						{
							std::cout << "Ошибка! Повторите попытку." << std::endl;
						}

						break;
					}
					case (4): {
						try {
							string fam;

							cout << "Введите фамилию удаляемого студента: ";
							cin >> fam;
							app.RemoveStudentFamily(fam);
							break;
						}
						catch (...)
						{
							std::cout << "Ошибка! Повторите попытку." << std::endl;
						}
					}
					case (5): {
						try {
							string numberInp;

							cout << "Введите номер редактируемого студента: ";
							cin >> numberInp;

							int numb = stoi(numberInp);

							app.EditStudent(numb);
						}
						catch (std::invalid_argument e) {
							cout << "Вы ввели не номер!\n";
						}

						break;
					}
					case (6): {
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


#endif // PROGRAM_H
