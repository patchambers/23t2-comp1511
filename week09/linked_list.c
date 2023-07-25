// Various linked list functions. `copy` and `identical` have been fully 
// implemented
// Pat Chambers (z5264081), 25/7/23

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // data item at this node
    struct node *next; // pointer to the next node
};

struct node *add_last(struct node *head, int data);
void print_list(struct node *head);
void test_list_copy();
struct node *copy(struct node *head);
struct node *list_append(struct node *first_list, struct node *second_list);
void free_list(struct node *head);
int identical(struct node *first_list, struct node *second_list);

int main(void) {

    test_list_copy();

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
// vvvvvvvvvvvvvvvvvvvvvvv   EDIT THESE FUNCTIONS   vvvvvvvvvvvvvvvvvvvvvvvvvv//
///////////////////////////////////////////////////////////////////////////////

// Create a copy of the linked list pointed to by `list`
// Returns a pointer to the head of the copy
struct node *copy(struct node *list) {
    struct node *new_head = NULL;
    struct node *current = list;
    while (current != NULL) {
        new_head = add_last(new_head, current->data);
        current = current->next;
    }
    return new_head;
}

// Create a new list that contains the values of the second list appended to
// the first
// Returns a pointer to the head of this appended list
struct node *list_append(struct node *first_list, struct node *second_list) {
    return NULL;
}

// Free all of the memory allocated for the list pointed to by `head`
void free_list(struct node *head) {}

// Returns 1 if the first list and second list are identical,
// otherwise returns 0
int identical(struct node *first_list, struct node *second_list) {
    struct node *current_1 = first_list;
    struct node *current_2 = second_list;
    while (current_1 != NULL && current_2 != NULL) {
        // If a pair of nodes in list 1 and list 2 have different data
        if (current_1->data != current_2->data ) {
            return 0;
        }
        current_1 = current_1->next;
        current_2 = current_2->next;
    }
    // If one list has ended and the other has not
    if (current_1 != current_2) {
        return 0;
    }

    return 1;
}

///////////////////////////////////////////////////////////////////////////////
//^^^^^^^^^^^^^^^^^^^^^^^   EDIT ABOVE FUNCTIONS   ^^^^^^^^^^^^^^^^^^^^^^^^^^//
///////////////////////////////////////////////////////////////////////////////

// Adds a node with given `data` to the end of a list pointed to by `head`
// Returns the new head of the list
struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    
    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }
    
    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;
    
    // We are inserting at the end --> head will not change
    return head;
}

// Print the linked list pointed to by `head` in the format:
// 1 -> 2 -> 3 -> X
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// Some code to test whether list_copy functions correctly
void test_list_copy() {
    struct node *head = NULL;
    head = add_last(head, 10);
    head = add_last(head, 11);
    head = add_last(head, 12);

    struct node *copied = copy(head);

    printf("COPYING LIST\n");
    printf("------------------------------------------------------------\n");
    printf("Original list:         ");
    print_list(head);
    printf("Copy of original list: ");
    print_list(copied);
    printf("Changing the first node of copy to 42 ...\n");
    copied->data = 42;
    printf("After changing the copy, original list should be unchanged:\n");
    printf("Original list:         ");
    print_list(head);
    printf("Copy of original list: ");
    print_list(copied);
}
