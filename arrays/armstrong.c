#include<stdio.h>  
int main()
{
    int data[] = { 370, 560, 1, 471, 407 };

    for (int i = 0; i <= 4; i++)
    {
        int n = data[i];
        int r, sum = 0, temp;
        temp = n;
        while (n > 0)
        {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        if (temp == sum)
            printf("%d is an armstrong number.\n", temp);
        else
            printf("%d is not an armstrong number.\n", temp);

    }

    return 0;
}

