#include<stdio.h>

int main() {
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i = i + 2) {
        for (int j = 0; j < n - i; j++) // simplified from (2 * n - 1) / 2 - (2 * i - 1) / 2
            printf(" ");

        for (int j = 1; j < i + 1; j++) {
            if (j >= i / 2) {
                printf("r", j);
            }
            else {
                printf("l", j);
            }
        }

        printf("\n");
    }

    for (int i = n; i > 0; i = i - 2) {
        for (int j = 0; j < n - i; j++) // simplified from (2 * n - 1) / 2 - (2 * i - 1) / 2
            printf(" ");

        for (int j = 0; j < i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}



