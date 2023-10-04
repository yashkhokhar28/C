#include <stdio.h>

void main()
{
    char character;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if the entered character is an uppercase letter
    if (character >= 'A' && character <= 'Z')
    {
        printf("Entered character is an uppercase letter.\n");
    }
    // Check if the entered character is a lowercase letter
    else if (character >= 'a' && character <= 'z')
    {
        printf("Entered character is a lowercase letter.\n");
    }
    // Check if the entered character is a digit
    else if (character >= '0' && character <= '9')
    {
        printf("Entered character is a digit.\n");
    }
    // If the character is not a letter or digit, it is a special character
    else
    {
        printf("Entered character is a special character.\n");
    }
}
