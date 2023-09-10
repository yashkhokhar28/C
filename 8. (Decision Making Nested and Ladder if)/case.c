//Check whether the entered character is upper case, lower case, digit or any special character.
#include<stdio.h>
void main(){
	char c;
	printf("Enter Character : ");
	scanf("%c",&c);
	if(c>=65 && c<=90){
		printf("It Is Upper Case");
	}else if(c>=97 && c<=122){
		printf("It Is Lower Case");
	}else if(c>=48 && c<=57){
		printf("It Is Digit");
	}else{
		printf("Special Character");
	}
}
