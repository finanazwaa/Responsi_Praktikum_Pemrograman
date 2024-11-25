problem7: problem7.o
	g++ problem7.o -o problem7.exe

problem7.o: problem7.cpp
	g++ -c problem7.cpp -o problem7.o

run: problem7
	./problem7.exe

problem7Test: problem7Test.o
	g++ problem7Test.o -o problem7Test.exe

problem7Test.o: problem7Test.cpp
	g++ -c problem7Test.cpp -o problem7Test.o

test: problem7Test
	./problem7Test.exe

clean: 
	rm -f problem7.o problem7test.o problem7.exe problem7test.exe