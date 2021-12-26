#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 0, -77, 23, 7, -10, 0, 20 };

    int i, j, min_idx;

    for (i = 0; i < 12; i++) {
        min_idx = i;
        for (j = i + 1; j < 13; j++)
            if (data[j] < data[min_idx])
                min_idx = j;

        swap(&data[min_idx], &data[i]);
    }

    printf("Sorted array: ");
    for (int i = 0; i < 13; i++)
        printf("%d,  ", data[i]);

    return 0;
}

