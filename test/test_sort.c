#include "../modules/sort/sort.h"
#include "../modules/utils/utils.h"
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

void test_bubble(int *arr, unsigned int len, bool print)
{
        if (print) print_array(arr, len);
        int time1 = time(NULL);
        sort_bubble(arr, len);
        int time2 = time(NULL);
        if (print) print_array(arr, len);
        printf("BUBBLE EXEC TIME: %d seconds.\n\n", time2-time1);

}

void test_insertion(int *arr, unsigned int len, bool print)
{
        if (print) print_array(arr, len);
        int time1 = time(NULL);
        sort_insertion(arr, len);
        int time2 = time(NULL);
        if (print) print_array(arr, len);
        printf("INSERTION EXEC TIME: %d seconds.\n\n", time2-time1);

}

int main(void)
{
        int *arr1;
        unsigned const int LEN = 15;

        arr1 = gen_randarray(LEN, 999, 1337);
        test_bubble(arr1, LEN, true);
        free(arr1);

        arr1 = gen_randarray(LEN, 999, 1337);
        test_insertion(arr1, LEN, true);
        free(arr1);
       
        return 0;
}

