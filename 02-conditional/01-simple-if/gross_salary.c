#include <stdio.h>
void main()
{
    float basic_salary;
    printf("Enter Basic Salary : ");
    scanf("%f", &basic_salary);
    if (basic_salary >= 10000 && basic_salary <= 20000)
    {
        printf("Gross Salary : %f\n", basic_salary + (basic_salary * 0.20) + (basic_salary * 0.80));
    }
    if (basic_salary >= 20000 && basic_salary <= 30000)
    {
        printf("Gross Salary : %f\n", basic_salary + (basic_salary * 0.25) + (basic_salary * 0.90));
    }
    if (basic_salary >= 30000)
    {
        printf("Gross Salary : %f\n", basic_salary + (basic_salary * 0.30) + (basic_salary * 0.95));
    }
}