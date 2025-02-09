/* Task 3: define a program with an int variable (n) and a pointer (p) points to n, and then print the value and the address of n, using p
[Hint 1: in your printf(), only p got shown, NOT n]
[Hint 2: you may decide what’s the value in n] */

#include <stdio.h>

int main() {
    int number = 40;
    int *pointer = &number;
    printf("The number printed by the pointer is %d", *pointer);

    return 0;
}