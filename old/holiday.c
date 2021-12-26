#include <stdio.h>

int main() {
    int n;

    printf("Enter number you want to announce holiday: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("Tommorow is an holiday\n");

    return 0;
}