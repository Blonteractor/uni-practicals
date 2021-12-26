#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, -2, 6, 0, -77, 23, 7, -10, 0 };

    int pois[12];
    int pois_count = 0;

    int neg[12];
    int neg_count = 0;

    int zero_count = 0;


    for (int i = 0; i < 12; i++)
    {
        int current = data[i];

        if (current > 0) {
            pois[pois_count] = current;
            pois_count++;
        }
        else if (current < 0) {
            neg[neg_count] = current;
            neg_count++;
        }
        else {
            zero_count++;
        }
    }

    printf("Poisitives are: ");
    for (int i = 0; i < pois_count; i++)
        printf("%d, ", pois[i]);


    printf("\nNegatives are: ");
    for (int i = 0; i < neg_count; i++)
        printf("%d, ", neg[i]);

    printf("\nNumber of zeroes are: %d", zero_count);

    return 0;
}

