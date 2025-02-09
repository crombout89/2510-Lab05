/* Task 2: To define a program to read an integer from user, using a pointer
[Hint 1: besides of the integer (n), you need to define a pointer to integer (p)]
[Hint 2: in your scanf(), only p got shown, NOT n] */

#include <stdio.h>

int main() {
    int number;
    int *pointer = &number;
    printf("Enter a number:\n");
    scanf("%d", pointer);
    printf("You entered %d\n", number);

    return 0;
}