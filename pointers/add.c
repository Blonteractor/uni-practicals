#include <stdio.h>

int add(int* a, int* b) {
    return *a + *b;
}

int main() {
    int a = 23;
    int b = 34;

    int res = add(&a, &b);

    printf("Add result: %d", res);
    return 0;
}

