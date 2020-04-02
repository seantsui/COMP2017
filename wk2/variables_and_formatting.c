#include <stdio.h>

int main() {

    char character_name[] = "John"; // storing a collection of characters
    int character_age = 35; // storing a number (integer)

    printf("The man's name is %s\n", character_name); // %s for string
    printf("He is %d years old.\n", character_age); // %d or %i for integer
                                                    // %f for floating pt
                                                    // %c for char

    puts(character_name); // prints a single string with end character \0 in it

    return 0;
}
