problem3: problem3.o
	g++ problem3.o -o problem3.exe

problem3.o: problem3.cpp
	g++ -c problem3.cpp -o problem3.o

run: problem3
	./problem3.exe

problem3Test: problem3Test.o
	g++ problem3Test.o -o problem3Test.exe

problem3Test.o: problem3Test.cpp
	g++ -c problem3Test.cpp -o problem3Test.o

test: problem3Test
	./problem3Test.exe

clean: 
	rm -f problem3.o problem3test.o problem3.exe problem3test.exe