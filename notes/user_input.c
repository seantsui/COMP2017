#include <stdlib.h>
#include <stdio.h>

int main()
{
    // int age;
    // char name[20];
    // printf("Enter your age: ");
    // scanf("%d ", &age); // tells comp what input to take and where to store it
    // printf("Enter your name: \n");
    // fgets(name, 20, stdin); //where to store data, spaces available, where to get data
    //
    // printf("You are %d years old\n", age);
    // printf("Your name is %s.", name);

    //Calculator
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f\n", num1 + num2);

    return 0;
}
