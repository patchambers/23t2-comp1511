// Tutorial 2 Part 4 - Using if and else
// Pat Chambers (z5264081), 6/6/23

#include <stdio.h>

int main(void) {

    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a < b) {
        printf("Error: a is less than b!\n");
    } else {
        if (b == 0) {
            printf("Error: b equals 0!\n");
        } else {
            printf("a / b = %d\n", a / b);
            printf("a / b = %lf (as a double) \n", (a * 1.0) / b);
        }
    }

    return 0;
}