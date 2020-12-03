#ifndef LOGICFILETEST_H
#define LOGICFILETEST_H

#include <cxxtest/TestSuite.h>
#include "../Program.h"

class StudentTest : public CxxTest::TestSuite
{
public:
    void test1_TrueSavedList(void) {
		LogicApp app;
		Student stud;
		app.Add(stud);

		LogicFile logic;
		bool saved = logic.Save(app.students);
		TS_ASSERT_EQUALS(saved, true);
	    }
    void test2_Save1Student(void) {
		LogicApp app;
		Student stud;
		app.Add(stud);

		LogicFile logic;
		
		TS_ASSERT_EQUALS(app.GetCountStudents(), 1);
		
		bool saved = logic.Save(app.students);
		TS_ASSERT_EQUALS(saved, true);
    }
    void test3_Save5Students(void) {
		LogicApp app;
		Student stud;
		app.Add(stud);
		app.Add(stud);
		app.Add(stud);
		app.Add(stud);
		app.Add(stud);								

		LogicFile logic;
		
		TS_ASSERT_EQUALS(app.GetCountStudents(), 5);
		
		bool saved = logic.Save(app.students);
		TS_ASSERT_EQUALS(saved, true);
    }
	void test4_Load(void) {
		LogicApp app;




		LogicFile logic;
		logic.Save(app.students);
		list<Student> list = logic.LoadFile();


		TS_ASSERT_EQUALS(list.size(), 0);
	    }
    void test5_LoadOneStudent(void) {
		LogicApp app;
		Student stud;
		app.Add(stud);							

		LogicFile logic;
		
		TS_ASSERT_EQUALS(app.GetCountStudents(), 1);
		
		bool saved = logic.Save(app.students);
		
		list<Student> list = logic.LoadFile();
		TS_ASSERT_EQUALS(list.size(), 1);
		
    }
    void test6_LoadFiveStudents(void) {
		LogicApp app;
		Student stud;
		app.Add(stud);
		app.Add(stud);
		app.Add(stud);
		app.Add(stud);
		app.Add(stud);				

		LogicFile logic;
		
		TS_ASSERT_EQUALS(app.GetCountStudents(), 5);
		
		bool saved = logic.Save(app.students);
		
		list<Student> list = logic.LoadFile();
		TS_ASSERT_EQUALS(list.size(), 5);
    }
    void test7_SplitThoWords(void) {
		LogicFile logic;
		string word = "abc cab";

		auto words = logic.split(word, ' ');


		TS_ASSERT_EQUALS(words.size(), 2);
    }
    void test8_Split10Words(void) {
		LogicFile logic;
		string word = "abc cab word word word word sdf ivan sidr petr";

		auto words = logic.split(word, ' ');


		TS_ASSERT_EQUALS(words.size(), 10);
    }
    void test9_BadSplitWords(void) {
		LogicFile logic;
		string word = "abc cab word word word word sdf ivan sidr petr";

		auto words = logic.split(word, '_');


		TS_ASSERT_EQUALS(words.size(), 1);
    }
    void test10_BadDelimeterWord(void) {
		LogicFile logic;
		string word = "abc cab";

		auto words = logic.split(word, ',');


		TS_ASSERT_EQUALS(words.size(), 1);
    }
};

#endif // LOGICFILETEST_H
