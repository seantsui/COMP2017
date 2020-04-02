#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    printf("%0.3f\n", 5 + 4.5); // int plus float will end up as float
    printf("%d\n", 5 / 4); // will print 1 because two ints, need to have at least 1 float if want precise answer

    // basic math functions
    printf("%0.3f\n", pow(2, 3)); //2^3
    printf("%0.3f\n", ceil(36.356)); // rounds number up
                                // floor() rounds number down

    /*
     Any comments an go in between here
    */
    return 0;
}
