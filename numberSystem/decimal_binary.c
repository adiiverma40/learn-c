#include "stdio.h"

int main(){
    int a, rem[16], i ;

    printf("Enter A Decimal no less then 256: ");
    scanf("%d", &a);
// 
//     if (a > 255) {
//         printf("You have entered a no greater then 255. Try again");
//         return 0;
//     }

    for (i = 0; i < 16; i ++) {
        rem[i] = a % 2;
        a = a /2 ;
    }

    for(i = 0; i < 16 ; i ++){
        printf("%d", rem[15-i]);
    }

}
