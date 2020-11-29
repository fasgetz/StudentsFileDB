
#include <iostream>
#include <list>
#include <string>
#include "Program.h"
#include "Student.h"
using namespace std;


class NumberEven {
public:
	int number;
	bool operator()(Student elem) { return (elem.number == number); }
};

class Even {

public:
	string family;
	bool operator()(Student elem) { return (elem.family == family); }

};


class LogicApp
{
	public:
		int numberCurrentStudent = 0;
		string family;
		bool even(const Student& value) { return value.family == family; }
		std::list<Student> students;
	public:
		void Add(Student student) {
			student.number = ++numberCurrentStudent;
			students.push_back(student);
			std::cout << "Студент " << student.name << " добавлен в бд!\n";
		}
		void WatchStudents() {
			int size = students.size();
			std::cout << "Количество студентов в бд: " << size << "\n";

			// перебор в цикле
			for (Student item : students)
				std::cout << item.number << ") " << item.family << " " << item.name << " " <<  item.lastname << " " <<  item.age << " лет" << "\n";
		}
		// Удаление по номеру
		void RemoveStudentNumb(int numb) {
			NumberEven ev;
			ev.number = numb;

			cout << ev.number << " удаление по номеру\n";;
			students.remove_if(ev);

		}
		// Удаление по фамилии
		void RemoveStudentFamily(string fam) {
			Even ev;
			ev.family = fam;

			cout << ev.family << " удаление по фамилии\n";;
			students.remove_if(ev);			

		}
		// Редактирование
		void EditStudent(int numbSearch) {
			for (Student item : students) {

				if (item.number == numbSearch) {
					try {
						std::cout << "Найденный студент: " << item.family << " " << item.name << " " << item.lastname << " " << item.age << " лет" << "\n";

						// Удаляем студента по номеру
						NumberEven ev;
						ev.number = numbSearch;

						students.remove_if(ev);

						// Редактируем по новой 
						string inp;

						cout << "Введите имя: ";
						cin >> inp;
						item.name = inp;

						cout << "Введите фамилию: ";
						cin >> inp;
						item.family = inp;

						cout << "Введите отчество: ";
						cin >> inp;
						item.lastname = inp;

						cout << "Введите возраст: ";
						cin >> inp;

						while (true) {
							try {
								int age = stoi(inp);

								item.age = age;

								break;
							}
							catch (std::invalid_argument exAge) {
								cout << "Вы ввели не число\n";
							}
						}


						cout << "Введите гендер (Основные male и female): ";
						cin >> inp;

						item.gender = inp;

						// Добавляем студента в конец списка
						students.push_front(item);
					}
					catch (...) {
						cout << "Ошибка редактирования! Повторите попытку\n";
					}
				}
			}
		}
};


