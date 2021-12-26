#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 0, -77, 23, 7, -10, 0, 20 };

    int sum = 0;
    for (int i = 0; i < 13; i++)
        sum += data[i];


    printf("Average of elements of array is: %f", sum / 13.0);
    return 0;
}

