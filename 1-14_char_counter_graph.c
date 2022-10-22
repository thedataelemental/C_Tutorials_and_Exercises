// 1-14_char_counter_graph.c
// Totals up different character types in a text input
// Prints horizontal histogram of the results
// 10/21/2022
// Jackie P

#include <stdio.h>

int main(void)
{
	int c;
	int ndigit[10];
	int nwhite;
	int nother;
	int i;
	int x;
	
	nwhite = nother = 0;

	// Initalize char count array to all zeroes
	for (i = 0; i < 10; i++)
	{
		ndigit[i] = 0;
	}

	// Scan through text input and increment array values
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			// Subtract int value of '0' (48) to account for
			// Ascii value representation of characters
			ndigit[c - '0']++;
		}
		
		else if (c == ' ' || c == '\n' || c == '\t')
		{
			nwhite++;
		}
		
		else
		{
			nother++;
		}
	}
	
	// Display final graph of character counts
	for (i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		x = 0;
		while (x < ndigit[i])
		{	
			printf("*");
			++x;
		}
		printf("\n");
	}
	
	printf("W: ");
	x = 0;
	while (x < nwhite)
	{
		printf("*");
		x++;
	}
	printf("\n");
	
	printf("O: ");
	x = 0;
	while (x < nother)
	{
		printf("*");
		x++;
	}
	printf("\n");
}
