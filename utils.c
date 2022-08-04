#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, unsigned int len)
{
        for (unsigned int i = 0; i < len; i++) {
                if (i + 1 == len) {
                        printf("%i\n", arr[i]);
                } else {
                        printf("%i ", arr[i]);
                }
        }
}

int *gen_randarray(unsigned int len, unsigned int max, unsigned int seed)
{
        int *arr = calloc(len, sizeof(int));
        srandom(seed);
        for (unsigned int i = 0; i < len; i++) arr[i] = random() % max;
        return arr;
}
