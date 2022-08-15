all:
	g++ -c main.cpp
	g++ -c network.cpp
	g++ main.o network.o -o main.app -lsfml-graphics -lsfml-window -lsfml-system
	./main.app