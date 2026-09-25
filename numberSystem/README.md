# Number system

## Decimal to binary

To convert decimal to binary we divide the decimal by 2, write the reminder, and then divide the quotent again with 2, and repeat the process. 

After the dividend reaches 0, we write the binary from bottom to top. 

There are two ways to solve this.

The problem is that we need to write the no in opposite then we are getting it, from top to bottom. 

1. we can store the remineder in an array and then reverse it.
2. We can use cleaver maths to reverse the order.

```c
    while (a > 0 ) {
        d = a %2;
        bin = bin + (d * pow(10, c));
        c ++;
        a = a/2 ;
    }
```

Here the cleaver part is the power, for example 5. 

we divide, get reminder 1. 

```c
bin = bin + (d * pow(10,c ))
```
it will be 

```text
bin = 0 + (1 * 1)
```

```text
bin = 1 + (0 * 1)
```

```text
bin = 1 + (1 * 100)
```

```text
bin = 101 
```

### Limitations
The second method has the limitations of using standard c int. it wont be able to store big values. 

The 1st method has limitation of array size. so larger values can be converted 
