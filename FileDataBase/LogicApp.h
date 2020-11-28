
#include <iostream>
#include <list>
#include <string>
#include "Program.h"
#include "Student.h"
using namespace std;

class Even {

public:
	string family;
	bool operator()(Student elem) { return (elem.family == family); }

};


class LogicApp
{
	public:
		string family;
		bool even(const Student& value) { return value.family == family; }
		std::list<Student> students;
	public:
		void Add(Student student) {
			students.push_front(student);
			std::cout << "Студент " << student.name << " добавлен в бд!\n";
		}
		void WatchStudents() {
			int size = students.size();
			std::cout << "Количество студентов в бд: " << size << "\n";

			// перебор в цикле
			for (Student item : students)
				std::cout << item.family << " " << item.name << " " <<  item.lastname << " " <<  item.age << " лет" << "\n";
		}
		// Удаление по фамилии
		void RemoveStudentFamily(string fam) {
			family = fam;
			Even ev;
			ev.family = fam;

			cout << ev.family << " удаление\n";;
			students.remove_if(ev);
			


		}
};


