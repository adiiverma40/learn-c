#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    char octal[32];
    int i;
    int len;
    int octal_arr[32];
    int d = 0;
    printf("Enter An octal: ");
    scanf("%s", octal);
    len = strlen(octal);
    for (i = 0 ; i < len ; i ++ )
    {
        octal_arr[i] = octal[i] - '0';
    }
    for (i = 0; i < len ; i ++){
        d = d + octal_arr[len -1 - i] * pow(8, i);
    }
    printf("Decimal : %d", d);
    return 0;
}
