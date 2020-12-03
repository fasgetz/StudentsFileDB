all: FileLogicTest.o LogicAppTest.o

LogicApp.o:
	g++ -c LogicApp.cpp
	
liblogicapp.a: LogicApp.o
	ar cr liblogicapp.a LogicApp.o	
	
LogicAppTest.o: liblogicapp.a
	cxxtestgen --error-printer -o LogicAppTest.cpp LogicAppTest.h 
	g++ -o LogicAppTest LogicAppTest.cpp -L. -llogicapp
	./LogicAppTest
	
	
	
_Logic.o:
	g++ -c _Logic.cpp
		
libsplit.so: _Logic.o
	g++ -fPIC -shared -olibsplitter.so _Logic.o
		
FileLogicTest.o: libsplit.so
	cxxtestgen --error-printer -o test.cpp test.h 
	g++ -o test test.cpp -L. -lsplitter -Wl,-rpath,.
	./test
	
clean:
	rm --force *.o *.a *.so *.a program	
