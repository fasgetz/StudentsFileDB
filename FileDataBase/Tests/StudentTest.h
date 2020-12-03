#ifndef STUDENTTEST_H
#define STUDENTTEST_H

#include <cxxtest/TestSuite.h>
#include "../Student.h"

class StudentTest : public CxxTest::TestSuite
{
public:
    void test1_EqualAgeStudent(void) {
        Student stud;
        stud.age = 20;
        TS_ASSERT_EQUALS(stud.age, 20);
    }
    void test2_EqualNumberStudent(void) {
        Student stud;
        stud.number = 1;
        TS_ASSERT_EQUALS(stud.number, 1);
    }
    void test3_IEqualFamilyStudent(void) {
        Student stud;
        stud.family = "radyukevich";
        TS_ASSERT_EQUALS(stud.family, "radyukevich");
    }
    void test4_EqualLastNameStudent(void) {
        Student stud;
        stud.lastname = "ivanovich";
        TS_ASSERT_EQUALS(stud.lastname, "ivanovich");
    }
    void test5_EqualNameStudent(void) {
        Student stud;
        stud.name = "andrew";
        TS_ASSERT_EQUALS(stud.name, "andrew");
    }
    void test6_DiffAgeStudent(void) {
        Student stud;
        stud.age = 20;
        TS_ASSERT_DIFFERS(stud.age, 25);
    }
    void test7_DiffNumberStudent(void) {
        Student stud;
        stud.number = 1;
        TS_ASSERT_DIFFERS(stud.number, 11111);
    }
    void test8_DiffFamilyStudent(void) {
        Student stud;
        stud.family = "radyukevich";
        TS_ASSERT_DIFFERS(stud.family, "ivanov");
    }
    void test9_DiffLastNameStudent(void) {
        Student stud;
        stud.lastname = "ivanovich";
        TS_ASSERT_DIFFERS(stud.lastname, "petrovich");
    }
    void test10_DiffNameStudent(void) {
        Student stud;
        stud.name = "andrew";
        TS_ASSERT_DIFFERS(stud.name, "oleg");
    }
};

#endif // STUDENTTEST_H
