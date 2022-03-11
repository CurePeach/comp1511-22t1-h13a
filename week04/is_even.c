// is_even.c
// H13A
// Check if a number given by the user is even or odd

#include <stdio.h>

int is_even(int num);

int main(void) {

    printf("Enter number: ");
    int num;
    scanf("%d", &num);

// int result = is_even(num);
// int result = 0;
    if (is_even(num) == 1) {
        printf("Even number!\n");
    } else {
        printf("Odd number!\n");
    }

    return 0;
}


// is_even 
// takes in an integer
// returns 1 if it is an even number, and 0 if it is not.
int is_even(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
// char is_even(int num) {
//     if (num % 2 == 0) {
//         return 'y';
//     }
//     return 'n';
// }
