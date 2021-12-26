#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 0, -77, 23, 7, -10, 0, 20 };

    for (int i = 0; i < 6; i++)
    {
        int temp = data[12 - i];

        data[12 - i] = data[i];
        data[i] = temp;

    }

    printf("Reversed array: ");
    for (int i = 0; i < 13; i++)
        printf("%d, ", data[i]);

    return 0;
}

