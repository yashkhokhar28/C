#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num >= 0) ? printf("Positive\n") : printf("Negative\n");
}
