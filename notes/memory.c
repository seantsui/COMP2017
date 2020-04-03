#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 30;
    double gpa = 4.1;
    char grade = 'A';

    int * pAge = &age; //pointer variable pAge storing memory address of age

    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    // By dereferencing a pointer, you grab whatever the memory address contained
    printf("%d\n", *pAge); // 30
    printf("%d\n", *&age);
    return 0;
}
