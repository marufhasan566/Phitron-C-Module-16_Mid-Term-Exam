// In pass by value, the value of a function parameter is copied to another location of the memory. When accessing or modifying the variable within the function, it accesses only the copy. Thus, there is no effect on the original value.

// #include <stdio.h>
// void swap(int x, int y)
// {
//     int t;
//     t = x;
//     x = y;
//     y = t;
// }
// int main()
// {
//     int m = 10, n = 20;
//     printf("Before Swapping m = %d\t n = %d\n", m, n);
//     swap(m, n);
//     printf("After Swapping m = %d\t n = %d\n", m, n);
//     return 0;
// }

// In pass by reference, the memory address is passed to a function using a parameter of pointer variable. The pointer variable holds memory address of another variable and which is used later for accessing or dereferencing that variable.

// #include <stdio.h>
// void swap(int *x, int *y)
// {
//     int t;
//     t = *x;
//     *x = *y;
//     *y = t;
// }
// int main()
// {
//     int m = 10, n = 20;
//     printf("Before Swapping m = %d\t n = %d\n", m, n);
//     swap(&m, &n);
//     printf("After Swapping m = %d\t n = %d\n", m, n);
//     return 0;
// }


// Difference:
// Pass by value refers to a mechanism of copying the function parameter value to another variable while the pass by reference refers to a mechanism of passing the actual parameters to the function using memory address. This is the main difference between pass by value and pass by reference.