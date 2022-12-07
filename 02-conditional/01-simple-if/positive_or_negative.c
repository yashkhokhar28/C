#include <stdio.h>
void main()
{
    int a;
    printf("Enter A Number : ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("Negative Number");
    }
}