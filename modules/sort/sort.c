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

void sort_insertion(int *arr, unsigned int len)
{
        for (unsigned int i = 1; i < len; i++) {
                int curr = arr[i];
                int j = i - 1;
                while (j >= 0 && curr < arr[j]) {
                        arr[j+1] = arr[j]; // displace
                        j--;
                }
                arr[j+1] = curr; // insert

        }
}
