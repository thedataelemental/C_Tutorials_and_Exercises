// 1-24_error_checker.c
// Checks a C program for syntax errors from unmatched pairs
// Exercise from K&R C
// Solved 11/06/2022
// By Jackie P

#include <stdio.h>

// If desired input is found, toggle given binary flag on or off
int pair_match_check(int input, int opener, int closer, int flag)
{
	if ((input == opener) || (input == closer))
	{
		if (flag == 0)
			flag = 1;
		
		else if (flag == 1)
			flag = 0;
	}
	return flag;
}

// Check input for unmatched pairs, report error if appropriate
int main(void)
{
	int c;
	int i = 0;
	
	char input_string[1000];
	
	// Flags for possible unmatched quotes, brackets etc
	int in_single_quotes = 0;
	int in_double_quotes = 0;
	int in_parentheses = 0;
	int in_brackets = 0;
	int in_braces = 0;
	int in_double_slash_comment = 0;
	int in_asterisk_comment = 0;
	
	// Process text input into string
	while ((c = getchar()) != EOF)
	{
		input_string[i] = c;
		i++;
	}
	
	// Check input for unmatched pairs
	int n = 0;
	while (n < i)
	{
		// Call function to toggle pair match flags if appropriate
		in_single_quotes = 
			pair_match_check(input_string[n], '\'', '\'', in_single_quotes);
		
		in_double_quotes = 
			pair_match_check(input_string[n], '"', '"', in_double_quotes);
			
		in_parentheses = 
			pair_match_check(input_string[n], '(', ')', in_parentheses);
			
		in_brackets = 
			pair_match_check(input_string[n], '[', ']', in_brackets);
			
		in_braces = 
			pair_match_check(input_string[n], '{', '}', in_braces);
		
		// Do final check, for being inside a oomment, manually
		if (((input_string[n] == '\\') && (input_string[n + 1] == '*'))
			|| ((input_string[n] == '*') && (input_string[n + 1] == '\\')))
		{
			if (in_asterisk_comment == 0)
				in_asterisk_comment = 1;
			
			else if (in_asterisk_comment == 1)
				in_asterisk_comment = 0;
		}
		
		n++;
	}
	
	// Check if any pairs remain unclosed
	if ( (in_single_quotes == 1)
		|| (in_double_quotes == 1)
		|| (in_parentheses == 1)
		|| (in_brackets == 1)
		|| (in_braces == 1)
		|| (in_double_slash_comment == 1)
		|| (in_asterisk_comment == 1)
		)
	{
		printf("Error - unmatched pair!");
	}
}
