// free_errors.c
// Showcases use after free errors and memory leaks.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void print_list(struct node *head);
struct node *insert_first(int data, struct node *head);
void free_list(struct node *head);

int main(void) {

    int i = 0;
    struct node *head = NULL;
    while (i < 10) {
        // `insert_first` is a function which malloc's a new node, 
        // inserts it at the head of the list, and
        // returns it.
        head = insert_first(i, head);
        i++;
    }

    print_list(head);
    free_list(head);
    // print_list(head);

    return 0;
}

// This function prints a linked list in the format:
// data -> data -> ... -> data -> X
// Takes in a linked list
// Returns nothing
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);

        curr = curr->next;
    }
    printf("X\n");

    return;
}

// This function inserts a new node at the head of the linked list.
// Takes in the data of the new node and the head of the linked list.
// Returns the new head of the linked list.
struct node *insert_first(int data, struct node *head) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = head;

    return new;
}

// Frees an entire list given the head
// Takes in the head of a linked list
// Returns nothing
void free_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        struct node *to_delete = curr;
        curr = curr->next;
        free(to_delete);
    }
    
    return;
}

