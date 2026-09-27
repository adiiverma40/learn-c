#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_num, i = 0 , arr[100] , sorted, unsorted[100];
    int n, found = 0, index = 0 , swap , min = 0, max = 99, mid;
    
    srand(time(NULL));
    for(i = 0; i < 100 ; i ++ )
    {
        random_num = (rand() % (100 - 0 + 1)) + 0;
        arr[i] = random_num;
        unsorted[i] = random_num;
    }
    
    printf("\nSorting\n");
    for(sorted = 0 ; sorted < 99; sorted ++)
    {
        for(i = 0; i < 99 - sorted ; i ++)
        {
            if (arr[i] > arr[i + 1]){
                swap = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = swap;
            }
        }
    }
    printf("\n unsorted      sorted \n");
    for(i = 0; i < 100; i ++){
        printf(" | %3d |      | %3d | \n", unsorted[i], arr[i]);
    }

    printf("\nEnter the No. you want to search. (0 - 100) : ");
    scanf("%d", &n);

    min = 0;
    max = 99;
    found = 0;
    
    while (min <= max) 
    {
        mid = (min + max) / 2;
        
        if (arr[mid] == n) {
            found = 1;
            index = mid;
            break; 
        }
        else if (n > arr[mid]) {
            min = mid + 1; 
        }
        else {
            max = mid - 1;
        }
    }

    if(found){
        printf("Found %d at index %d\n", n, index);
    }
    else {
        printf("%d not in array\n", n);
    }

    return 0;
}