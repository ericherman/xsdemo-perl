LIB_SRC=sample-lib.c
LIB_OBJ=$(LIB_SRC:.c=.o)
SO_OBJS=sample-lib.o
SO_NAME=libsample-lib.so

CFLAGS=-Wall
CC=gcc

default: $(SO_NAME)

.c.o:
	$(CC) -c -fPIC $(CFLAGS) $< -o $@

$(SO_NAME): $(LIB_OBJ)
	$(CC) -shared -Wl,-soname,$(SO_NAME) -o $(SO_NAME).1.0 $(SO_OBJS)
	ln -sf ./$(SO_NAME).1.0 ./$(SO_NAME).1
	ln -sf ./$(SO_NAME).1.0 ./$(SO_NAME)

clean:
	rm -f *.o *.a *.so  $(SO_NAME).*
