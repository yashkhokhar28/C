//Print simple interest. (principal*roi*time period)/100

#include<stdio.h>
void main(){
	float p,r,n,simple_intrest;
	printf("Enter Principal Amount : ");
	scanf("%f",&p);
	printf("Enter Rate Of Intrest : ");
	scanf("%f",&r);
	printf("Enter Time Period : ");
	scanf("%f",&n);
	simple_intrest = (p*r*n)/100;
	printf("Simple Intrest : %.2f",simple_intrest);	
}
