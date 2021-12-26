#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter the two positive integers: ");
    scanf("%d %d", &a, &b);

    // maximum number between n1 and n2 is stored in max
    int larger = (a > b) ? a : b;

    while (1) {
        if (larger % a == 0 && larger % b == 0) {
            printf("The LCM of %d and %d is %d", a, b, larger);
            break;
        }
        larger++;
    }
    return 0;
}