/* 1-12_word_separator.c */

#include <stdio.h>

main()
{
	int new_char;
	
	while ((new_char = getchar()) != EOF)
	{
		if (new_char == ' ' || new_char == '\t' || new_char == '\n')
		{
			putchar('\n');
		}
		
		else
			putchar(new_char);
	}
}
