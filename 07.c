/* Task 7: define a function to find and bring back both min and max through input points
void max_min( int x, int y, int* pmin, int* pmax); */

#include <stdio.h>

void max_min(int x, int y, int *pmin, int *pmax) {
    if (x < y) {
        *pmin = x;
        *pmax = y;
    } else {
      *pmax = x;
      *pmin = y;
    }
}

int main() {
    int x = 15, y = 30;
    int max, min;
    max_min(x, y, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}