// Using scanf in loops by making use of its return value
// Pat Chambers (z5264081) 20/6/23
#include <stdio.h>

int main(void) {
    
    int num;
    // Loop while the scanf scans in successfully i.e. the user doesn't press 
    // `ctrl-d` or enter an invalid input
    while (scanf("%d", &num) == 1) {
        printf("Scanned: %d\n", num);
    }

    /*
    // This is equivalent to the above code, just less concise
    int num;
    // scanf returns the number of values scanned in successfully
    int result = scanf("%d", &num);
    // If the scan was successful, we can continue to loop
    while (result == 1) {
        printf("Scanned: %d\n", num);
        result = scanf("%d", &num);
    }
    */

    return 0;
}
