#ifndef LOGICAPP_H
#define LOGICAPP_H

#include <iostream>
#include <list>
#include <string>
#include "Student.cpp"

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
		std::list<Student> students;
	public:
		bool Add(Student student) {
			student.number = ++numberCurrentStudent;
			students.push_back(student);
			std::cout << "Student " << student.name << " aded in db\n";

			return true;
		}
		void WatchStudents() {
			int size = students.size();
			std::cout << "Count students in db: " << GetCountStudents() << "\n";

			// ������� � �����
			for (Student item : students)
				std::cout << item.number << ") " << item.family << " " << item.name << " " <<  item.lastname << " " <<  item.age << " age" << "\n";
		}
		// �������� �� ������
		void RemoveStudentNumb(int numb) {
			NumberEven ev;
			ev.number = numb;

			cout << ev.number << " delete in number\n";;
			students.remove_if(ev);

		}
		// �������� �� �������
		void RemoveStudentFamily(string fam) {
			Even ev;
			ev.family = fam;

			cout << ev.family << " delete in family\n";;
			students.remove_if(ev);

		}
		// �������� ���������� �������� � ������
		bool RemoveLastStudent() {

			if (students.size() > 0) {
				students.pop_back();
				cout << "last student in list removed\n";;

				return true;
			}
			else {
				cout << "list is emptry!\n";;

				return false;
			}


		}
		// ���� �� ������� �� ������ � ������
		bool HasStudentWithNumb(int numbSearch) {
			for (Student item : students) {

				if (item.number == numbSearch)
					return true;

			}

			return false;
		}
		// ���� �� ������� �� ������� � ������
		bool HasStudentWithFamily(string family) {
			for (Student item : students) {

				if (item.family == family)
					return true;

			}

			return false;
		}
		// ���� �� ������� �� ����� � ������
		bool HasStudentWithName(string name) {
			for (Student item : students) {

				if (item.name == name)
					return true;

			}

			return false;
		}
		// ��������������
		void EditStudent(int numbSearch) {
			for (Student item : students) {

				if (item.number == numbSearch) {
					try {
						std::cout << "Searched student: " << item.family << " " << item.name << " " << item.lastname << " " << item.age << " ages" << "\n";

						// ������� �������� �� ������
						NumberEven ev;
						ev.number = numbSearch;

						students.remove_if(ev);

						// ����������� �� �����
						string inp;

						cout << "Input name: ";
						cin >> inp;
						item.name = inp;

						cout << "Input family: ";
						cin >> inp;
						item.family = inp;

						cout << "Input lastname: ";
						cin >> inp;
						item.lastname = inp;

						cout << "Input age: ";
						cin >> inp;

						while (true) {
							try {
								int age = stoi(inp);

								item.age = age;

								break;
							}
							catch (std::invalid_argument exAge) {
								cout << "You write not int\n";
							}
						}


						cout << "Input gender (male or female or ...): ";
						cin >> inp;

						item.gender = inp;

						// ��������� �������� � ����� ������
						students.push_front(item);
					}
					catch (...) {
						cout << "Error edit! Try again!\n";
					}
				}
			}
		}
		// ����� ���������� ���������� ��������� � ������
		int GetCountStudents() {
			auto count = students.size();
			return count;
		}
};




#endif // LOGICAPP_H

