# Searching

## Binary Search 

We take a sorted array, we find its middle, and then pick the middle element. if the element is bigger then wanted no. we repeat the proccess in lower array else in upper array.




# Max_binar.c
This file has ai generated code by gemini to test the real capibility of binary search.



```bash
❯ crun max_binary.c
Generating 100000000 random numbers... Done.
Sorting array (this may take a few seconds)... Done.

Enter the number you want to search for: 435

Found 435 at index 25
Binary Search completed in: 0.000002 seconds.
```

**CRUN** is a alias created in fish for gcc to compile and then run it. 



# Max_linear.c
This file has ai generated code by gemini to test the real capibility of linear search.


```bash
❯ crun max_linear.c
Generating 100000000 random numbers... Done.

Enter the number you want to search for: 100000000

100000000 not found in the array
Linear Search completed in: 0.062804 seconds.
```



# Why binary why linear

```bash

learn-c/searching main 
❯ crun max_linear.c
Generating 100000000 random numbers... Done.

Enter the number you want to search for: -1

-1 not found in the array
Linear Search completed in: 0.067239 seconds.

learn-c/searching main 
❯ crun max_binary.c 
Generating 100000000 random numbers... Done.
Sorting array (this may take a few seconds)... Done.

Enter the number you want to search for: -1

-1 not found in the array
Binary Search completed in: 0.000002 seconds.
```



Notice that in linear search it took 0.06 seconds to search, But in the binary search it took 16s just to sort the array. 
This tells us that we do not need to use binary search everywhere just cause it is better then linear search. 

Use what is needed not to flex the capibility for your coding skills.
