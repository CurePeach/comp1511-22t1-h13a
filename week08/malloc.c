// malloc.c
// Exploration of malloc
// H13A

#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {

    // Create a malloc'd int
    int *malloc_int = malloc(sizeof(int));
    *malloc_int = 200;

    // Create a malloc'd struct student
    struct student *jack = create_student(5000000, 66.6, "Jack");
    struct student *clarissa = create_student(5111111, 77.7, "Clarissa");
    
    return 0;
}

struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    
    return new_student;
}
