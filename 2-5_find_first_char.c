// 2-5_find_first_char.c
// Given two strings, find the first char in s1 that also appears in s2.
// Exercise from K&R C.
// Solved 11/12/2022
// By Jackie

#include <stdio.h>

int main(void)
{
	int c; // Character input variable
	int i = 0; // Index / length of first string
	int n = 0; // Index / length of second string
	char s1[1000]; // String 1
	char s2[1000]; // String 2
	int match_found = 0; // Toggle flag
	int match_index = 0; // Final result to return
	
	// Get string 1
	while ((c = getchar()) != '\n')
	{
		s1[i] = c;
		i++;
	}
	
	// Get string 2
	while ((c = getchar()) != '\n')
	{
		s2[n] = c;
		n++;
	}
	
	int j = 0; // New index for first string
	int k = 0; // New index for second string
	
	// Find first char in s1 that is also in s2
	while (j < i)
	{
		while (k < n)
		{
			// Check for match
			if (s1[j] == s2[k])
			{
				match_found = 1;
				match_index = j;
			}
			k++;
			
			if (match_found == 1)
			{
				break;
			}
		}
		
		if (match_found == 1)
			{
				break;
			}
			
		k = 0;
		j++;
	}
	
	// Print results
	if (match_found == 1)
	{
		printf("Match index: %d", match_index);
	}
	
	else
	{
		printf("No match.");
	}
}
