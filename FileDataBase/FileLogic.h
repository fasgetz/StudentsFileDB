
#include <iostream>
#include <list>
#include <string>
#include "Program.h"
#include "Student.h"
#include <sstream>
#include <vector>
using namespace std;



/// <summary>
/// ������ ���������� � �����
/// </summary>
class FileLogic
{
	public:
		// ���������� � ����
		bool Save(std::list<Student> list) {
			ofstream testFile("data");
			int iteration = 0;
			for (Student item : list) {
				if (list.size() - 1 > iteration++)
					testFile << item.number << ";" << item.name << ";" << item.family << ";" << item.lastname << ";" << item.age << ";" << item.gender << ";\n";
				else
					testFile << item.number << ";" << item.name << ";" << item.family << ";" << item.lastname << ";" << item.age << ";" << item.gender << ";";
			}
			testFile.close();

			return true;
		}
		// ���������� � �����
		std::list<Student> LoadFile() {
			std::list<Student> list; // ������ ���������
			string s; // ���� ����� ������ ��������� ������
			ifstream file("data"); // ���� �� �������� ������ (��� ������ ���� ����� ��������� �� �������)

			while (getline(file, s)) { // ���� �� ��������� ����� ����� ������ ��������� ������ � ���������� (s)
				//cout << s << endl; // ������� �� �����
				auto arrays = split(s, ';');

				Student newStud;
				newStud.number = stoi(arrays[0]);
				newStud.name = arrays[1];
				newStud.family = arrays[2];
				newStud.lastname = arrays[3];
				newStud.age = stoi(arrays[4]);
				newStud.gender = arrays[5];

				list.push_back(newStud);
			}

			file.close(); // ����������� ��������� ���� ��� �� �� ��������� ���

			return list; // ���������� ������
		}
		// ����� ��� ������ ������ (������������ �������, ������� ������� ��������)
		std::vector<std::string> split(const std::string& s, char delim) {
			std::stringstream ss(s);
			std::string item;
			std::vector<std::string> elems;
			while (std::getline(ss, item, delim)) {
				elems.push_back(item);
			}
			return elems;
		}
	
};


