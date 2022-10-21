// 1-13_word_lengths.c
// Displays horizontal histogram of total word lengths in text input
// Can handle input with words up to 19 characters in length
// 10/20/2022
// Jackie P

#include <stdio.h>

// Magic numbers for tracking if currently inside or outside of a word
#define IN 1
#define OUT 0

main(void)
{
	// c is for scanning characters of input
	// i and x are for iterating through loops
	int c;
	int current_word_length = 0;
	int word_lengths[20];
	int x = 0;
	int i;
	int state;
	
	// Initialize word length array
	for (i = 0; i < 20; i++)
		word_lengths[i] = 0;
	
	// Iterate through text input and increment array values
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
			{
				word_lengths[current_word_length]++;
				current_word_length = 0;
			}
			state = OUT;
		}
		else
		{
			state = IN;
			current_word_length++;
		}
	}
	
	// Display final histogram of word lengths
	for (i = 0; i < 20; i++)
	{
		printf("Words of length %d:", i);
		
		// Print a given bar of the histogram
		x = 0;
		while (x < word_lengths[i])
		{
			printf("*");
			x++;
		}
		printf("\n");
	}
}
