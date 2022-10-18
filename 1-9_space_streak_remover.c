#include <stdio.h>

main()
{
	int new_char;
	int space_found = 0;
	
	/* scan through text input */
	while ((new_char = getchar()) != EOF)
	{
		/* Start space streak upon finding a space character */
		if (new_char == ' ')
		{
			if (space_found == 0)
				putchar(new_char);
			space_found = 1;
		}
		
		/* Clear space streak upon finding non-space character */
		if (new_char != ' ')
		{
			putchar(new_char);
			space_found = 0;
		}
	}

}
