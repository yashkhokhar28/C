//Print area of circle. (pie*r*r)

#include<stdio.h>
void main(){
	int r;
	float area,pi=3.14;
	printf("Enter Radius : ");
	scanf("%d",&r);
	area = pi*r*r;
	printf("Area Of Circle : %.2f",area);	
}
