#include <stdio.h>
void main()
{
    printf("Enter the day no. : ");
    int d;
    scanf("%d", &d);

    switch (d % 7) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("Sunday");
    }

}