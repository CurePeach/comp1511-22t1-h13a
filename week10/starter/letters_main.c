// Example main that uses letters.h

#include <stdio.h>

#include "letters.h"

#define NUM_TO_LET 0
#define LET_TO_NUM 1

int main(void) {
    
    int command;
    printf("Enter command: ");
    while (scanf("%d", &command) == 1) {
        if (command == NUM_TO_LET) {
            int number;
            scanf("%d", &number);
            printf("%d is %c\n", number, num_to_let(number));
        } else if (command == LET_TO_NUM) {
            char letter;
            scanf(" %c", &letter);
            printf("%c is %d\n", letter, let_to_num(letter));
        } else {
            printf("Try a proper command!\n");
        }

        printf("Enter command: ");
    }

    return 0;
}