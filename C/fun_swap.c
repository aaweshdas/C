#include <stdio.h>

// Function to swap two numbers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    // Printing original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call swap function
    swap(&a, &b);

    // Printing swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
