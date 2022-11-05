// 1-22_line_folder.c
// Returns text input with word wrapping on long lines
// Exercise from K&R C

#include <stdio.h>
#include <stdbool.h>


#define MAX_INPUT_LENGTH 100

int main(void)
{
	int current_column = 0; // Word wrap counter
	char output_string[MAX_INPUT_LENGTH];
	int i = 0; // Current index of output array
	int c; // Current character of text input
	int input_too_long = 0; // Toggle switch
	
	// Get text input and build output string
	while ((c = getchar()) != EOF)
	{
		// Trim any whitespace before wrapping to next line
		if ((((c == ' ') || (c == '\t')) && (current_column == 0)) == false)
		{
			output_string[i] = c;
			current_column++;
			i++;
		}
		
		// Check for maximum input length being exceeded
		if (i > MAX_INPUT_LENGTH)
		{
			printf("Error - max input length (%d) exceeded.", MAX_INPUT_LENGTH);
			input_too_long = 1;
			break;
		}
		
		if (c == '\n')
		{
			current_column = 0;
		}
		
		// Insert word wrapping as required
		if (current_column >= 20)
		{
			output_string[i] = '\n';
			i++;
			current_column = 0;
		}
	}
	
	if (input_too_long == 0)
	{
		// Print final output string
		output_string[i] = '\0';
		int n = 0;
		while (n < i)
		{
			printf("%c", output_string[n]);
			n++;
		}
	}
}
