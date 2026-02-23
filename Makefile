.PHONY: default clear 
default: main

main.o: main.cpp
	g++ -c main.cpp

rgba.o: rgba.cpp
	g++ -c rgba.cpp

main: main.o rgba.o
	g++ main.o rgba.o -o main

clean:
	rm *.o main
