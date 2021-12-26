#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter number you want even sum of: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i = i + 2)
        sum += i;

    printf("The sum is: %d", sum);

    return 0;
}