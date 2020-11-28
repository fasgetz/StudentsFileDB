#pragma once
#include <iostream>
#include "Student.h"
#include <list>
class LogicApp
{
	private: 
		std::list<Student> students;
	public:
		void Add(Student student) {
			students.push_front(student);
			std::cout << "Студент " << student.name << " добавлен в бд!\n";

		}
		void WatchStudents() {
			// перебор в цикле
			for (Student item : students)
				std::cout << item.name << "\n";
		}
};

