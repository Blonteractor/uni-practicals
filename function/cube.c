#include <stdio.h>

float cube(float num) {
    return num * num * num;
}

int main() {
    float inp;
    printf("Enter number you want cube of:");
    scanf("%f", &inp);

    printf("Result: %f", cube(inp));
    return 0;
}

