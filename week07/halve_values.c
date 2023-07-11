// Use pointers in function arguments so we can change the original 
// variables in the main function
// Pat Chambers (z5264081), 11/7/23


#include <stdio.h>

void halve_values(int *num_1, int *num_2, int *num_3);

int main(void) {
    int num_1 = 4;
    int num_2 = 10;
    int num_3 = 16;

    printf("Values before halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    halve_values(&num_1, &num_2, &num_3);

    printf("Values after halved:\n");
    printf("Num 1: %d\n", num_1);
    printf("Num 2: %d\n", num_2);
    printf("Num 3: %d\n", num_3);

    return 0;
}

// Take pointers to 3 integers and halve each of them
void halve_values(int *num_1, int *num_2, int *num_3) {
    // Use the * to access the variable at the address that `num_1` stores
    *num_1 = *num_1 / 2;
    *num_2 = *num_2 / 2;
    *num_3 = *num_3 / 2;
}
