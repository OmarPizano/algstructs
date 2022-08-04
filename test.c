#include "sort.h"
#include "utils.h"
#include <stdio.h>
#include <time.h>

void test_bubble(int *arr, unsigned int len)
{
        print_array(arr, len);
        int time1 = time(NULL);
        sort_bubble(arr, len);
        int time2 = time(NULL);
        print_array(arr, len);
        printf("BUBBLE EXEC TIME: %d seconds.\n", time2-time1);

}

void test_insertion(int *arr, unsigned int len)
{
        print_array(arr, len);
        int time1 = time(NULL);
        sort_insertion(arr, len);
        int time2 = time(NULL);
        print_array(arr, len);
        printf("INSERTION EXEC TIME: %d seconds.\n", time2-time1);

}

int main(void)
{
        int *arr1;
        
        arr1 = gen_randarray(15, 999, 1337);
        test_bubble(arr1, 15);
        
        arr1 = gen_randarray(15, 999, 1337);
        test_insertion(arr1, 15);
       
        // TODO: free array
        return 0;
}

