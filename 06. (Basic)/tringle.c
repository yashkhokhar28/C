// Print area of triangle. ((height*base)/2)

#include <stdio.h>
void main()
{
	int h, b;
	float area;
	printf("Enter Height : ");
	scanf("%d", &h);
	printf("Enter Base : ");
	scanf("%d", &b);
	area = (h * b) / 2;
	printf("Area Of Tringle : %f", area);
}
