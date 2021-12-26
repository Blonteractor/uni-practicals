#include <stdio.h>

int main() {
    int n;

    printf("Enter number you want odd numbers upto: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2)
        printf("Odd num is: %d\n", i);

    return 0;
}