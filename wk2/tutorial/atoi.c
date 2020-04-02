#include <stdio.h>

int atoi(const char s[]) {
  int sign, n, startPoint, i

    if (s[0] == "-") { // to handle negative numbers
        sign = -1;
    }

    if (sign == -1) { // to set the starting position of array to convert
        startPoint = 1; // since if negative, numbers start from s[1]
    } else { startPoint = 0; }

    n = 0; // set the string to be converted to number to 0 first

    i = startPoint; // set counter to convert string


}

int main(void) {
    printf("%d\n", atoi(""));
    printf("%d\n", atoi("0"));
    printf("%d\n", atoi("0123"));
    printf("%d\n", atoi("1234"));
    printf("%d\n", atoi("-1234"));

    return 0;
}
