#include <stdio.h>

int main() {
    int n;

    printf("Enter number you want even numbers upto: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i = i + 2)
        printf("Even num is: %d\n", i);

    return 0;
}