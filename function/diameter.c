#include <stdio.h>

float cube(float radius) {
    return 2 * radius;
}

int main() {
    float inp;
    printf("Enter radius:");
    scanf("%f", &inp);

    printf("Diameter: %f", cube(inp));
    return 0;
}

