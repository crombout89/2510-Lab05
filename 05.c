/* Task 5: To define a program which reads in a string from user, and then print it with
   the third char got replaced by ‘?’

Example: (no need to put in or print the double quos)
input: 	“hello”
output:	“he?lo”

[Hint: you should use a char[], not a pointer. Consider why is it] */

#include <stdio.h>

int main() {
    char string[100];
    char *pointer = string;

    printf("Enter a string:\n");
    scanf("%99s", pointer);

    if (*(pointer + 2) != '\0') {
        *(pointer + 2) = '?';
    }

    printf("Modified string: %s\n", pointer);

    return 0;
}