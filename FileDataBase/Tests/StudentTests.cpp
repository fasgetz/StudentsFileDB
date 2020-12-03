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
#include "StudentTest.h"

static StudentTest suite_StudentTest;

static CxxTest::List Tests_StudentTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StudentTest( "StudentTest.h", 7, "StudentTest", suite_StudentTest, Tests_StudentTest );

static class TestDescription_suite_StudentTest_test1_EqualAgeStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test1_EqualAgeStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 10, "test1_EqualAgeStudent" ) {}
 void runTest() { suite_StudentTest.test1_EqualAgeStudent(); }
} testDescription_suite_StudentTest_test1_EqualAgeStudent;

static class TestDescription_suite_StudentTest_test2_EqualNumberStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test2_EqualNumberStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 15, "test2_EqualNumberStudent" ) {}
 void runTest() { suite_StudentTest.test2_EqualNumberStudent(); }
} testDescription_suite_StudentTest_test2_EqualNumberStudent;

static class TestDescription_suite_StudentTest_test3_IEqualFamilyStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test3_IEqualFamilyStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 20, "test3_IEqualFamilyStudent" ) {}
 void runTest() { suite_StudentTest.test3_IEqualFamilyStudent(); }
} testDescription_suite_StudentTest_test3_IEqualFamilyStudent;

static class TestDescription_suite_StudentTest_test4_EqualLastNameStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test4_EqualLastNameStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 25, "test4_EqualLastNameStudent" ) {}
 void runTest() { suite_StudentTest.test4_EqualLastNameStudent(); }
} testDescription_suite_StudentTest_test4_EqualLastNameStudent;

static class TestDescription_suite_StudentTest_test5_EqualNameStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test5_EqualNameStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 30, "test5_EqualNameStudent" ) {}
 void runTest() { suite_StudentTest.test5_EqualNameStudent(); }
} testDescription_suite_StudentTest_test5_EqualNameStudent;

static class TestDescription_suite_StudentTest_test6_DiffAgeStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test6_DiffAgeStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 35, "test6_DiffAgeStudent" ) {}
 void runTest() { suite_StudentTest.test6_DiffAgeStudent(); }
} testDescription_suite_StudentTest_test6_DiffAgeStudent;

static class TestDescription_suite_StudentTest_test7_DiffNumberStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test7_DiffNumberStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 40, "test7_DiffNumberStudent" ) {}
 void runTest() { suite_StudentTest.test7_DiffNumberStudent(); }
} testDescription_suite_StudentTest_test7_DiffNumberStudent;

static class TestDescription_suite_StudentTest_test8_DiffFamilyStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test8_DiffFamilyStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 45, "test8_DiffFamilyStudent" ) {}
 void runTest() { suite_StudentTest.test8_DiffFamilyStudent(); }
} testDescription_suite_StudentTest_test8_DiffFamilyStudent;

static class TestDescription_suite_StudentTest_test9_DiffLastNameStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test9_DiffLastNameStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 50, "test9_DiffLastNameStudent" ) {}
 void runTest() { suite_StudentTest.test9_DiffLastNameStudent(); }
} testDescription_suite_StudentTest_test9_DiffLastNameStudent;

static class TestDescription_suite_StudentTest_test10_DiffNameStudent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test10_DiffNameStudent() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 55, "test10_DiffNameStudent" ) {}
 void runTest() { suite_StudentTest.test10_DiffNameStudent(); }
} testDescription_suite_StudentTest_test10_DiffNameStudent;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
