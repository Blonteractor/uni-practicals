#include <stdio.h>

int main() {
    int data[] = { 23, 13, 13, 43, 2, 6, 0, 77, 23, 7, 10, 0, 20 };

    for (int i = 0; i < 13; i++)
    {
        int n = data[i];
        int i, m = 0, flag = 0;

        m = n / 2;
        for (i = 2;i <= m;i++)
        {
            if (n % i == 0)
            {
                printf("%d is not prime", n);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d is prime", n);

        printf("\n");
    }


    return 0;
}

