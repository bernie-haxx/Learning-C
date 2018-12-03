#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	// Test expression is true if number is less than 0
	if (number > 0)
	{
		printf("You entered %d. \n", number);
	}
	printf("The if system is very easy fahm");
	return 0;
}