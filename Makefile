CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -g

.PHONY: all clean

all: memory_manager

memory_manager: FIFO.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f memory_manager
