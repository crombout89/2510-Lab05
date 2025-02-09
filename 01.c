/* Task 1: To define a program to print your machine pointer size
 */

#include <stdio.h>

int main() {
    int *pointer = 0;
    printf("%llu", sizeof(pointer));

    return 0;
}