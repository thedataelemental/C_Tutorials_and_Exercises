// 2-2_getline_loop.c
// Rewrite of commented-out loop to avoid use of && or || operators
// Exercise from K&R C
// Solved 11/07/2022
// By Jackie


#include <stdio.h>

int main(void)
{
	int lim = 1000;
	int c; // Character of input being currently processed
	int i = 0; // Index of array being currently assigned
	char s[lim]; // Input array

// Old loop - retwritten below
//
//	for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; i++)
//	{
//		s[i] = c;
//	}
	
//	s[i] = '\0';

// New loop	
	while (i < (lim - 1))
	{	
		c = getchar();
		
		if ((c != EOF))
		{
			if (c != '\n')
			{
				s[i] = c;
				i++;	
			}
			else
				break;
		}
		else
			break;
	}
	
	s[i] = '\0';
	printf("%s", s);

}
