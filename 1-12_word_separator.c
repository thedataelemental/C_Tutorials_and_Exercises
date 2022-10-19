/* 1-12_word_separator.c */
/* K&R Exercise */
/* copies input to output, one word per line. */
/* 10/18/2022 */

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
