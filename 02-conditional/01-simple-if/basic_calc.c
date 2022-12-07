#include <stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter Number : ");
    scanf("%d", &n1);
    printf("Enter Number : ");
    scanf("%d", &n2);
    printf("Enter 1 For Addition\nEnter 2 For Subtraction\nEnter 3 For Multiplication\nEnter 4 For Division\n");
    printf("Enter Your Choice : ");
    scanf("%d", &n3);
    if (n3 == 1)
    {
        printf("Addition : %d", n1 + n2);
    }
    if (n3 == 2)
    {
        printf("Subtraction : %d", n1 - n2);
    }
    if (n3 == 3)
    {
        printf("Multiplication : %d", n1 * n2);
    }
    if (n3 == 4)
    {
        printf("Division : %d", n1 / n2);
    }
}