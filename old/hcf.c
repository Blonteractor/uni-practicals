#include<stdio.h>

int main() {
    int a;
    int b;
    int hcf;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a || i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("The HCF of %d and %d is '%d'", a, b, hcf);

    return 0;
}