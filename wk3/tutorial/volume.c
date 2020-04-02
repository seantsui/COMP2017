#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define PI 3.1415
#define MAX 20

int main() {

    char buffer[MAX]; // set radius to temp char
    double volume = 0;

    printf("Specify the radius of the sphere: ");
    fgets(buffer, MAX, stdin); // ask from standard input and set temp to whatever stdin is

    // convert temp char to int radius
    int radius = atoi(buffer);
    // calculate the volume
    volume = (4.0/3.0) * M_PI * pow(radius, 3);

    printf("%.3f\n", volume);

    return 0;
}
