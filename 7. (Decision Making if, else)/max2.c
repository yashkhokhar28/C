//Find out largest number from given three numbers.

#include<stdio.h>
void main(){	
	int a,b;
	printf("Enter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number : ");
	scanf("%d",&b);
	if(a>b){
		printf("%d is largest",a);
	}
	if(a<b){
		printf("%d is largest",b);
	}
}
