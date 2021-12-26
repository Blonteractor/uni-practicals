#include <stdio.h>
int Prime(int num);
int Primes(int lower, int upper);
int main()
{
    int lower, upper;
    printf("Enter the range:");
    scanf("%d%d", &lower, &upper);
    Primes(lower, upper);
    return 0;
}
int Primes(int lower, int upper)
{
    printf("%d and %d\n", lower, upper);
    while (lower <= upper)
    {
        if (Prime(lower))
        {
            printf("%d ,", lower);
        }

        lower++;
    }
}
void Prime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}