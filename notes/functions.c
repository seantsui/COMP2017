#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayHi(char name[]) {
  printf("Hello %s\n", name);
}

double cube(double num) {

    double result = pow(num, 3);
    return result;
}

int max(int num1, int num2) {

    int result;
    if (num1 > num2) {
        result = num1;
    } else { result = num2; }

    return result;
}

int main(void) {

    sayHi("Mike");
    printf("Answer: %f\n", cube(3.0));

    printf("%d\n", max(40, 10));

    return 0;
}
