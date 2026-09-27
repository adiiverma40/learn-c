#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_num, i = 0 , arr[100];
    int n, found = 0 ;
    srand(time(NULL));
    for(i = 0; i < 100 ; i ++ )
    {
    random_num = (rand() % (100 - 0 + 1)) + 0;
    // printf("%d ",random_num);
    arr[i] = random_num;
    }
    for(i = 0; i < 100; i ++){
        printf(" | %d | \n", arr[i]);
    }

    printf("\nEnter the No. you want to search. (0 - 100) : ");
    scanf("%d", &n);

    for (i = 0 ; i < 100; i ++){
        if(arr[i] == n){
            found = 1;
            break ;
        }
    }

    if(found){
        printf("Found %d at index %d", n, i );
    }
    else {
        printf("%d not in array", n);
    }




}
