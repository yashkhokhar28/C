#include <stdio.h>
void main()
{
    float f, c;
    printf("Enter Fahrenheit Value : ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Celsius : %f", c);
}