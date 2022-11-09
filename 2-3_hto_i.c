// 2-3_h_to_i.c
// Converts string of hex digits into its decimal equivalent
// Solved 11/08/22
// By Jackie P

#include <stdio.h>
#include <math.h>

int main(void)
{
	int c; // Getchar variable
	int i = 0; // Index of input string being currently assigned
	char input[1000]; // Input string
	int output = 0; // Final output
	int invalid = 0; // Toggle flag for invalid input
	
	// Process text input to string
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		input[i] = c;
		i++;
	}
	
	input[i] = '\0';
	
	// Convert hex string to decimal
	int a; // Running total for final output
	int n = 0; // Index of input string being currently converted
	int exponent = i - 1;
	while (n < i)
	{
		a = input[n];
		
		if (a >= 'a' && a <= 'z')
		{
			a = (10 + a - 'a');
		}
		
		else if (a >= 'A' && a <= 'Z')
		{
			a = (10 + a - 'A');
		}
		
		else if (a >= '0' && a <= '9')
		{
			a = a - '0';
		}
		
		else
		{
			printf("Invalid character detected.\n");
			invalid = 1;
			break;
		}
		
		a = a * pow(16, exponent);
		
		output = output + a;
		exponent--;
		n++;
	}
	
	// Print final output
	if (invalid == 0)
	{
		printf("final output: %d\n", output);
	}
}
