// Using malloc to allocate memory for different types of variables
// Pat Chambers (z5264081), 19/7/23

#include <stdio.h>
#include <stdlib.h>

struct pet {
    int age;
    int weight;
    char name[100];
};

int main(void) {

    // int i;
    int *i = malloc(sizeof(int));

    // double d;
    double *d = malloc(sizeof(double));

    // int array1[10];
    int *array1 = malloc(sizeof(int) * 10);

    // char array2[4];
    char *array2 = malloc(sizeof(char) * 4);

    // struct pet coco;
    struct pet *coco = malloc(sizeof(struct pet *));

    // struct pet class_pets[5];
    struct pet *class_pets = malloc(sizeof(struct pet *) * 5);

    return 0;
}
