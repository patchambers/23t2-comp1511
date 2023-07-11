// Program to demonstrate some fundamental pointer syntax
// Patrick Chambers (z5264081), 28/6/22

#include <stdio.h>

int main(void) {

    int num = 42;
    // Declare an int pointer using the asterisk 
    int *num_pointer = &num;
    
    // Print a pointer using "%p". We dereference the pointer to go to the 
    // memory address it stores and print the integer stored there 
    printf(
        "The integer num has value %d and is stored at memory address %p\n", 
        num, &num
    );
    printf(
        "num_pointer points at an integer at memory address %p. "
        "The variable at this address has the value %d\n\n", 
        num_pointer, *num_pointer
    );

    // Changing the value of num by using num_pointer
    *num_pointer = 12;
    printf(
        "After changing its value by dereferencing num_pointer, the new value "
        "of num is %d\n\n", num
    );

    // Because this pointer points to the same memory address as num_pointer, 
    // we can dereference it to access the num variable
    int *new_pointer = num_pointer;
    printf("new_pointer has been set to the same value as num_pointer\n");
    printf(
        "new_pointer has value %p and the variable at this memory address has "
        "the value %d\n\n", new_pointer, *new_pointer
    );

    
    return 0;
}
