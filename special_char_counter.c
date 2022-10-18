/* special_char_counter.c */
/* Counts and reports number of spaces, tabs and newlines in a text */

#include <stdio.h>

main()
{
	int new_char;
	int blank_count = 0;
	int tab_count = 0;
	int newline_count = 0;
	
	/* Count special characters */
	
	while ((new_char = getchar()) != EOF)
	{
		if (new_char == ' ')
			++blank_count;
			
		if (new_char == '\t')
			++tab_count;
			
		if (new_char == '\n')
			++newline_count;
	}
	
	/* Report results */
	
	printf("Spaces: %d ", blank_count);
	printf("Tabs: %d ", tab_count);
	printf("Newlines: %d ", newline_count);
	
}
