// Basic linked list functions
// Pat Chambers (z5264081), 19/7/23

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
struct node *add_last(struct node *head, int data);
struct node *insert_node(struct node *head, int data, int n);
void print_list(struct node *head);

int main(void) {

    // Creates a linked list and inserts a node into the middle of it
    struct node *list = create_node(10);
    list = add_last(list, 30);
    list = add_last(list, 40);
    list = insert_node(list, 20, 1);
    print_list(list);

    return 0;
}


// Allocates memory for and initialises a new struct node
// Args:
//      data    data to initialise the new node with
// Returns: pointer to the new node
struct node *create_node(int data) {

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

// Adds a node to the end of a linked list. If the list is empty, the new node 
// is returned as the head of the list
// Args:
//      head    pointer to the start of the linked list
//      data    data to initialise the new node with
// Returns:     head of the new linked list
struct node *add_last(struct node *head, int data) {

    struct node *new = create_node(data);
    // If list is empty
    if (head == NULL) {
        return new;
    }
    // Find last node in list, change its next pointer to point at the new node
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new;

    return head;
}

// Insert a new node into a linked list after the nth node. If n is larger than 
// the length of the linked list, adds this new node at the end of the list.
// Args:
//      head    pointer to the start of the linked list
//      data    data to initialise the new node with
//      n       position to insert the node at (0 will insert it at the start of 
//              the list, 1 will insert it after the first node, etc)
// Returns:     head of the new list (this will be different if the new node was 
//              inserted at the start of the list)
struct node *insert_node(struct node *head, int data, int n) {
    struct node *new = create_node(data);
    // If list is empty
    if (head == NULL) {
        return new;
    }
    // If new node is to be inserted at the head of the list
    if (n == 0) {
        new->next = head;
        return new;
    }
    // Find node just before the nth position and add new node just after it
    struct node *current = head;
    int i = 1;
    while (i < n && current->next != NULL) {
        current = current->next;
        i++;
    }
    new->next = current->next;
    current->next = new;

    return head;
}

// Prints a linked list in a nice format
// Args:
//      head    pointer to the start of the linked list
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}
