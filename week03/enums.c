// Program to demonstrate use of enums
// Patrick Chambers (z5264081), 23/9/22

#include <stdio.h>

// Defining the values that an 'enum opal_card_type' can take
enum opal_card_type {
    ADULT, 
    STUDENT, 
    CONCESSION
};

// We can include an enum in a struct just like any other kind of variable
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type card_type;
};


int main(void) {

    // The variable type here is 'enum opal_card_type' and the variable name 
    // is 'sashas_card'
    enum opal_card_type sashas_card = ADULT;

    // Declaring and initialising a struct person with enum opal_card_type
    struct person shrey;
    shrey.shoe_size = 44;
    shrey.height = 1.85;
    shrey.first_name_initial = 'S';
    shrey.card_type = STUDENT;

    // We can compare Shrey's card type by using the name of the enum field
    // i.e. ADULT, STUDENT or CONCESSION
    double train_fare = 0.0;
    if (shrey.card_type == ADULT) {
        train_fare = 4.40;
    } else if (shrey.card_type == STUDENT) {
        train_fare = 2.20;
    } else if (shrey.card_type == CONCESSION) {
        train_fare = 4.30;
    }

    printf("Shrey's train fare is $%.2lf\n", train_fare);

    return 0;
}
