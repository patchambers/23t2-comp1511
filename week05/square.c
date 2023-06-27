// Demonstrating how variables get passed into functions
// Pat Chambers (z5264081), 13/10/22

#include <stdio.h>

int square(int x);

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value before square: %d\n", input);

    // Make sure that we assign the returned value to a variable!
    input = square(input);

    printf("value after square:  %d\n", input);

    return 0;
}

// Takes an integer x as an argument and squares it
// Returns the squared integer
int square(int x) {
    // printf("Value of x in function after squaring%d\n", x);
    return x * x;
}
