#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char grade;
    printf("Enter grade: ");
    scanf("%c", &grade);

    switch(grade) {

    case 'A' :
        printf("You did great!\n");
        break;

    case 'B' :
        printf("You did good!\n");
        break;
    case 'C' :
        printf("You did ok!\n");
        break;
    case 'D' :
        printf("You did bad!\n");
        break;
    case 'F' :
        printf("You did very bad!\n");
        break;
    default :
        printf("Invalid grade\n");
    }

    return 0;
}
