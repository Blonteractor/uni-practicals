#include <stdio.h>
int main()
{
    int matrix1[3][3] = { {50,0,60},{70,80,98},{90,100,0} };
    int matrix2[3][3] = { {23,1,40},{72,10,58},{9,0,0} };

    int result_matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result_matrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("The result matrix is:\n ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

