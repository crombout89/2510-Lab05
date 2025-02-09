/* Task 4: To define a program which holds an integer array, called data, with initial values as {11, 12, 13},
with a pointer points to data[0]; use the pointer to updates data[1] to 60, and print data[1] using the pointer.
[Hint: it’s your choice whether move the pointer or not, either way works] */

#include <stdio.h>

int main() {
    int data[3] = {11, 12, 13};
    int *pointer = &data[0];

    *(pointer + 1) = 60;
    printf("The value of data[1] is %d.", *(pointer + 1));

    return 0;
}