#include <stdio.h>
void main()
{
    int a;
    printf("Enter A Number : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}