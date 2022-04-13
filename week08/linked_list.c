#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next;
};

void print_names(struct student *first_student);
void print_last_mark(struct student *first_student);
struct student *create_student(int zID, double mark, char *name);


int main(void) {
    struct student *jack = create_student(5000000, 66.6, "Jack");
    struct student *clarissa = create_student(5111111, 77.7, "Clarissa");

    jack->next = clarissa;

    struct student *roy = create_student(5222222, 88.8, "Roy");

    clarissa->next = roy;

    struct student *autumn = create_student(5333333, 99.9, "Autumn");

    roy->next = autumn;


    struct student students[10000];


    // printf("%lf\n", jack->next->next->next->mark);

    print_names(NULL);
    // print_last_mark(NULL);

    return 0;
}

void print_names(struct student *first_student) {
    struct student *curr_student = first_student;

    while (curr_student != NULL) {
        printf("%s\n", curr_student->name);
        curr_student = curr_student->next;
    }
}

void print_last_mark(struct student *first_student) {
    struct student *curr_student = first_student;

    if (curr_student == NULL) {
        return;
    }

    // curr_student->next
    // (*curr_student).next

    while (curr_student->next != NULL) {
        curr_student = curr_student->next;
    }

    // TODO: Print out the mark of curr_student
    printf("%lf\n", curr_student->mark);
}

struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    new_student->next = NULL;

    return new_student;
}