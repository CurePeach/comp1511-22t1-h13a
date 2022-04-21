// Example implementation for letters.h

#include "letters.h"

// Helper function prototypes
int clamp(int number);
int is_lowercase(char letter);

// LETTERS.H FUNCTIONS //

char num_to_let(int number) {
    number = clamp(number);
    return 'a' + number;
}

int let_to_num(char letter) {
    if (!is_lowercase(letter)) {
        return -1;
    }

    return letter - 'a';
}

// HELPER FUNCTIONS //

// If a number exceeds the lower or upper limit, clamp it to the limits
// Takes in a number
// Returns one of the limits or the original number
int clamp(int number) {
    if (number < LETTER_LOWER_LIMIT) {
        return LETTER_LOWER_LIMIT;
    }

    if (number > LETTER_UPPER_LIMIT) {
        return LETTER_UPPER_LIMIT;
    }

    return number;
}

// Checks if a letter is lowercase
// Takes in a letter
// Returns 1 if the letter is lowercase and 0 if not
int is_lowercase(char letter) {
    return letter >= 'a' && letter <= 'z';
}