/*
 *
Requirements:
Create two character arrays: artist[50] and track[50].
Hardcode or ask the user for an artist name and a track name.
Use strlen() to print how many characters are in the track name.
Use strcmp() to check if the artist name and track name are identical (print a warning if they are, like "Warning: Track and Artist are the same!").
Create a third array called displayData[100]. Use strcpy() and strcat() to format and store a single string that looks exactly like
this: "Artist - Track" (e.g., "Daft Punk - Get Lucky"), and print it.
 */


#include <stdio.h>
#include <string.h>

int main()
{
    char artist[50], track[50];
    printf("Enter the name of artist : ");
    scanf("%[^\n]",artist);
    // scanf("\n");
    printf("Enter the name of Track : ");
    scanf(" %[^\n]",track);
    // scanf("\n");
    printf("%s \n", artist);
     printf("%s\n",track);
     return 0;
    // for(int i = 0 ; i < 50 ; i ++){
    //     printf("%c", artist[i]);
    // }
    // printf("\n");
    // 
    // for(int i = 0 ; i < 50 ; i ++){
    //     printf("%c", track[i]);
    // }
    // printf("\n");

}
