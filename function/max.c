#include <stdio.h>

float max(float num1, float num2) {
    return num1 ? num1 >= num2 : num2;
}

int main() {
    float inp1, inp2;
    printf("Enter two numbers:");
    scanf("%f %f", &inp1, &inp2);

    printf("Max: %f", max(inp1, inp2));
    return 0;
}

