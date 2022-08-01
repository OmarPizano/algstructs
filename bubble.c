#include <stdio.h>
#include <time.h>

void sort_bubble(int *array, unsigned int size);

int main(void)
{
        int nums[15] = {9,43,18,200,38,42,1337,28,98,17,438,2989,28,9,18};

        for (unsigned int i = 0; i < 15; i++) printf("%d ", nums[i]);
        printf("\n");

        int time1 = time(NULL);
        sort_bubble(nums, 15);
        int time2 = time(NULL);

        for (unsigned int i = 0; i < 15; i++) printf("%d ", nums[i]);
        printf("\n");

        printf("BUBBLE EXEC TIME: %d seconds.", time2-time1);
        
        return 0;
}

void sort_bubble(int *array, unsigned int size)
{
        for (int i = size; i >= 0; i--) {
                for (int j = 0; j < i; j++) {
                        if (array[j] < array[j+1]) {
                                int tmp = array[j];
                                array[j] = array[j+1];
                                array[j+1] = tmp;
                        }
                }
        }

}
