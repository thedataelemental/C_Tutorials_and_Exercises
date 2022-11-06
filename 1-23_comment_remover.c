// 1-23_comment_remover.c
// Takes a C program as text input and removes all comments.
// Exercise from K&R C.
// Solved 11/5/2022
// By Jackie P

#include <stdio.h>

int main(void)
{
	char input_string[1000];
	char output_string[1000];
	
	int c; // Character of input being currently processed
	int i = 0; // Array index being currently managed
	
	// Toggle flags for being currently inside a comment
	int double_slash_comment = 0;
	int asterisk_comment = 0;
	int within_quotes = 0;
	
	// Process text input, copy to string
	while ((c = getchar()) != EOF)
	{
		input_string[i] = c;
		i++;
	}
	
	// Copy input string to output string, removing comments
	int k = 0; // Index of output string
	int z = 0; // Index of input string
	
	while (z < i)
	{
		// Double or single quote detected
		if ((input_string[z] == '\'') || (input_string[z] == '"'))
		{
			// If not currently inside a comment...
			if ((double_slash_comment == 0) && (asterisk_comment == 0))
			{
				// Toggle "within quotes" flag
				if (within_quotes == 0)
				{
					within_quotes = 1;
				}
				
				else if (within_quotes == 1)
				{
					within_quotes = 0;
				}
			}
		}
		
		// Check if within quotes before removing comments
		if (within_quotes == 0)
		{
			// Double slash comment detected
			if ((input_string[z + 1] == '/') && (input_string[z] == '/'))
			{
				double_slash_comment = 1;
			}
			
			// Asterisk comment detected
			if ((input_string[z + 1] == '*') && (input_string[z] == '/'))
			{
				asterisk_comment = 1;
			}
			
			// Skip copying characters to output string until newline found
			while (double_slash_comment == 1)
			{
				if (input_string[z] == '\n')
				{
					double_slash_comment = 0;
				}
				z++;
			}
			
			// Skip copying characters until asterisk comment is closed
			while (asterisk_comment == 1)
			{
				if ((input_string[z + 1] == '/') && (input_string[z] == '*'))
				{
					asterisk_comment = 0;
					z++;
				}
				z++;
			}
		}
		
		output_string[k] = input_string[z];
		k++;
		z++;
		
	}
	
	output_string[k] = '\0';
	
	// Print final ouput string
	int n = 0;
	printf("\n\n");
	while (n < k)
	{
		printf("%c", output_string[n]);
		n++;
	}
}
