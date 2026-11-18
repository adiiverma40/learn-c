/*Objective:
Write a function that takes a square 2D array (a matrix with the same number of rows and columns) 
of integers and returns the sum of the matrix diagonals.

Rules:

You must add all the elements along the primary diagonal (top-left to bottom-right).
You must add all the elements along the secondary diagonal (top-right to bottom-left).
If the matrix has an odd size (e.g., 3x3 or 5x5), the diagonals will intersect at the center. 
You must not count the center element twice.

Input: 
[
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]

Output: 25

*/

#include <stdio.h>

int main()
{
	int mat[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
	};
	int i,j,sum =0;
	for (i=0 ; i < 3; i ++){
		for(j = 0; j <3; j++){
			//printf(" %d ",mat[i][j]);
			if(i == j){
				printf("Diagonal : %d", mat[i][j]);
				sum += mat[i][j];
			}
			else if (i + j == 2) {
				sum += mat[i][j];
			}
	
			
		}
		printf("\n");
	}
	
	
	printf("\nSum : %d", sum);
	
	return 0;
	
}



