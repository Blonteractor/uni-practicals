#include <stdio.h>
int main()
{
    int matrix[3][3] = { {50,0,60},{70,80,98},{90,100,0} };

    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 0)
                count++;
        }
    }

    printf("Number of zeroes in the matrix is %d", count);

    return 0;
}

