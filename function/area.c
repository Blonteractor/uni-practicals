#include <stdio.h>

float area(float radius) {
    return 2 * radius * 3.14;
}

int main() {
    float inp;
    printf("Enter radius:");
    scanf("%f", &inp);

    printf("Area: %f", area(inp));
    return 0;
}

