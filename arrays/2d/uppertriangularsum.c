#include <stdio.h>

int main()
{
    int row, col, sum = 0;

    int A[3][3] = { {50,0,60},{70,80,98},{90,100,0} };


    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (col > row)
            {
                sum += A[row][col];
            }
        }
    }

    printf("Sum of upper triangular matrix = %d", sum);

    return 0;
}

