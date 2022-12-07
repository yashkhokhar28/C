#include <stdio.h>
void main()
{
    int n1, n2;
    printf("Enter Number : ");
    scanf("%d", &n1);
    printf("Enter Number : ");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        printf("%d is largest", n1);
    }
    else
    {
        printf("%d is largest", n2);
    }
}