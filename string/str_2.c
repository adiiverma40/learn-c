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
    char displayData[100];
    int len_a, len_t;
    int comp;
    printf("Enter the name of artist : ");
    scanf("%[^\n]",artist);
    printf("Enter the name of Track : ");
    scanf(" %[^\n]",track);
    printf("Artist: %s\n", artist);
    printf("Track: %s\n",track);
    len_a = strlen(artist);
    len_t = strlen(track);
    printf("\nLenght of Artist name : %d", len_a);
    printf("\nLenght of Track name : %d\n", len_t);
    comp = strcmp(artist, track);
    if (comp == 0) printf("\nWarning! Artist name and Track name is identical\n");
    strcpy(displayData, artist);
    // displayData[len_a] = ' ';
    // displayData[len_a + 1] = '-';
    // displayData[len_a+2] = ' ';
    strcat(displayData, " ");
    strcat(displayData, "-");
    strcat(displayData, " ");
    
    
    strcat(displayData, track);
    printf("%s\n",displayData);


    return 0;
    
    
}
