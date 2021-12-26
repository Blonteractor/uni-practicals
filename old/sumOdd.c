#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter number you want odd sum of: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2)
        sum += i;

    printf("The sum is: %d", sum);

    return 0;
}