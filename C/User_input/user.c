#include <stdio.h>
int main(int argc, char const *argv[])
{
	int firstNumber, secondNumber, sumOfTwoNumbers;


	printf(" Enter first integer: ");

	// Two Integers entered by user is stored using scanf() function
	scanf("%d %d",&firstNumber,&secondNumber);

	// Sum of two numbers in stored in variable sumOfTwoNumbers
	sumOfTwoNumbers = firstNumber + secondNumber;

	// Display sum 
	printf("%d + %d = %d \n", firstNumber, secondNumber, sumOfTwoNumbers);
	return 0;
}