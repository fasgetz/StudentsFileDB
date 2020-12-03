#ifndef LOGICAPPTEST_H
#define LOGICAPPTEST_H

#include <cxxtest/TestSuite.h>
#include "LogicApp.cpp"
#include "Program.cpp"

class LogicAppTest : public CxxTest::TestSuite
{
public:
	void test1_AddOneStudent(void) {
		LogicApp logic;
		Student stud;
		logic.Add(stud);




		TS_ASSERT_EQUALS(logic.GetCountStudents(), 1);
	    }
	void test2_AddFiveStudent(void) {
		LogicApp logic;
		Student stud;
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);								




		TS_ASSERT_EQUALS(logic.GetCountStudents(), 5);
	    }	 
	void test3_RemoveOneStudent(void) {
		LogicApp logic;
		Student stud;
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);								




		TS_ASSERT_EQUALS(logic.GetCountStudents(), 5);
		logic.RemoveLastStudent();
		TS_ASSERT_EQUALS(logic.GetCountStudents(), 4);
		
	    }
	void test4_RemoveAllStudents(void) {
		LogicApp logic;
		Student stud;
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);
		logic.Add(stud);								




		TS_ASSERT_EQUALS(logic.GetCountStudents(), 5);
		logic.RemoveLastStudent();
		logic.RemoveLastStudent();
		logic.RemoveLastStudent();
		logic.RemoveLastStudent();
		logic.RemoveLastStudent();						
		TS_ASSERT_EQUALS(logic.GetCountStudents(), 0);
		
	    }
	void test5_CanTrueRemoveStudent(void) {
		LogicApp logic;
		Student stud;
		logic.Add(stud);
		bool removed = logic.RemoveLastStudent();


		TS_ASSERT_EQUALS(removed, true);
	    }
	void test6_CanFalseRemoveStudent(void) {
		LogicApp logic;
		bool removed = logic.RemoveLastStudent();


		TS_ASSERT_EQUALS(removed, false);
	    }
	void test7_CurrentNumbStudent(void) {
		LogicApp logic;
		Student stud;
		logic.Add(stud);


		TS_ASSERT_EQUALS(logic.numberCurrentStudent, 1);
	    }
	void test8_HasStudentWithNumb(void) {
		LogicApp logic;
		Student stud;
		logic.Add(stud);


        	bool hasStudent = logic.HasStudentWithNumb(1);

		TS_ASSERT_EQUALS(hasStudent, true);
	    }	
	void test9_HasStudentWithName(void) {
		LogicApp logic;
		Student stud;
		stud.name = "andrew";
		logic.Add(stud);


        	bool hasStudent = logic.HasStudentWithName("andrew");

		TS_ASSERT_EQUALS(hasStudent, true);
	    }
	void test10_HasStudentWithFamily(void) {
		LogicApp logic;
		Student stud;
		stud.family = "ivanov";
		logic.Add(stud);


        	bool hasStudent = logic.HasStudentWithFamily("ivanov");

		TS_ASSERT_EQUALS(hasStudent, true);
	    }	    	    	    
};

#endif // LOGICAPPTEST_H

