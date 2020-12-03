#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using std::string;

/// <summary>
/// Сущность студента
/// </summary>
class Student
{
public:
	int number;
	string family;
	string name;
	string lastname;
	int age;
	string gender;
};

#endif // STUDENT_H
