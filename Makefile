CC = gcc
FLG = -g -w -Wall

.PHONY: all clean test

all: test

test: test.out
	./$^
test.out: test.c sort.c
	$(CC) $(FLG) $^ -o $@

clean:
	rm -rf *.out

