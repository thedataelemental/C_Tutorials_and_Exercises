// 2-4_string_squeeze.c
// Deletes any char in string 1 that matches any char in string 2.
// Exercise from K&R C.
// Solved 11/9/2022
// By Jackie P

#include <stdio.h>

int main(void)
{
	char string_1[1000]; // String to be squeezed
	char string_2[1000]; // String containing characters to remove
	char output_string [1000]; // Final output
	int c; // Placeholder for character input
	int s1_len = 0; // String 1 length
	int s2_len = 0; // String 2 length
	int i = 0; // Index value
	
	// Get strings 1 and 2 from user text input
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		string_1[i] = c;
		i++;
	}
	string_1[i] = '\0';
	
	i = 0;
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		string_2[i] = c;
		i++;
	}
	string_2[i] = '\0';
	
	// Get length of string 1
	i = 0;
	while ((c = string_1[i]) != '\0')
	{
		s1_len++;
		i++;
	}
	
	// Get length of string 2
	i = 0;
	while ((c = string_2[i]) != '\0')
	{
		s2_len++;
		i++;
	}
	
	// Iterate through strings and compare
	i = 0;
	int n = 0;
	int no_output = 1; // Toggle flag for empty output
	while (i < s1_len)
	{
		if (n < (s2_len))
		{
			// Copy valid character to output
			if (string_1[i] != string_2[n])
			{
				output_string[i] = string_1[i];
				no_output = 0;
			}
			n++;
			i++;
		}
		
		else
		{
			n = 0;
			i++;
		}
	}
	
	// Print final output
	if (no_output == 1)
	{
		printf("Output string: [Blank]");
	}
	
	else
	{
		output_string[i] = '\0';
		n = 0;
		printf("Output string: ");
		while (output_string[n] != '\0')
		{
			printf("%c", output_string[n]);
			n++;
		}
	}
}
