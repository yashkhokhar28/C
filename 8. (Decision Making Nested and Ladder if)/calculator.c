// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per userUs choice. (A)

#include <stdio.h>
void main()
{
	int a, b, sum, sub, mul, div;
	char c;
	printf("Enter First Number : ");
	scanf("%d", &a);
	printf("Enter Second Number : ");
	scanf("%d", &b);
	printf("Enter + For Addition\nEnter - For Substraction\nEnter * For Multiplication\nEnter / For Division\n");
	scanf(" %c", &c);
	if (c == '+')
	{
		sum = a + b;
		printf("Addition : %d", sum);
	}
	else if (c == '-')
	{
		sub = a - b;
		printf("Substraction : %d", sub);
	}
	else if (c == '*')
	{
		mul = a * b;
		printf("Multiplication : %d", mul);
	}
	else if (c == '/')
	{
		div = a / b;
		printf("Division : %d", div);
	}
	else
	{
		printf("Please Choose Sign From Below\n");
		printf("Enter + For Addition\nEnter - For Substraction\nEnter * For Multiplication\nEnter / For Division\n");
	}
}
