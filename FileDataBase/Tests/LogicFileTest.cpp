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
bool suite_StudentTest_init = false;
#include "LogicFileTest.h"

static StudentTest suite_StudentTest;

static CxxTest::List Tests_StudentTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StudentTest( "LogicFileTest.h", 7, "StudentTest", suite_StudentTest, Tests_StudentTest );

static class TestDescription_suite_StudentTest_test1_TrueSavedList : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test1_TrueSavedList() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 10, "test1_TrueSavedList" ) {}
 void runTest() { suite_StudentTest.test1_TrueSavedList(); }
} testDescription_suite_StudentTest_test1_TrueSavedList;

static class TestDescription_suite_StudentTest_test2_Save1Student : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test2_Save1Student() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 19, "test2_Save1Student" ) {}
 void runTest() { suite_StudentTest.test2_Save1Student(); }
} testDescription_suite_StudentTest_test2_Save1Student;

static class TestDescription_suite_StudentTest_test3_Save5Students : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test3_Save5Students() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 31, "test3_Save5Students" ) {}
 void runTest() { suite_StudentTest.test3_Save5Students(); }
} testDescription_suite_StudentTest_test3_Save5Students;

static class TestDescription_suite_StudentTest_test4_Load : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test4_Load() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 47, "test4_Load" ) {}
 void runTest() { suite_StudentTest.test4_Load(); }
} testDescription_suite_StudentTest_test4_Load;

static class TestDescription_suite_StudentTest_test5_LoadOneStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test5_LoadOneStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 60, "test5_LoadOneStudent" ) {}
 void runTest() { suite_StudentTest.test5_LoadOneStudent(); }
} testDescription_suite_StudentTest_test5_LoadOneStudent;

static class TestDescription_suite_StudentTest_test6_LoadFiveStudents : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test6_LoadFiveStudents() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 75, "test6_LoadFiveStudents" ) {}
 void runTest() { suite_StudentTest.test6_LoadFiveStudents(); }
} testDescription_suite_StudentTest_test6_LoadFiveStudents;

static class TestDescription_suite_StudentTest_test7_SplitThoWords : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test7_SplitThoWords() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 93, "test7_SplitThoWords" ) {}
 void runTest() { suite_StudentTest.test7_SplitThoWords(); }
} testDescription_suite_StudentTest_test7_SplitThoWords;

static class TestDescription_suite_StudentTest_test8_Split10Words : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test8_Split10Words() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 102, "test8_Split10Words" ) {}
 void runTest() { suite_StudentTest.test8_Split10Words(); }
} testDescription_suite_StudentTest_test8_Split10Words;

static class TestDescription_suite_StudentTest_test9_BadSplitWords : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test9_BadSplitWords() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 111, "test9_BadSplitWords" ) {}
 void runTest() { suite_StudentTest.test9_BadSplitWords(); }
} testDescription_suite_StudentTest_test9_BadSplitWords;

static class TestDescription_suite_StudentTest_test10_BadDelimeterWord : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test10_BadDelimeterWord() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 120, "test10_BadDelimeterWord" ) {}
 void runTest() { suite_StudentTest.test10_BadDelimeterWord(); }
} testDescription_suite_StudentTest_test10_BadDelimeterWord;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
