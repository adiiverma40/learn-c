#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A simple comparison function required by C's built-in qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    // Let's test 100 Million items (takes roughly 400 MB of RAM)
    int SIZE = 100000000;
    
    // 1. Use malloc to store this massive array on the Heap
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

    // 2. Use C's highly optimized built-in Quicksort algorithm
    printf("Sorting array (this may take a few seconds)... ");
    qsort(arr, SIZE, sizeof(int), compare);
    printf("Done.\n");

    // Note: We DO NOT print the array. Printing 100 million lines will crash your terminal.

    int n;
    printf("\nEnter the number you want to search for: ");
    scanf("%d", &n);

    int min = 0;
    int max = SIZE - 1;
    int found = 0;
    int index = -1;
    
    // 3. Start the stopwatch right before the search begins
    clock_t start_time = clock(); 

    while (min <= max) 
    {
        // For massive arrays, this formula prevents integer overflow 
        // compared to (min + max) / 2
        int mid = min + (max - min) / 2; 
        
        if (arr[mid] == n) {
            found = 1;
            index = mid;
            break; 
        }
        else if (n > arr[mid]) {
            min = mid + 1; 
        }
        else {
            max = mid - 1;
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
    printf("Binary Search completed in: %f seconds.\n", time_taken);

    // Always free heap memory when you are done
    free(arr); 

    return 0;
}