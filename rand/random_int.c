#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_num, i = 0 ;
    srand(time(NULL));
    while(1){
    random_num = (rand() % (100 - 0 + 1)) + 0;
    printf("%d ",random_num);
    if (i == 100) break;
    i ++;
    }

}
