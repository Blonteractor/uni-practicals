#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 0, -77, 23, 7, -10, 0, 20 };

    int sum = 0;
    for (int i = 0; i < 13; i++)
    {
        if (data[i] % 2 != 0)
            sum += data[i];

    }

    printf("Sum of odd elements of array is: %d", sum);
    return 0;
}

