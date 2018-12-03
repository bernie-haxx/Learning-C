#include <stdio.h> // Including header to run printf("%s\n", );
int main(int argc, char const *argv[])
{
	/* code */
	printf("%s\n", "C Programming" );
	// Integer Output

	int testInteger = 5;
	printf("Number = %d\n", testInteger );
	
	// Character I/O

	char chr;
	printf("Enter a character: ");
	scanf("%c",&chr);
	printf("You entered my %c\n", chr); 
	

	int red = 69;
	printf("Character having ASCII value %d is %c\n", red,red);
    return 0;
}