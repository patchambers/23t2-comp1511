// Converting leap year flow charts to C code
// Pat Chambers (z5264081), 22/02/23

#include <stdio.h>

int main(void) {

    int year;
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year\n", year);
            } else {
                printf("%d is a common year\n", year);
            }
        } else {
            printf("%d is a leap year\n", year);
        }
    } else {
        printf("%d is a common year\n", year);
    }

    return 0;
}
