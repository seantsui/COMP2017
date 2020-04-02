#include <stdio.h>


int my_strlen(const char* s) { //TODO

    int i = 0;
    while(*s != '\0') { //check if reach the end of string

        i++;
        s++; // points to next char in string
    }
    return i;
}


int main(void) {

    printf("%d\n", my_strlen("")); // 0
    printf("%d\n", my_strlen("123")); // 3
    printf("%d\n", my_strlen("abc\n")); // 4
    printf("%d\n", my_strlen("loren\0ipsum\n")); // 5
    printf("%d\n", my_strlen("loren ipsum\n")); // 12

  return 0;
}
