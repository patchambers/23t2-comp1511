// Adding 1 to each even value in an array then printing all array values
// Pat Chambers (z5264081) 20/6/23

#include <stdio.h>

#define SIZE 5

int main(void) {

    // Create an integer array with at least 5 elements.
    int array[SIZE] = {5, 6, 7, 8, 9};

    // Create a while loop which loops through every element of the array.
    int i = 0;
    while (i < SIZE) {
        // Write an if statement which adds 1 to each even value. Do this within 
        // the while loop.
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i++;
    }

    // Write another while loop which goes through the array with a different 
    // iterator (i.e. if you used i last time, use j)
    int j = 0;
    while (j < SIZE) {
        // Print out the values in the array.
        printf("%d\n", array[j]);
        j++;
    }

    return 0;
}
