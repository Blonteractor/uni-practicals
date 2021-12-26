#include<stdio.h>

int main() {
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++)
            printf(" ");

        printf("+\n");

    }


    for (int j = 0; j < 2 * n + 1; j++)
        printf("+ ");

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++)
            printf(" ");

        printf("+\n");

    }
}
