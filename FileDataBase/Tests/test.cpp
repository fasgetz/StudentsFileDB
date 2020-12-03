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
#include "test.h"

static StudentTest suite_StudentTest;

static CxxTest::List Tests_StudentTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_StudentTest( "test.h", 8, "StudentTest", suite_StudentTest, Tests_StudentTest );

static class TestDescription_suite_StudentTest_test7_SplitThoWords : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test7_SplitThoWords() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 11, "test7_SplitThoWords" ) {}
 void runTest() { suite_StudentTest.test7_SplitThoWords(); }
} testDescription_suite_StudentTest_test7_SplitThoWords;

static class TestDescription_suite_StudentTest_test8_Split10Words : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test8_Split10Words() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 20, "test8_Split10Words" ) {}
 void runTest() { suite_StudentTest.test8_Split10Words(); }
} testDescription_suite_StudentTest_test8_Split10Words;

static class TestDescription_suite_StudentTest_test9_BadSplitWords : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test9_BadSplitWords() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 28, "test9_BadSplitWords" ) {}
 void runTest() { suite_StudentTest.test9_BadSplitWords(); }
} testDescription_suite_StudentTest_test9_BadSplitWords;

static class TestDescription_suite_StudentTest_test10_BadDelimeterWord : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_StudentTest_test10_BadDelimeterWord() : CxxTest::RealTestDescription( Tests_StudentTest, suiteDescription_StudentTest, 36, "test10_BadDelimeterWord" ) {}
 void runTest() { suite_StudentTest.test10_BadDelimeterWord(); }
} testDescription_suite_StudentTest_test10_BadDelimeterWord;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
