#include "stdio.h"

int main(){
    int a, rem[16], i ;
    printf("Decimal to octal \n");
    printf("Enter A Decimal no.: ");
    scanf("%d", &a);
    for (i = 0; i < 16; i ++) {
        rem[i] = a % 8;
        a = a /8 ;
    }

    for(i = 0; i < 16 ; i ++){
        printf("%d", rem[15-i]);
    }

}

// I thought that this will work but it wont, the difference in octal to decimal 
// and decimal to octal is that in the oc - dc we can take 1 digit and convert it in 
// decimal, but it wont work in this

//     
//     char input[32];
//     int i;
//     int len;
//     int dec_arr[32];
//     int d = 0;
//     printf("Enter An octal: ");
//     scanf("%s", input);
//     len = strlen(input);
//     for (i = 0 ; i < len ; i ++ )
//     {
//         dec_arr[i] = input[i] - '0';
//     }
//     for (i = 0 ; i < len;  i++){
//         printf("%d", dec_arr[i]);
//         
//     }
//     
//     return 0;
// }
