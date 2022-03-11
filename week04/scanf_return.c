// scanf_return.c
// H13A
// Exploration of scanf's return value

#include <stdio.h>

int main(void) {

    printf("Enter an integer: ");
    int data;
    int result = scanf("%d", &data);

    // printf("Enter a double: ");
    // double data;
    // int result = scanf("%lf", &data);

    // printf("Enter a character: ");
    // char data;
    // int result = scanf("%c", &data);

    // printf("Enter 2 integers: ");
    // int first; 
    // int second;
    // int result = scanf("%d %d", &first, &second);

    printf("scanf() returned %d\n", result);

    return 0;
}