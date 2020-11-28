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
			std::cout << "������� " << student.name << " �������� � ��!\n";

		}
		void WatchStudents() {
			// ������� � �����
			for (Student item : students)
				std::cout << item.name << "\n";
		}
};

