#include <stdio.h>

void printArray(int* x, int count)
{
    for (int i = 0; i < count; i++)
        printf("%d\n", x[i]);


}

int main()
{
    int arr[] = { 2, 6, 213 };

    printArray(arr, 3);

    return 0;
}

