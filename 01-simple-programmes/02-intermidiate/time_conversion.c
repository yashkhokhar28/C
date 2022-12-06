#include <stdio.h>
void main()
{
    int s, h, m;
    printf("Enter Seconds : ");
    scanf("%d", &s);

    h = s / 3600;
    m = (s % 3600) / 60;
    s = (s % 3600) % 60;

    printf(" %d : %d : %d ", h, m, s);
}