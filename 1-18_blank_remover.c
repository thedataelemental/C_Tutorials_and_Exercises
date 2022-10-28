// 1-18_blank_remover.c
// Removes trailing spaces and tabs from end of text input
// Exercise from K&R C
// Solved 10/26/2022

#include <stdio.h>

#define MAX_STRING_LENGTH 100

int main(void)
{
	char input_string[MAX_STRING_LENGTH];
	char output_string[MAX_STRING_LENGTH];
	
	int c;
	
	int i = 0;
	int input_string_length = 0;
	
	// Receive input text
	while (((c = getchar()) != EOF) && (c != '\n') && (i < (MAX_STRING_LENGTH - 1)))
	{
		input_string[i] = c;
		i++;
	}
	
	input_string_length = i;
	
	input_string[i] = '\0';
	
	// Start from end of input string, checking for total number of 
	// trailing blanks.
	printf("Input string length: %d\n", i);
	
	while ((i > 0) && (input_string[i] == ' ' || input_string[i] == '\t' || input_string[i] == '\n' || input_string[i] == '\0'))
	{
		input_string_length--;
		i--;
	}
	
	// Print line length, or blank line detection
	if (i != 0)
	{
		printf("Input string length minus trailing blanks: %d", (input_string_length + 1)); // Test line
	
		// Copy input string to output string, leaving off trailing blanks
		for (i = 0; i <= input_string_length; i++)
		{
			output_string[i] = input_string[i];
		}
		
		// Add * test character and final null character, print final string
		
			output_string[i] = '*';
			i++;
			output_string[i] = '\0';
			printf("\nFinal output string: %s", output_string);
	}
		
	else
		printf("Blank line entered.");
	
}
