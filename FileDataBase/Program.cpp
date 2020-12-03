

#include <iostream>
#include <string>
#include "LogicApp.cpp"
#include "LogicFile.cpp"

using namespace std;

class Program
{
public:
	LogicApp app;
	LogicFile logic;
	void RenderMenu() {
		std::cout << "\n\n1) Watch Students\n";
		std::cout << "2) Add Student\n";
		std::cout << "3) Delete Student (number)\n";
		std::cout << "4) Delete Student (family)\n";
		std::cout << "5) Delete last Student in list\n";
		std::cout << "6) Edit Student\n";
		std::cout << "7) Save student_list in file\n";
		std::cout << "8) Load student_list from file\n";
		std::cout << "9) Exit program\n";
	}
public:
	void StartProgram() {
		while (true) {
			// Рисуем меню
			RenderMenu();

			string inp;
			cout << "input number menu: ";
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

							cout << "input name: ";
							cin >> inp;
							student.name = inp;

							cout << "input family: ";
							cin >> inp;
							student.family = inp;

							cout << "input lastname: ";
							cin >> inp;
							student.lastname = inp;


							while (true) {
								cout << "Input age: ";
								cin >> inp;

								try {
									int age = stoi(inp);

									student.age = age;

									break;
								}
								catch (std::invalid_argument exAge) {
									cout << "You dont write int\n";
								}

							}

							cout << "Input gender (male or female ...): ";
							cin >> inp;

							student.gender = inp;

							app.Add(student);
							break;
						}
						catch (...)
						{
							std::cout << "Error! Try again" << std::endl;
						}
					}
					case (3): {
						try {
							string numberInp;

							cout << "Input number deleted student ";
							cin >> numberInp;

							int numb = stoi(numberInp);

							app.RemoveStudentNumb(numb);
						}
						catch (std::invalid_argument e) {
							cout << "You input not a int!\n";
						}
						catch (...)
						{
							std::cout << "Error. Try again" << std::endl;
						}

						break;
					}
					case (4): {
						try {
							string fam;

							cout << "Input family deleted student: ";
							cin >> fam;
							app.RemoveStudentFamily(fam);
							break;
						}
						catch (...)
						{
							std::cout << "Error! Try again" << std::endl;
						}
					}
					case (5): {
						try {
							app.RemoveLastStudent();
							break;
						}
						catch (...)
						{
							std::cout << "Error! Try again" << std::endl;
						}
					}
					case (6): {
						try {
							string numberInp;

							cout << "Write number edit student: ";
							cin >> numberInp;

							int numb = stoi(numberInp);

							app.EditStudent(numb);
						}
						catch (std::invalid_argument e) {
							cout << "Error! Try again you write not int!\n";
						}

						break;
					}
					case (7): {
						try {
							logic.Save(app.students);
							cout << "True saved " << app.GetCountStudents() << " students\n";
						}
						catch (...) {

						}

						break;
					}
					case (8): {
						try {
							auto students = logic.LoadFile();

							app.students = students;
							cout << "True loaded " << students.size() << " students\n";
						}
						catch (...) {

						}

						break;
					}
					case (9): {
						cout << "Exit program\n";;
						return;
					}
					default: {
						cout << "Write 1..9 number menu!\n";;
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


