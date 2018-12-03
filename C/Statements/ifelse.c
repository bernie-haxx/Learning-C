#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int number;
	printf("Enter an integer: ");
    scanf("%d",&number);

    // True if remainder is 0
    if( number%2 == 0 )
        printf("%d is an even integer.",number);
    else
        printf("%d is an odd integer.",number);
	return 0;
}