#include <stdio.h>

void swap(int a[], int b[]) {

    int tmp = *a; // tmp == 2
    *a = *b;
    *b = tmp;
}

int main(void) {
    int a = 2;
    int b = 3;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
