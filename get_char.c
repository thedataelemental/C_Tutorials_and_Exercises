/* get_char.c */


#include <stdio.h>


/* copy input to output */

main()
{
	int c;
	
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
