#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*
	Rules fo naming a variable
	1. Can have letters blah blah blah
	2. The first letter can either be a letter or an underscore
	3. There is no rule on how long a variable name can be. However, you may run into problems in some compilers if variable name is londer than 31 characters.
	*/

	/*
	Constants/ Literals
	This is a value whose value cannot be altered in a program
	*/
	// Integer
	int playerScore = 95;

	// Character
	char ch = 'a';
	ch = '1';
	// constant
	const double PI = 3.14;
	printf("%s\n", "This is done my niggs\n" );
	/*
	Integers
	This is a numeric constant without any fractional or exponential part.
	There are three types of integer constants in C:
	-decimal constant(base 10)
	-octal constant(base 8)
	-hexadecimal(base 16)

	For example 
	Decimal constants: 0, -9, 22 etc
	Octal constants: 021, 077, 033 etc
	Hexadecimal constants: 0x7f, 0x2a, 0x521 etc
	*/
	/*
	Floating Point Constants

	A floating-Point constant is a numeric constant that has either a fractiona; form or an exponent form for example:
	-2.0
	0.00002234
	-0.22E-5
	*/

	/*
	Escape Sequences
	These are special characters with special meaning
	\b - Back Space
	\f - Form Feed
	\n - newline
	\r - return 
	\t - Horizontal tab
	\v - Vertical Tab
	\\ - Back Slash
	\' - Single Quotation
	\" - Double Quotation marks
	\? - Question Mark
	\0 - NULL character
	*/
	printf("\"Wazzzgoood\"\n%s\n","homie" );
	/*
	Enumerations
	The keyword enum is used to define enumeration types.For example
	*/
	enum color {yellow, green, black, white};
	
	return 0;
}