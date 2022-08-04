#include "sort.h"
#include <stdio.h>
#include <time.h>

void test_bubble(int *arr, unsigned int len)
{
        int time1 = time(NULL);
        
        sort_bubble(arr, len);
        
        int time2 = time(NULL);
        printf("BUBBLE EXEC TIME: %d seconds.\n", time2-time1);

}

int main(void)
{
        
        int arr1[15] = {9,43,18,200,38,42,1337,28,98,17,438,2989,28,9,18};

        test_bubble(arr1, 15);
        
        return 0;
}

