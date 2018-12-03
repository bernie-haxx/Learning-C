#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	// long long n;
	// int count = 0;

	// printf("Enter an integer: ");
	// scanf("%lld", &n);
	// while(n != 0)
	// {
	// 	// n = n/10
	// 	n /= 10;
	// 	++count;
	// }
	// printf("Number of digits: %d\n", count );
	char line[150];
    int i, vowels, consonants, digits, spaces;

    vowels =  consonants = digits = spaces = 0;

    printf("Enter a line of string: ");
    scanf("%[^\n]", line);

    for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }

    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d", spaces);
	return 0;
}