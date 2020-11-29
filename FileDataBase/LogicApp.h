
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
			std::cout << "������� " << student.name << " �������� � ��!\n";
		}
		void WatchStudents() {
			int size = students.size();
			std::cout << "���������� ��������� � ��: " << size << "\n";

			// ������� � �����
			for (Student item : students)
				std::cout << item.number << ") " << item.family << " " << item.name << " " <<  item.lastname << " " <<  item.age << " ���" << "\n";
		}
		// �������� �� ������
		void RemoveStudentNumb(int numb) {
			NumberEven ev;
			ev.number = numb;

			cout << ev.number << " �������� �� ������\n";;
			students.remove_if(ev);

		}
		// �������� �� �������
		void RemoveStudentFamily(string fam) {
			Even ev;
			ev.family = fam;

			cout << ev.family << " �������� �� �������\n";;
			students.remove_if(ev);			

		}
		// ��������������
		void EditStudent(int numbSearch) {
			for (Student item : students) {

				if (item.number == numbSearch) {
					try {
						std::cout << "��������� �������: " << item.family << " " << item.name << " " << item.lastname << " " << item.age << " ���" << "\n";

						// ������� �������� �� ������
						NumberEven ev;
						ev.number = numbSearch;

						students.remove_if(ev);

						// ����������� �� ����� 
						string inp;

						cout << "������� ���: ";
						cin >> inp;
						item.name = inp;

						cout << "������� �������: ";
						cin >> inp;
						item.family = inp;

						cout << "������� ��������: ";
						cin >> inp;
						item.lastname = inp;

						cout << "������� �������: ";
						cin >> inp;

						while (true) {
							try {
								int age = stoi(inp);

								item.age = age;

								break;
							}
							catch (std::invalid_argument exAge) {
								cout << "�� ����� �� �����\n";
							}
						}


						cout << "������� ������ (�������� male � female): ";
						cin >> inp;

						item.gender = inp;

						// ��������� �������� � ����� ������
						students.push_front(item);
					}
					catch (...) {
						cout << "������ ��������������! ��������� �������\n";
					}
				}
			}
		}
};


