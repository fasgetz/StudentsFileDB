/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_LogicAppTest_init = false;
#include "LogicAppTest.h"

static LogicAppTest suite_LogicAppTest;

static CxxTest::List Tests_LogicAppTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_LogicAppTest( "LogicAppTest.h", 8, "LogicAppTest", suite_LogicAppTest, Tests_LogicAppTest );

static class TestDescription_suite_LogicAppTest_test1_AddOneStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test1_AddOneStudent() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 11, "test1_AddOneStudent" ) {}
 void runTest() { suite_LogicAppTest.test1_AddOneStudent(); }
} testDescription_suite_LogicAppTest_test1_AddOneStudent;

static class TestDescription_suite_LogicAppTest_test2_AddFiveStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test2_AddFiveStudent() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 21, "test2_AddFiveStudent" ) {}
 void runTest() { suite_LogicAppTest.test2_AddFiveStudent(); }
} testDescription_suite_LogicAppTest_test2_AddFiveStudent;

static class TestDescription_suite_LogicAppTest_test3_RemoveOneStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test3_RemoveOneStudent() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 35, "test3_RemoveOneStudent" ) {}
 void runTest() { suite_LogicAppTest.test3_RemoveOneStudent(); }
} testDescription_suite_LogicAppTest_test3_RemoveOneStudent;

static class TestDescription_suite_LogicAppTest_test4_RemoveAllStudents : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test4_RemoveAllStudents() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 52, "test4_RemoveAllStudents" ) {}
 void runTest() { suite_LogicAppTest.test4_RemoveAllStudents(); }
} testDescription_suite_LogicAppTest_test4_RemoveAllStudents;

static class TestDescription_suite_LogicAppTest_test5_CanTrueRemoveStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test5_CanTrueRemoveStudent() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 73, "test5_CanTrueRemoveStudent" ) {}
 void runTest() { suite_LogicAppTest.test5_CanTrueRemoveStudent(); }
} testDescription_suite_LogicAppTest_test5_CanTrueRemoveStudent;

static class TestDescription_suite_LogicAppTest_test6_CanFalseRemoveStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test6_CanFalseRemoveStudent() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 82, "test6_CanFalseRemoveStudent" ) {}
 void runTest() { suite_LogicAppTest.test6_CanFalseRemoveStudent(); }
} testDescription_suite_LogicAppTest_test6_CanFalseRemoveStudent;

static class TestDescription_suite_LogicAppTest_test7_CurrentNumbStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test7_CurrentNumbStudent() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 89, "test7_CurrentNumbStudent" ) {}
 void runTest() { suite_LogicAppTest.test7_CurrentNumbStudent(); }
} testDescription_suite_LogicAppTest_test7_CurrentNumbStudent;

static class TestDescription_suite_LogicAppTest_test8_HasStudentWithNumb : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test8_HasStudentWithNumb() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 97, "test8_HasStudentWithNumb" ) {}
 void runTest() { suite_LogicAppTest.test8_HasStudentWithNumb(); }
} testDescription_suite_LogicAppTest_test8_HasStudentWithNumb;

static class TestDescription_suite_LogicAppTest_test9_HasStudentWithName : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test9_HasStudentWithName() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 107, "test9_HasStudentWithName" ) {}
 void runTest() { suite_LogicAppTest.test9_HasStudentWithName(); }
} testDescription_suite_LogicAppTest_test9_HasStudentWithName;

static class TestDescription_suite_LogicAppTest_test10_HasStudentWithFamily : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_LogicAppTest_test10_HasStudentWithFamily() : CxxTest::RealTestDescription( Tests_LogicAppTest, suiteDescription_LogicAppTest, 118, "test10_HasStudentWithFamily" ) {}
 void runTest() { suite_LogicAppTest.test10_HasStudentWithFamily(); }
} testDescription_suite_LogicAppTest_test10_HasStudentWithFamily;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
