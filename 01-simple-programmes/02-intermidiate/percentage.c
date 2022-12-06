#include <stdio.h>
void main()
{
    int s1, s2, s3, s4, s5, total, percentage;
    printf("Enter First Subject Mark : ");
    scanf("%d", &s1);
    printf("Enter Seoncd Subject Mark : ");
    scanf("%d", &s2);
    printf("Enter Third Subject Mark : ");
    scanf("%d", &s3);
    printf("Enter Fourth Subject Mark : ");
    scanf("%d", &s4);
    printf("Enter Firfth Subject Mark : ");
    scanf("%d", &s5);
    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;
    printf("Percentage : %d", percentage);
}