main : main.o somme.o
	g++ -o main main.o somme.o 
main.o : main.cpp somme.h
	g++ -c main.cpp
somme.o : somme.cpp somme.h
	g++ -c somme.cpp
clean : 
	rm *.o