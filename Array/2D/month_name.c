#include <stdio.h>

int main()
{
	int i;
	int c;
	char month[12][10] = {
    "January", "February", "March", "April", 
    "May", "June", "July", "August", 
    "September", "October", "November", "December"
};
	printf("Enter a no. from 1 to 12 : ");
	scanf("%d", &c);
	
	printf("The Month is %s", month[c - 1]);

	return 0;
}
