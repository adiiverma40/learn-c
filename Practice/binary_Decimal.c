#include<stdio.h>
#include<math.h>
void main()
{

  int b, sum =0 , d, c ;
  printf("Enter a Binary NO.");
  scanf("%d", &b);
  c = 0 ;

// Cause the variable is a int type that is a 32 bit.
//This is the maxium no it can operate on 1111111111

while(b > 0){
    d = b % 10;
    sum = sum + d * pow(2, c);
    c ++;
    b = b /10 ;

  }

  printf("Decimal : %d",  sum);
}
