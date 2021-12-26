#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter number you want average of: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("The average is: %f", sum / ((float)n));

    return 0;
}