CC = gcc
FLAGS = -g -w -Wall

.PHONY: all clean test

all: test_sort

test_sort: test_sort.out
	./$^
test_sort.out: test/test_sort.c modules/sort/sort.c modules/utils/utils.c
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm -rf *.out

