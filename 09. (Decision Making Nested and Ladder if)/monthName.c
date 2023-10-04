#include <stdio.h>

void main()
{
    int monthNumber;

    // Ask the user to enter a number between 1 and 12
    printf("Enter a number between 1 and 12: ");
    scanf("%d", &monthNumber);

    // Determine the month name based on the entered number using if-else if statements
    if (monthNumber == 1)
    {
        printf("January\n");
    }
    else if (monthNumber == 2)
    {
        printf("February\n");
    }
    else if (monthNumber == 3)
    {
        printf("March\n");
    }
    else if (monthNumber == 4)
    {
        printf("April\n");
    }
    else if (monthNumber == 5)
    {
        printf("May\n");
    }
    else if (monthNumber == 6)
    {
        printf("June\n");
    }
    else if (monthNumber == 7)
    {
        printf("July\n");
    }
    else if (monthNumber == 8)
    {
        printf("August\n");
    }
    else if (monthNumber == 9)
    {
        printf("September\n");
    }
    else if (monthNumber == 10)
    {
        printf("October\n");
    }
    else if (monthNumber == 11)
    {
        printf("November\n");
    }
    else if (monthNumber == 12)
    {
        printf("December\n");
    }
    else
    {
        printf("Invalid input. Please enter a number between 1 and 12.\n");
    }
}
