#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int testInteger;
	printf("Enter an Integer: ");
	// scanf() function reads the formatted input from the keyboard.
	// note that '&' sign before testInteger whet it gets the address of tesntInteger andd the value is stored in the address
	scanf("%d",&testInteger);
	printf("%d\n", testInteger );

	// Float Input//Output
	float f;
	printf("Enter a number: ");
	// %f format sting is used incase of floats
	scanf("%f",&f);
	printf("%f is your number\n", f);

	// ASCII CHARACTERS
	/*
	When a character is entered into a program, the character itself is not stored. Instead, a numeric value(ASCII value) is stored.
	*/

	char chr;
	printf("Enter a character: ");
	scanf("%c",&chr);
	// When %c text format is used, character is displayed in case of character types
	printf("You enter %c\n", chr );
	// When %d text format is used, integer is displayed in case of character types
	printf("ASCII value of %c is %d\n",chr,chr );

	// When 



	return 0;

}