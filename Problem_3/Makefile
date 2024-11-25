oddeven: oddeven.o
	g++ oddeven.o -o oddeven.exe

oddeven.o: oddeven.cpp
	g++ -c oddeven.cpp -o oddeven.o

run: oddeven
	./oddeven.exe

oddevenTest: oddevenTest.o
	g++ oddevenTest.o -o oddevenTest.exe

oddevenTest.o: oddevenTest.cpp
	g++ -c oddevenTest.cpp -o oddevenTest.o

test: oddevenTest
	./oddevenTest.exe

clean: 
	rm -f oddeven.o oddeventest.o oddeven.exe oddeventest.exe