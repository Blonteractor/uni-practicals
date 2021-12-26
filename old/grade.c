#include <stdio.h>

int main()
{
    int marks;
    int gpa;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    gpa = marks / 10;

    switch (gpa) {
    case 1:
        grade = 'E';
        break;
    case 2:
        grade = 'E';
        break;
    case 3:
        grade = 'E';
        break;
    case 4:
        grade = 'D';
        break;
    case 5:
        grade = 'D';
        break;
    case 6:
        grade = 'C';
        break;
    case 7:
        grade = 'B';
        break;
    case 8:
        grade = 'B';
        break;
    case 9:
        grade = 'A';
        break;
    case 10:
        grade = 'A';
        break;
    default:
        printf("Marks cant be more than 100.");
        return 1;
    }

    printf("Grade of student is: %c", grade);

    return 0;
}