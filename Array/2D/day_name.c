#include <stdio.h>

int main()
{
	int i; 
	int c;  // choice
	char day[7][10] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday" , "Friday" , "Saturday"}; 
	// 2D array that stores string array of 10 char
	printf("Enter a no. from 1 to 7 : ");
	scanf("%d", &c);
	
	printf("The day is %s", day[c]);

	return 0;
}
