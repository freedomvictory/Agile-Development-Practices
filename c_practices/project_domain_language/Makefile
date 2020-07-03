CC=gcc
CFLAGS=-std=c11
OBJ = a_recentage_interpreter.o test_a_recentage_interpreter.o 
LIB = -lpthread -lm -lcheck -lrt 

%.o:%.c 
	$(CC) -c -o $@ $< $(CFLAGS)

Test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIB)

clean:
	rm *.o Test
