// students.c
// By H13A 
// Exploration of struct pointers

#include <stdio.h>

#define MAX_NAME_LENGTH 50

struct student {
    int zID;
    double wam;
    char name[MAX_NAME_LENGTH];
};

int main(void) {

    struct student clarissa;
    clarissa.zID = 1234567;
    clarissa.wam = 65.96;
    // clarissa.name = "Clarissa";
    strcpy(clarissa.name, "Clarissa");
    
    // int nums[5];
    // nums = {1, 2, 3, 4, 5}; // DOESN'T WORK
    // nums[0] = 1;
    // nums[1] = 2;
    // ...
    
    // How do I create a pointer to this struct?
    struct student *jack = &clarissa;
    // type *pointer_name = &variable_of_same_type;
    
    // How could I change the values to:
    // - zID: 7654321
    // - wam: 100.0
    // - name: "Jack"
    // using only a pointer?
    jack->zID = 7654321;
    // (*jack).zid = 7654321;
    jack->wam = 100.0;
    strcpy(jack->name, "Jack");

    return 0;
}
