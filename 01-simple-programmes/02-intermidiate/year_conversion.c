#include <stdio.h>
void main()
{
    int y, w, d, days;
    printf("Enter Days : ");
    scanf("%d", &d);
    y = d / 365;
    w = (d % 365) / 7;
    days = (d % 365) % 7;
    printf("%d Days Means %d Years %d Months %d Days", d, y, w, days);
}