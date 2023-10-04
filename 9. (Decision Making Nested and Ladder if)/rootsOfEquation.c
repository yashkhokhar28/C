#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c;
    float discriminant, root1, root2;

    // Ask the user to enter coefficients a, b, and c
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0)
    {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Root 1: Root 2: %.2f\n", root1);
    }
    else
    {
        // Imaginary roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}
