// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node *new_node(int data);
struct node *get_last_node(struct node *head);

int main(void) {

    struct node *first = add_last(NULL, 10);
    add_last(first, 13);
    add_last(first, 22);
    add_last(first, 34);
    print_list(first);

    // Copy the list
    struct node *second = copy(first);
    add_last(second, 15);
    printf("Copy\n");
    print_list(first);
    print_list(second);

    // Append two lists together
    struct node *third = list_append(NULL, second);
    add_last(third, 20);
    printf("Append\n");
    print_list(first);
    print_list(second);
    print_list(third);

    // Are first and second identical?

    // Are second and third identical?

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = new_node(data);

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    struct node *end = get_last_node(head);
    end->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");

    return;
}

struct node *copy(struct node *list) {
    struct node *copied_list = NULL;
    
    struct node *curr = list;
    while (curr != NULL) {
        copied_list = add_last(copied_list, curr->data);
    
        curr = curr->next;
    }

    return copied_list;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    if (first_list == NULL) {
        return copy(second_list);
    }

    struct node *first_copy = copy(first_list);
    struct node *first_end = get_last_node(first_copy);
    
    struct node *second_copy = copy(second_list);
    first_end->next = second_copy;

    return first_copy;
}

int identical(struct node *first_list, struct node *second_list) {
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;
    
    while (first_curr != NULL && second_curr != NULL) {
        // What should go inside?? :o
    
        first_curr = first_curr->next;
        second_curr = second_curr->next;
    }
    
    return 1511;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    struct node *first_curr = first_list;
    while (first_curr != NULL) {
        struct node *second_curr = second_list;
        while (second_curr != NULL) {
            // What goes inside? :o
        
            second_curr = second_curr->next;
        }
    
        first_curr = first_curr->next;
    }
    
    return NULL;
}

/** HELPER FUNCTIONS **/
// Helper functions are functions that's purpose is to help other functions.

// Creates a new node using the given data and returns it.
// Takes in an integer which is what the new node should contain.
// Returns the new node.
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

struct node *get_last_node(struct node *head) {
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    return curr;
}
