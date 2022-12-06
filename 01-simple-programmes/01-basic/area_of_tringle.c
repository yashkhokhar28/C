#include <stdio.h>
void main()
{
    int h, b;
    printf("Enter Height : ");
    scanf("%d", &h);
    printf("Enter Breath : ");
    scanf("%d", &b);
    int area = (h * b) / 2;
    printf("Area Of Tringle : %d", area);
}