/* 1-10_escape_char_inserter.c */

#include <stdio.h>

main()
{
	int c;
	
	while ((c = getchar()) != EOF)
		{
			switch(c)
			{
				case '\t':
					printf("\\t");
					break;
				
				case '\\':
					printf("\\\\");
					break;
					
				default: putchar(c);
			}
		}
}
