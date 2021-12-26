#include <stdio.h>

float circumfrence(float radius) {
    return radius * 3.14 * radius;
}

int main() {
    float inp;
    printf("Enter radius:");
    scanf("%f", &inp);

    printf("Circumfrence: %f", circumfrence(inp));
    return 0;
}

