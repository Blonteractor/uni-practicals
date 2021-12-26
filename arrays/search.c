#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 0, -77, 23, 7, -10, 0, 20 };

    int found_at = -1;
    int to_find;

    printf("Ener the number to find: ");
    scanf("%d", &to_find);

    for (int i = 0; i < 13; i++) {
        if (to_find == data[i]) {
            found_at = i;
            break;
        }
    }

    if (found_at != -1)
        printf("Element found at index %d", found_at);
    else
        printf("Element does not exist in array");

    return 0;
}

