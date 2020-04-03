// We can define constants using the #define directive
#include <stdio.h>
#include <stdlib.h>

// Use uppercase for constants
#define PI 3.14

int main() {

    // prints the constant value PI defined above to two numbers after decimal pt.
    printf("The value of PI is %0.2f.\n", PI);

    // Can place const before or after data type
    const int FAV_NUM = 7;
    printf("%d\n", FAV_NUM);

    return 0;
}
