// Program to demonstrate use of structs
// Patrick Chambers (z5264081), 24/9/22

#include <stdio.h>

// This is our struct definition - remember that this just defines what a 
// 'struct person' variable will be made up of, it doesn't declare any 
// variable by itself
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {

    // Declaring a struct person variable called 'sasha'
    // Remember that 'struct person' is the variable type!
    struct person sasha;
    // Initialise the fields of the struct person using sasha.<field_name>
    sasha.shoe_size = 39;
    sasha.height = 1.59;
    sasha.first_name_initial = 'S';
    printf(
        "Sasha is %lfm tall and her shoe size is %d\n", 
        sasha.height,     
        sasha.shoe_size
    );

    // We can make another variable with the type 'struct person' so we can 
    // the same information about another person
    struct person tom;
    tom.shoe_size = 44;
    tom.height = 1.85;
    tom.first_name_initial = 'T';
    printf("Tom is %lfm taller than Sasha\n", tom.height - sasha.height);

    return 0;
}
