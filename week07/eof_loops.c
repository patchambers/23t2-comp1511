// Get inputs from user until they press ctrl-d using scanf and fgets
// Pat Chambers (z5264081), 11/7/23

#include <stdio.h>

#define MAX_CHARS 100

int main(void) {


    // When it doesn't return 1, it means ctrl-d was pressed (or invalid scan) - 
    // we can stop looping when this happens
    char input;
    while (scanf(" %c", &input) == 1) {
        printf("Scanned: %c\n", input);
    }
    

    // fgets scans an entire line of text into a string 
    // When it returns NULL it means that ctrl-d was pressed (or an error) - we 
    // can stop looping when this happens
    char string[MAX_CHARS];
    while (fgets(string, MAX_CHARS, stdin) != NULL) {
        printf("Scanned: %s\n", string);
    }


    return 0;
}
