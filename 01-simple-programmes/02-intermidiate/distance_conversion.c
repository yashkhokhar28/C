#include <stdio.h>
void main()
{
    int k, m, f, i, c;
    printf("Enter Kilometer : ");
    scanf("%d", &k);
    m = k * 1000;
    f = k * 3281;
    i = k * 39370;
    c = k * 100000;
    printf("1 Kilometer Is %d Meter %d Foot %d Inch %d Centimeter", m, f, i, c);
}