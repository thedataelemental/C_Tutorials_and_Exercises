// 1-20_detab.c
// Exercise from K&R C.
// Replace each tab in text input with appropriate number of spaces
// to reach each tab stop.
// This effect is, of course, undetectable.
// Solved 1/1/2022
// By Jackie P

#include <stdio.h>
#define MAX_INPUT_LENGTH 1000

// TODO:
// Define output string
// Save input to output string, one character at a time
// Then print final output

int main(void)
{
	int char_count = 0; // Looping int of 1 through 4 -
						// tracking characters within current tab stop
	int c; // Current input character
	int spaces_needed = 0;
	int i = 0; // Current index of output string
	char output_string[MAX_INPUT_LENGTH];

	// Process input and build output string
	while ((c = getchar()) != EOF)
	{
		if (c != '\t')
		{
			output_string[i] = c;
			i++;
			char_count++;
		}
		
		if (char_count >= 8)
		{
			char_count = 0;
		}
		
		if (c == '\t')
		{
			spaces_needed = (8 - char_count);
			
//			Debug text
//			printf("Char count: %d\n", char_count);
//			printf("Spaces needed: %d\n", spaces_needed);

			// Replace tab with spaces in output
			while (spaces_needed > 0)
			{
				output_string[i] = ' ';
				spaces_needed--;
				i++;
			}
		
			char_count = 0;
		}
		
		if (c == '\n')
		{
			char_count = 0;
		}
	}
	
	// Print final output string with replaced tabs
	int n = 0;
	while (n < i)
	{
		printf("%c", output_string[n]);
		n++;
	}
}
