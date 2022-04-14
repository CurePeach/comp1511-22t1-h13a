// free.c
// Exploration of free

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *number = malloc(sizeof(int *));
    struct airport *airport = malloc(sizeof(struct airport)); // DO THIS ONE
    // How many you need for an entire struct airport
    // struct airport *airport = malloc(sizeof(struct airport *)); 
    // 8 bytes
    *number = 10;

    // How do we free this memory?
    free(number);
    free(airport);
    

    return 0;
}
