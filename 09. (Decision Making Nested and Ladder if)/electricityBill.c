#include <stdio.h>

void main()
{
    float units, total_bill, surcharge;

    // Input electricity units consumed
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    // Calculate total bill based on given conditions
    if (units <= 50)
    {
        total_bill = units * 0.50;
    }
    else if (units <= 150)
    {
        total_bill = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Calculate surcharge (20% of total bill)
    surcharge = 0.20 * total_bill;

    // Add surcharge to total bill
    total_bill += surcharge;

    // Print the total electricity bill
    printf("Total electricity bill: Rs. %.2f\n", total_bill);
}
