INCLUDES=-I..
SRC=main.c
OBJ=main.o
OUT=prog

CFLAGS=-Wall
LDFLAGS=-L.. -lsample-lib
CC=gcc

default: $(OUT)

$(OUT):
	$(CC) -c $(INCLUDES) $(CFLAGS) $(SRC) -o $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(OUT)

check: $(OUT)
	LD_LIBRARY_PATH=.. ./$(OUT)

clean:
	rm -f *.o $(OUT)
