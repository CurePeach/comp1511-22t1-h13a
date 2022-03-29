// Exploration of pointers
// W11A

#include <stdio.h>

int *max(int *a, int *b);
void change_number(int *num);

int main(void) {

    // How do I declare a pointer?
    char *char_pointer;
    double *doub_pointer;
    // struct dog *dog_pointer;

    // How do I initialise a pointer?
    int num = 3;
    int *pointer = &num;
    
    printf("Before: %d\n", num);
    change_number(pointer);
    printf("After: %d\n", num);

    return 0;
}

int *max(int *a, int *b) {
    return a;
}

// Change the given variable "num" to be the value 10
void change_number(int *num) {
    *num = 10;
}