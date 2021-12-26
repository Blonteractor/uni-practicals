#include <stdio.h>

int main() {
    float inputTemp;
    int choice;

    printf("Enter temperature: ");
    scanf("%f", &inputTemp);

    printf("What do you want it to convert to? (1 for C, 2 for F): ");
    scanf("%d", &choice);

    float result;

    switch (choice)
    {
    case 1:
        result = 32 + inputTemp * 5 / 9;
        break;
    case 2:
        result = 9 / 5 * inputTemp + 32;
        break;
    default:
        printf("Invalid Input.");
        return 1;
    }

    printf("The converted temp is: %f", result);
    return 0;
}