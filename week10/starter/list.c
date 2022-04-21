#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

struct node {
    char data[MAX_STR_LENGTH];
    struct node *next;
};

struct list {
    struct node *head;
};

// Helper function prototypes
struct node *create_node(char *value);

// LIST.H FUNCTIONS //

struct list *create_list() {
    struct list *new = malloc(sizeof(struct list));
    new->head = NULL;

    return new;
};

void push_head(struct list *list, char *value) {
    struct node *new = create_node(value);

    new->next = list->head;
    list->head = new;
}

void push_tail(struct list *list, char *value) {
    struct node *new = create_node(value);

    if (list->head == NULL) {
        list->head = new;
        return;
    }

    struct node *curr = list->head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = new;
}

void pop_front(struct list *list) {
    if (list->head == NULL) {
        return;
    }

    struct node *old_head = list->head;
    list->head = list->head->next;
    free(old_head);
}

void pop_back(struct list *list) {
    if (list->head == NULL) {
        return;
    }

    struct node *curr = list->head;
    struct node *prev = NULL;
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL) {
        list->head = NULL;
    } else {
        prev->next = NULL;
    }

    free(curr);
}

int length(struct list *list) {
    struct node *curr = list->head;
    int count = 0;
    while (curr != NULL) {
        count += 1;
        curr = curr->next;
    }
    return count;
}

char *peek_top(struct list *list) {
    if (list->head == NULL) {
        return NULL;
    }

    return list->head->data;
}

char *peek_index(struct list *list, int index) {
    int i = 0;
    struct node *curr = list->head;
    while (curr != NULL && i != index) {
        i++;
        curr = curr->next;
    }

    if (curr == NULL) {
        return NULL;
    }

    return curr->data;
}

void print_list(struct list *list) {
    struct node *curr = list->head;
    while (curr != NULL) {
        printf("%s", curr->data);
        curr = curr->next;
    }
    return;
}

// HELPER FUNCTIONS //

struct node *create_node(char *value) {
    struct node *new = malloc(sizeof(struct node));
    strcpy(new->data, value);
    new->next = NULL;

    return new;
};