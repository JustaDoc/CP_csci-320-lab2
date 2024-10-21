time: ipc.o time.o main.o
	$(CC) -o $@ $? -lrt
time.o: time.c
	$(CC) -c $?
ipc.o: ipc.c
	$(CC) -c $?
main.o: main.c
	$(CC) -c $?

clean:
	-rm -f *.o