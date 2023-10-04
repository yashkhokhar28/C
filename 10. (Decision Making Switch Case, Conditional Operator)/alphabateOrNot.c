#include <stdio.h>

void main()
{
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is an alphabet using ASCII values
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        printf("The character is an alphabet.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }
}
