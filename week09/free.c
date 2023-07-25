// Demonstration of free and malloc use after free 
// Patrick Chambers (z5264081), 14/4/22

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);

int main(void) {

    struct node *head = create_node(4);

    printf("Data: %d\n", head->data);

    // If we don't free the memory we malloc'd for head, the program will have
    // a memory leak
    free(head);

    // If we try to print the data in head after freeing it, we'll get a malloc
    // use after free error
    // printf("Data: %d\n", head->data);


    return 0;
}

// Returns a pointer to a struct node initialised with the data given
struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

