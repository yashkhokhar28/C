// Swap two numbers. (Using temporary variable)

#include <stdio.h>
void main()
{
	int a, b, c;
	printf("Enter First Number : ");
	scanf("%d", &a);
	printf("Enter Second Number : ");
	scanf("%d", &b);
	printf("Before Swap : a = %d , b = %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("After Swap : a = %d , b = %d\n", a, b);
}
