#include <stdio.h>

void main()
{
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Result: %d\n", num1 + num2);
        break;
    case 2:
        printf("Result: %d\n", num1 - num2);
        break;
    case 3:
        printf("Result: %d\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("Result: %.2f\n", (float)num1 / num2);
        }
        else
        {
            printf("Division by zero is not allowed\n");
        }
        break;
    default:
        printf("Invalid choice\n");
    }
}
