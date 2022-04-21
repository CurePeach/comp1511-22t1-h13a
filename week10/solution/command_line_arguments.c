// Exploration of command line arguments

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

    // Read the command line arguments and print them out on separate lines
    // Eg. ./program hello world
    // will print: "hello\nworld\n"
    printf("argc = %d\n", argc);
    int counter = 1;
    while (counter < argc) {
        printf("%s\n", counter, argv[counter]);
    
        counter++;
    }

    // Now instead of just printing them out on separate lines,
    // print them out but convert all lowercase letters into uppercase letters
    // Eg. ./program hello world
    // will print: "HELLO\nWORLD\n"
    counter = 1;
    while (counter < argc) {
        char *word = argv[counter];
        int i = 0;
        while (word[i] != '\0') {
            if(islower(word[i])) {
                printf("%c", toupper(word[i]));
            } else {
                printf("%c", word[i]);
            }
        
            i++;
        }
        printf("\n");
        counter++;
    }

    return 0;
}
