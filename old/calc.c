#include <stdio.h>

int main() {
    int choice;
    float num1;
    float num2;

    printf("Welcome to calculator! Choose one of the following: ");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide\n\n");

    scanf("%d", &choice);

    printf("Enter both numbers seperated by ' ': ");
    scanf("%f %f", &num1, &num2);

    float result;

    switch (choice) {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    default:
        printf("Invalid Input.");
        return 1;
    }

    printf("The result is: %f", result);

    return 0;
}