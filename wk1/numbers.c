#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("%f", 5 + 4.5); // int plus float will end up as float
    printf("%d", 5 / 4); // will print 1 because two ints, need to have at least 1 float if want precise answer

    // basic math functions
    printf("%f", pow(2, 3)); //2^3
    printf("%f", ceil(36.356)); // rounds number up
                                // floor() rounds number down


    return 0
}
