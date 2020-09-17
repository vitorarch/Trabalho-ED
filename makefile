work: batlle.o queue.o stack.o main.o
	g++ battle.o queue.o stack.o main.o -o work

main.o : main.cpp
	g++ -c main.cpp

batlle.o : battle.cpp
	g++ -c battle.cpp

queue.o : queue.cpp
	g++ -c queue.cpp

stack.o : stack.cpp
	g++ -c stack.cpp

clean:
	rm *.o work