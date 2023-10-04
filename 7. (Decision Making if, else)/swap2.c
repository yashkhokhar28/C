// Swap two numbers. (without using temporary variable)

#include <stdio.h>
void main()
{
	int a, b;
	printf("Enter First Number : ");
	scanf("%d", &a);
	printf("Enter Second Number : ");
	scanf("%d", &b);
	printf("Before Swap : a = %d , b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After Swap : a = %d , b = %d\n", a, b);
}
