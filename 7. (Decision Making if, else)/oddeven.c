// Check whether the given number is odd or even.

#include <stdio.h>
void main()
{
	int a;
	printf("Enter Number : ");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("Even");
	}
	if (a % 2 != 0)
	{
		printf("Odd");
	}
}
