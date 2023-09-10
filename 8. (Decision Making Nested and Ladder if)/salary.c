/*Enter basic salary of an employee and calculate Gross salary according to given conditions: (A) 
Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic*/
#include<stdio.h>
void main(){
	int basic_salary,hra,da,gross_salary;
	printf("Enter Basic Salary : ");
	scanf("%d",&basic_salary);
	if(basic_salary>=10000){
		hra = (basic_salary*20)/100;
		da = (basic_salary*80)/100;
	}
	if(basic_salary>=20000){
		hra = (basic_salary*25)/100;
		da = (basic_salary*90)/100;
	}
	if(basic_salary>=30000){
		hra = (basic_salary*30)/100;
		da = (basic_salary*95)/100;
	}
	gross_salary = basic_salary+hra+da;
	printf("Gross Salary : %d",gross_salary);
}

