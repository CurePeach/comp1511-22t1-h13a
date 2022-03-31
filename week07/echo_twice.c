// echo_twice.c
// By H13A
// Reads lines from input and prints them out twice.
// Can only use fgets() and printf()

#include <stdio.h>

#define MAX_LEN 4096

int main(void) {

    // Create a string containing Hello
    // char word[] = "Hello";
    // char word[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
    
    char line[MAX_LEN];
    while (fgets(line, MAX_LEN, stdin) != NULL) {
        printf("%s%s", line, line);
        // printf("%s", line);
    }

    return 0;
}
