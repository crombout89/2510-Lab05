/* Task 6: define a function to swap 2 integers and to return the bigger value,
   with inputs as two pointers to integer
   int swap (int* x, int* y); */

#include <stdio.h>

int swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    return (*x > *y) ? *x : *y;
}

int main() {
    int m = 22, n = 11;
    printf("The larger value: %d\n", swap(&m, &n));
    printf("The value of m is now %d", m);

    return 0;
}
