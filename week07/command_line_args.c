// Intro to command line arguments and making a basic loop to print each argument
// Pat Chambers (z5264081), 11/7/23


#include <stdio.h>

int main(int argc, char *argv[]) {
    // `argc` is number of command line arguments (the length of the `argv` array)
    // `argv` is an array of strings, 1 string for each command line arg

    printf("Command line args:\n");
    int i = 0;
    // We can use `argc` to loop through each string in the `argv` array
    while (i < argc) {
        printf("Arg [%d]: %s\n", i, argv[i]);
        i++;
    }

    return 0;
}
