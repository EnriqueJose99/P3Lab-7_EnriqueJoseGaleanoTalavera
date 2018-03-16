output.o: main.o racional.o
	g++ main.o racional.o -o output

main.o: main.cpp racional.h
	g++ -c main.cpp

racional.o: racional.cpp racional.h
	g++ -c racional.cpp
