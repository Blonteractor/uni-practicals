#include<stdio.h>

int main() {
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i = i + 2) {
        for (int j = 0; j < n - i; j++) // simplified from (2 * n - 1) / 2 - (2 * i - 1) / 2
            printf(" ");

        for (int j = 0; j < i; j++)
            printf("* ");

        printf("\n");
    }

    for (int i = n - 1; i > 0; i = i - 2) {
        for (int j = 0; j < n - i; j++) // simplified from (2 * n - 1) / 2 - (2 * i - 1) / 2
            printf(" ");

        for (int j = 0; j < i; j++)
            printf("* ");

        printf("\n");
    }

    if (n % 2 != 0) {
        for (int i = 0; i < n - 1; i++)
            printf(" ");
        printf("*");
    }

    return 0;
}



