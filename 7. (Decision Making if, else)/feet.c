//Print given feet into inches. (inches = feet*12)

#include<stdio.h>
void main(){
	float feet,inches;
	printf("Enter Feet : ");
	scanf("%f",&feet);
	inches = feet * 12;
	printf("%.2f Feet = %.2f inches ",feet,inches);
}
