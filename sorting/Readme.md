# Sorting

## selection sort

in simple terms, we pick an element in array, after picking we check the next index if that element is smallest we change the minimun to that. we repeat this till we reach the end of the array.
After reaching the end we swap the values of the minium to the last sorted partition.

### Sorted and unsorted partition
We decide a partition in the array, it is an imaginary partition. It work like this. For the 1st loop run the sorted partition is 0, but it increases as we move on.
for the 2nd loop run the sorted partion will be index 0, and we will run the minium checking loop from index 1. 

The minium will be sat to element at index 0 and then we repeat.