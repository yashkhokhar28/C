// Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)

#include <stdio.h>
void main()
{
	float f, c;
	printf("Enter Temprature In Fahrenheit : ");
	scanf("%f", &f);
	c = (f - 32) * 5 / 9;
	printf("Temprature In Celsius : %.2f", c);
}
