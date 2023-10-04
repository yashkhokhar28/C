#include <stdio.h>

void main()
{
    int num1, num2, num3;

    // Ask the user to enter three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    int secondLargest;

    // Compare the numbers to find the second largest
    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 >= num3)
        {
            secondLargest = num2;
        }
        else
        {
            secondLargest = num3;
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 >= num3)
        {
            secondLargest = num1;
        }
        else
        {
            secondLargest = num3;
        }
    }
    else
    {
        if (num1 >= num2)
        {
            secondLargest = num1;
        }
        else
        {
            secondLargest = num2;
        }
    }

    // Print the second largest number
    printf("The second largest number is: %d\n", secondLargest);
}
