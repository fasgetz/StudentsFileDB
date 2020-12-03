all: program

program: main.o Program.o Student.o LogicFile.o liblogicfile.a libsplit.so
	g++ -o program main.cpp Program.cpp Student.cpp LogicApp.cpp -L. -llogicfile -lsplitter -Wl,-rpath,.
	
main.o: main.cpp
	g++ -c main.cpp
	
Student.o: Student.cpp
	g++ -c Student.cpp
	
LogicApp.o: LogicApp.cpp
	g++ -c LogicApp.cpp
	
Program.o: Program.cpp
	g++ -c Program.cpp
	
LogicFile.o:
	g++ -c LogicFile.cpp
	
_Logic.o:
	g++ -c _Logic.cpp
	
liblogicfile.a: LogicFile.o
	ar cr liblogicfile.a LogicFile.o
	
libsplit.so: _Logic.o
	g++ -fPIC -shared -olibsplitter.so _Logic.o
	
clean:
	rm --force *.o *.a *.so *.a program
