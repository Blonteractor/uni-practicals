#include<stdio.h>

int main() {
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < i + 1; j++)
            printf("%d ", i + j);
        printf("\n");
    }
}
