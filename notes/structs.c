#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{

    char name[50];
    char major[50];
    int age;
    double gpa;

};


int main() {

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jimbo");
    strcpy(student1.major, "CompSci");

    printf("%0.2f\n", student1.gpa);


    return 0;
}
