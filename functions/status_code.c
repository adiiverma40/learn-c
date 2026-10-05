#include <stdio.h>


int add(int a, int b){
    printf("\n%d\n", a + b);
    return a + b;
}

int main(){
    int a;
    printf("Additoon of two no function\n");


    a = add(5, 7);
    printf("\n%d\n", a);


    return 43;
}


