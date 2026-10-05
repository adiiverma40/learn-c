#include <stdio.h>


int add(int a, int b){
    printf("\n%d", a + b);
    return a + b;
}

int main(){
    int a;
    printf("Additoon of two no function\n");


    a = add(5, 7);
    printf("\n%d", a);


    return 0;
}


