#include <stdio.h>
void main()
{
    float p, r, n, intrest;
    printf("Enter P : ");
    scanf("%f", &p);
    printf("Enter R : ");
    scanf("%f", &r);
    printf("Enter N : ");
    scanf("%f", &n);
    intrest = (p * r * n) / 100;
    printf("Simple Intrest : %f", intrest);
}