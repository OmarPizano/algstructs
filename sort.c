#include "sort.h"
#include <stdio.h>

static void swap(int *a, int *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
}

void sort_bubble(int *arr, unsigned int len)
{
        for (unsigned int i = len - 1; i > 0; i--)
                for (unsigned int j = 0; j < i; j++)
                        if (arr[j] > arr[j+1])
                                swap(&arr[j], &arr[j+1]);
}
