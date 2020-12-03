#ifndef LOGICFILETEST_H
#define LOGICFILETEST_H

#include <cxxtest/TestSuite.h>
#include "Program.cpp"
#include "_Logic.h"

class StudentTest : public CxxTest::TestSuite
{
public:
    void test7_SplitThoWords(void) {

		string word = "abc cab";

		auto words = split(word, ' ');


		TS_ASSERT_EQUALS(words.size(), 2);
    }
    void test8_Split10Words(void) {
		string word = "abc cab word word word word sdf ivan sidr petr";

		auto words = split(word, ' ');


		TS_ASSERT_EQUALS(words.size(), 10);
    }
    void test9_BadSplitWords(void) {
		string word = "abc cab word word word word sdf ivan sidr petr";

		auto words = split(word, '_');


		TS_ASSERT_EQUALS(words.size(), 1);
    }
    void test10_BadDelimeterWord(void) {
		string word = "abc cab";

		auto words = split(word, ',');


		TS_ASSERT_EQUALS(words.size(), 1);
    }
};

#endif // LOGICFILETEST_H
