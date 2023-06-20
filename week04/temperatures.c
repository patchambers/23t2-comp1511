// Create a program that scans in temperatures for each day in a week
// Print out the maximum temperature that was scanned in
// Pat Chambers (z5264081) 20/6/23
#include <stdio.h>

#define NUM_DAYS 7

int main(void) {

    // Initialise array to store temperature inputs
    int temps[NUM_DAYS] = {0};

    // Loop through and scan into array
    int i = 0;
    while (i < NUM_DAYS) {
        scanf("%d", &temps[i]);
        i++;
    }

    // Loop through to find max value
    int j = 0;
    int max = temps[0];
    while (j < NUM_DAYS) {
        // If our max value is lower than the current array value, we set this 
        // array value to be the new maximum
        if (max < temps[j]) {
            max = temps[j];
        }
        j++;
    }

    printf("Max temperature: %d\n", max);

    return 0;
}
