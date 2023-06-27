// Demonstrates how passing an array into a function is different to passing 
// a single variable into a function
// Pat Chambers (z5264081), 13/10/22

#include <stdio.h>

#define MAX_SIZE 100


int square(int x);
void print_array(int length, int array[length]);
void square_array(int length, int array[length]);

int main(void) {

    int inputs[MAX_SIZE];

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);
    for (int i = 0; i < size; i++) {
        int input;
        scanf("%d", &input);
        inputs[i] = input;
    }

    printf("Values before square_array: ");
    print_array(size, inputs);

    square_array(size, inputs);

    printf("Values after square_array:  ");
    print_array(size, inputs);

    return 0;
}


// Returns the square of a given integer.
int square(int x) {
    return x * x;
}


// Squares all elements of an array
void square_array(int length, int array[length]) {
    // TODO: Complete this function
    int i = 0;
    while (i < length) {
        array[i] = square(array[i]);
        i++;
    }
}


//prints out an array all pretty like
void print_array(int length, int array[length]) {
    printf("[");
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i != length - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
