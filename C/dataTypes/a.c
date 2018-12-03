/*
int - Integer Data types
In C programming, keyword int is used for declaring integer variable.

FLoat - Floating types
this variables can hold real numbers such as 2.34,-9.832

char - Character Types

These are used for declaring character type variables

C Qualifiers
Qualifiers alter the meaning of base data types to yield a new data type.

Size Qualifiers
There are two size qualifiers: Long and short.

Sign Qualifiers
Integers and floating point variables can hold both negative and positive values.
However, if a variable needs to hold positive values only, `unsigned ` data types are used.
There is another value called signed since a variable is signed by default.

Constant Qualifiers
An identifier can be declared as a constant. To do so const keyword is used.

Volatile Qualifiers
A variable should be declared volatile whenever its value can be changes by some external sources outside the program. Keyword volatile is used to creating volatile variables
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int id;
	// You can declare multiple variables at once in C programming
	int idd, age;
	// Stores numbers smaller than -2^31 and largen than 2^32-1
	float accountBalance;
	
	double bookPrice;
	
	float normalizationFactor = 22.44e2;
	// Char are 1 byte each
	char test = 'h';
	// double keyword consists of 8 bytes while long consists of 10 bytes
	long double i;
	//shortest number
	short int z;
	// variable holding positive value only
	unsigned int positiveInteger;
	// Constant Qualifier
	const int cost = 20;
	// Volatile(can be changed from an external source)
	volatile int red = 22;
	printf("%s\n","Done compiling \n" );
	return 0;
}