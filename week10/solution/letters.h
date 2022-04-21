// Basic operations on lowercase letters

#define LETTER_LOWER_LIMIT 0
#define LETTER_UPPER_LIMIT 25

// Converts a number to a lowercase letter.
//
// Takes in the number to convert. For example, 0 converts into a, 1 converts
// into b and so on.
//
// If the number is less than the lower limit, return the letter equivalent 
// to the lower limit.
//
// If the number is greater than the upper limit, return the letter equivalent
// to the upper limit.
// 
// Otherwise, return the converted number.
char num_to_let(int number);

// Converts a lowercase letter into a number.
//
// Takes in the letter to convert. For example, a converts into 0, b converts 
// into 1 and so on.
//
// If the character is not a lowercase letter, return -1.
//
// Otherwise, return the converted letter.
int let_to_num(char letter);
