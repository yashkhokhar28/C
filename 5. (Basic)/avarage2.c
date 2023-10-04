// Print average of three numbers. (without scanf)

#include <stdio.h>
void main()
{
	int a, b, c, avg;
	printf("Enter First Number : ");
	scanf("%d", &a);
	printf("Enter Second Number : ");
	scanf("%d", &b);
	printf("Enter Third Number : ");
	scanf("%d", &c);
	avg = (a + b + c) / 3;
	printf("Avarage Of %d, %d and %d is %d", a, b, c, avg);
}
