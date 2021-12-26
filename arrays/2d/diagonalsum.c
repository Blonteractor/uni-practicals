#include <stdio.h>
int main()
{
    int matrix[3][3] = { {50,0,60},{70,80,98},{90,100,0} };

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j)
                sum += matrix[i][j];
        }
    }

    printf("Sum of diagonal elements in the matrix is %d", sum);

    return 0;
}

