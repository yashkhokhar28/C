//Print addition of 2 numbers. (with scanf)

#include<stdio.h>
void main(){
	int a,b,sum;
	printf("Enter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number : ");
	scanf("%d",&b);
	sum = a+b;
	printf("Sum Of %d and %d is %d",a,b,sum);
}
