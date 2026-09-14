#include <stdio.h>

void main(){


  int a,b,c,d,rev = 0,og, p,q ,r ,s;
  bool isPrime = 1;

  printf("Welcome to pelindrome finder\n");

  for (a=1000;a>=0;a--) {
    b = a ;
    //printf("%d\n",a);
    og = a;
    while (b>0) {
     d = b%10;
      rev = rev *10 + d ;
      
   // printf("%d\n",rev);
      b = b/10;
    }
    if (rev == og ) {
      //printf("%d\n", og);
      //printf("checking if its prime or not\n");
      p = 0;
      for (p = 2 ; p <= og/2 ; p++ ) {
        if (og % p == 0){
          //printf("%d is not a prime and divisible by %d\n", og, p);
          isPrime = 0;
          break;
        }
        else {
         // printf("%d is a prime no.\n",og);
          isPrime = 1;
        }
      }
      if (isPrime){
        printf("%d \t", og);
      }
    }
    rev= 0;
    d = 0;
    
  }

}
