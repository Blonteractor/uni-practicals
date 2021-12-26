#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 7, 23, 7, 10 };

    int current_max = data[0];

    for (int i = 0; i < 9; i++)
    {
        if (data[i] > current_max)
            current_max = data[i];
    }

    printf("Maximum of array is: %d", current_max);

    return 0;
}

