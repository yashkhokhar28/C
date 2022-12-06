#include <stdio.h>
void main()
{
    float c, f;
    printf("Enter Celsius Value : ");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("Fahrenheit : %f", f);
}