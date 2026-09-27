#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_num, i = 0 , arr[100], unsorted[100];
    int current_min = 1000, min_index , sorted = 0, swap;
    srand(time(NULL));
    for(i = 0; i < 100 ; i ++ )
    {
    random_num = (rand() % (100 - 0 + 1)) + 0;
    printf("%d ",random_num);
    arr[i] = random_num;
    unsorted[i] = random_num;
    }
    printf("\nSorting\n");
    for(sorted = 0 ; sorted < 99; sorted ++)
    {
        // current_min = arr[sorted];
        // min_index = sorted;

    for(i = 0; i < 99 - sorted ; i ++)
    {
        if (arr[i] > arr[i + 1]){
            swap = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = swap;

        }



    }
    // swap = arr[sorted];
    // arr[sorted] = arr[min_index];
    // arr[min_index] = swap;

    }
    printf("\n unsorted      sorted \n");
    for(i = 0; i < 100; i ++){
        printf(" | %d |      | %d | \n", unsorted[i], arr[i]);
    }

}
