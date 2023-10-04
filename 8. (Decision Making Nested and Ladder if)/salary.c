#include <stdio.h>

void main()
{
    float basicSalary, grossSalary, hra, da;

    // Ask the user to enter basic salary
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on basic salary conditions
    if (basicSalary >= 30000)
    {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }
    else if (basicSalary >= 20000)
    {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    }
    else if (basicSalary >= 10000)
    {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    }
    else
    {
        // If basic salary is less than 10000, set HRA and DA to 0
        hra = 0;
        da = 0;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Print the gross salary
    printf("Gross salary: %.2f\n", grossSalary);
}
