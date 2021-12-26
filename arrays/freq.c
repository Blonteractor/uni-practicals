#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 7, 23, 7, 10 };

    for (int i = 0; i < 9; i++)
    {
        int count = 0;
        for (int j = 0; j < 9; j++)
        {
            if (data[j] == data[i])
                count++;
        }

        printf("Frequency of %d => %d\n", data[i], count);
    }

    return 0;
}

