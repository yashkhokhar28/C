#include <stdio.h>

void main()
{
    int subject1, subject2, subject3, subject4, subject5;
    int totalMarks;
    float percentage;

    // Ask the user to enter marks of five subjects
    printf("Enter marks of five subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &subject1);
    printf("Subject 2: ");
    scanf("%d", &subject2);
    printf("Subject 3: ");
    scanf("%d", &subject3);
    printf("Subject 4: ");
    scanf("%d", &subject4);
    printf("Subject 5: ");
    scanf("%d", &subject5);

    // Calculate total marks and percentage
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (float)totalMarks / 5;

    // Determine the class based on percentage
    if (percentage < 35)
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Class: Fail\n");
    }
    else if (percentage >= 36 && percentage <= 45)
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Class: Pass Class\n");
    }
    else if (percentage >= 46 && percentage <= 60)
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Class: Second Class\n");
    }
    else if (percentage >= 61 && percentage <= 70)
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Class: First Class\n");
    }
    else
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Class: Distinction\n");
    }
}
