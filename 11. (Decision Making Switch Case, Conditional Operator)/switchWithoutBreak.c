#include <stdio.h>

void main()
{
    int choice = 2;

    switch (choice)
    {
    case 1:
        printf("This is case 1\n");
    case 2:
        printf("This is case 2\n");
    case 3:
        printf("This is case 3\n");
    default:
        printf("This is the default case\n");
    }
}
