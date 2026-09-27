#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 100 Million items (takes roughly 400 MB of RAM)
    int SIZE = 100000000;
    
    int *arr = (int *)malloc(SIZE * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed. Your system doesn't have enough free RAM.\n");
        return 1;
    }

    srand(time(NULL));
    
    printf("Generating %d random numbers... ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand(); // Let it generate numbers up to RAND_MAX
    }
    printf("Done.\n");

    // NOTE: No sorting required! Linear search checks everything as-is.

    int n;
    printf("\nEnter the number you want to search for: ");
    scanf("%d", &n);

    int found = 0;
    int index = -1;
    
    // Start the stopwatch right before the search begins
    clock_t start_time = clock(); 

    // Linear Search: Sweep through every index one by one
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == n) {
            found = 1;
            index = i;
            break; // Stop searching as soon as we find it
        }
    }

    // Stop the stopwatch
    clock_t end_time = clock(); 
    
    // Calculate the time taken in seconds
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    if(found){
        printf("\nFound %d at index %d\n", n, index);
    }
    else {
        printf("\n%d not found in the array\n", n);
    }

    // Print the benchmark result
    printf("Linear Search completed in: %f seconds.\n", time_taken);

    // Always free heap memory when you are done
    free(arr); 

    return 0;
}