#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, d;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter c : ");
    scanf("%f", &c);

    d = (pow(b, 2)) - (4 * a * c);
    float D = sqrt(d);
    float z = sqrt(-d);

    if (d > 0)
    {
        printf("r1 = %f \n", (-b + D) / (2 * a));
        printf("r2 = %f \n", (-b - D) / (2 * a));
    }
    if (d == 0)
    {
        printf("r1 = r2 = %f", (-b) / (2 * a));
    }
    if (d < 0)
    {
        printf("r1 = %f + i%f \n", (-b) / (2 * a), (z) / (2 * a));
        printf("r2 = %f - i%f \n", (-b) / (2 * a), (z) / (2 * a));
    }
}