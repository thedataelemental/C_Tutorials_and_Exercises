// 1-21_entab.c
// Replaces strings of spaces in a text input with the minimum number
// of tabs and spaces.
// Exercise from K&R C.
// Solved 11/3/2022
// By Jackie P

#include <stdio.h>
#define MAX_STRING_LENGTH 1000
#define TAB_STOP 8

int main(void)
{
	int c; // Character of input being currently processed
	char output_string[MAX_STRING_LENGTH];
	int i = 0; // Current index of output string to be assigned
	int tab_stop_place = 0; // Number of characters into current tab stop
	int space_count = 0; // Number of spaces in a given streak
	int space_streak = 0; // Toggles if currently within a space streak
	int next_char; // A character to be saved and added to output later
	
	// Process text input and create output string
	while ((c = getchar()) != EOF)
	{
		// Add all non-space characters to output string
		if (c != ' ')
		{
			output_string[i] = c;
			tab_stop_place++;
			space_count = 0;
			i++;
			
			if (c == '\n')
			{
				tab_stop_place = 0;
			}
		}
		   
		// Track position within current tab stop
		if (tab_stop_place >= 8)
		{
			tab_stop_place = 0;
		}
		
		// Space detected
		if (c == ' ')
		{
			space_count = 1;
			space_streak = 1;
			
			// Count total number of spaces in current streak
			while (space_streak == 1)
			{
				c = getchar();
				if (c == ' ')
					space_count++;
				else
				{
					next_char = c; // Save final getchar() result
					space_streak = 0;
				}
			}

			// Insert first tab
			if (space_count >= 8)
			{	
				output_string[i] = '\t';
				space_count -= (TAB_STOP - tab_stop_place);
				i++;
				tab_stop_place = 0;
			}
			
			// Add additional tabs as required
			while (space_count >= 8)
			{			
				output_string[i] = '\t';
				space_count -= 8;
				i++;	
			}
			
			// Add remaining spaces in space string
			while (space_count > 0)
			{
				output_string[i] = ' ';
				space_count--;
				i++;
				tab_stop_place++;
			}
			
			// Add char from final getchar() call in the loop earlier
			output_string[i] = next_char;
			i++;
			tab_stop_place++;
		}
	}
	
	// Print final output string
	// Stop printing at i to avoid printing garbage
	output_string[i] = '\0';
	int n = 0;
	while (n < i)
	{
		printf("%c", output_string[n]);
		n++;
	}
}
