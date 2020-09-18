CC = g++ # compilador, troque para gcc se preferir utilizar C
CFLAG = -c # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC = ./tp1 # nome do executavel que sera gerado, nao troque
TMPOUT = tp1.testresult

$(EXEC): battle.o queue.o stack.o main.cpp
	$(CC) battle.o queue.o stack.o main.cpp -o $(EXEC)

battle.o :  battle.cpp
	$(CC) $(CFLAG) battle.cpp -o battle.o

queue.o : queue.cpp
	$(CC) $(CFLAG) queue.cpp -o queue.o

stack.o : stack.cpp
	$(CC) $(CFLAG) stack.cpp -o stack.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm *.o work