#include <stdio.h>

void main()
{
    float side1, side2, side3;

    // Ask the user to enter the three sides of the triangle
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    // Check if the triangle is equilateral
    if (side1 == side2 && side2 == side3)
    {
        printf("Triangle is an equilateral triangle.\n");
    }
    // Check if the triangle is isosceles
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("Triangle is an isosceles triangle.\n");
    }
    // Check if the triangle is a right-angled triangle
    else if (side1 * side1 == side2 * side2 + side3 * side3 || side2 * side2 == side1 * side1 + side3 * side3 || side3 * side3 == side1 * side1 + side2 * side2)
    {
        printf("Triangle is a right-angled triangle.\n");
    }
    // If not equilateral, isosceles, or right-angled, it must be a scalene triangle
    else
    {
        printf("Triangle is a scalene triangle.\n");
    }
}
