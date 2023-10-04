#include <stdio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = (num1 > num2) ? num1 : num2;
    int result = largest * num3;

    printf("Result: %d\n", result);
}
