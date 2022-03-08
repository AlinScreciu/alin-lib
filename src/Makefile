CC=gcc
CFLAGS=-Wall -Werror
default: build
build:
	$(CC) $(CFLAGS) -shared -fPIC -o libalin.so alin.c
	sudo mv libalin.so /usr/lib
	sudo cp alin.h /usr/include
