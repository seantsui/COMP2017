#include <stdio.h>
#include <stdlib.h>

// Can set a constant NELEMS as a fast way to get number of elements in array
#define NELEMS(x) (sizeof(x) / sizeof(x[0]))

int main() {

    // int i = 1;
    // while (i <= 5) {
    //     printf("while loop increment: %d\n", i);
    //     i++;
    // }
    //
    //
    // for (int j = 1; j <= 5; j++) {
    //     printf("for loop increment: %d\n", j);
    // }

    //2D Arrays & Nested loops
    int nums[3][2] = { {1,2}, {3,4}, {5,6} };

    int size_a = NELEMS(nums);
    printf("%d\n", size_a);
    int size_b = NELEMS(nums[0]);
    printf("%d\n", size_b);

    int i, j;
    for(i = 0; i < size_a; i++) {
        for(j = 0; j < size_b; j++) {
            printf("%d\n", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}
