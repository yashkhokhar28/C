// Check whether given number is positive or negative.

#include <stdio.h>
void main()
{
	int a;
	printf("Enter Number : ");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("Positive");
	}
	if (a < 0)
	{
		printf("Negative");
	}
	if (a == 0)
	{
		printf("Zero");
	}
}
