#include <stdio.h>

void main()
{
    int monthNumber;
    printf("Enter month number: ");
    scanf("%d", &monthNumber);

    int days;

    switch (monthNumber)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        days = 28;
        printf("Enter year: ");
        int year;
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days = 29;
        }
        break;
    default:
        printf("Invalid month number\n");
        return 0;
    }

    printf("Number of days in the month: %d\n", days);
}
