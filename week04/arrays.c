#include <stdio.h>

#define SIZE 5

int main(void) {
    // Alternatively:
    // int nums[SIZE] = {};
    // int nums[] = {0, 0, 0, 0, 0}
    // int nums[5] = {0, 0, 0, 0, 0}
    int nums[SIZE] = {0};

    // Set nums[0] to 0, nums[1] to 1 etc.
    int i = 0;
    while (i < SIZE) {
        nums[i] = i;
        ++i;
    }

    // Print out all the numbers!
    i = 0
    while (i < SIZE) {
        printf("%d\n", nums[i]);
        ++i;
    }

    return 0;
}