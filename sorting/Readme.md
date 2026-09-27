# Sorting

## selection sort

in simple terms, we pick an element in array, after picking we check the next index if that element is smallest we change the minimun to that. we repeat this till we reach the end of the array.
After reaching the end we swap the values of the minium to the last sorted partition.

### Sorted and unsorted partition
We decide a partition in the array, it is an imaginary partition. It work like this. For the 1st loop run the sorted partition is 0, but it increases as we move on.
for the 2nd loop run the sorted partion will be index 0, and we will run the minium checking loop from index 1. 

The minium will be sat to element at index 0 and then we repeat.



## Bubble sort

In simple terms, We take 1st two element, if the 2nd element is greater then 1st, swap else, move to next two element, until it reaches the end of array.
It will make it so the end of array always contains the largest no in the arry, so in the every loop it would be end -1.


## Selection vs Bubble sort

Selection sort usually better in terms of Memory efficiency. In bubble sort, It has to constantly swap two values. Taking more memory.

In devices where the memeory is slow like flash memory or EEPROM, selection sort s massively faster and efficient


### Execption

If there is an array that is already sorted, or just has one or two items out of place. Bubble sort is better. 
In already sorted array selection sort works like  dumb, it will scan whole array again and again.
