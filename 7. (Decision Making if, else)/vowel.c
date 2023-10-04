// Check whether given character is vowel or consonant.

#include <stdio.h>
void main()
{
	char c;
	printf("Enter Character : ");
	scanf("%c", &c);
	if (c == "A" || c == "E" || c == "I" || c == "O" || c == "U")
	{
		printf("It Is Vowel");
	}
	else
	{
		printf("It Is Consonent");
	}
}
