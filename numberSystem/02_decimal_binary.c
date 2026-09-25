#include "stdio.h"
#include <math.h>

int main(){
    int a, bin = 0 ,c = 0 , d = 0  , i ;

    printf("Enter A Decimal no less then 256: ");
    scanf("%d", &a);

    while (a > 0 ) {

        d = a %2;
        bin = bin + (d * pow(10, c));
        c ++;
        a = a/2 ;
    
    }

    printf("%d",bin);

}
