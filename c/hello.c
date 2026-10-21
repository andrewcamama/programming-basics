// Lines that start with // are comments. C ignores them.

// This line lets us use printf and scanf (input and output tools).
#include <stdio.h>

// main is where the program starts running.
int main() {

    // Make space to store up to 49 letters of text (50 including the end marker).
    char name[50];

    // printf() shows text on the screen.
    printf("What's your name? ");

    // scanf() reads what the user types and saves it in "name".
    // %49s means "read a word, but no more than 49 characters".
    scanf("%49s", name);

    // %s is a placeholder that gets replaced by the value of name.
    // \n moves to a new line.
    printf("Hello, %s! Welcome to programming.\n", name);

    // Return 0 means "the program finished without problems".
    return 0;
}
