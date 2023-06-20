// Printing an array using a while loop
// Pat Chambers (z5264081) 20/6/23

#include <stdio.h>

#define SIZE 5

int main(void) {
    
    int array[SIZE] = {5, 6, 7, 8, 9};

    // Print out array values
    int i = 0;
    while (i < SIZE) {
        printf("%d\n", array[i]);
        i++;
    }


    return 0;
}
