// 1-17_return_80_plus.c
// Return all lines longer than 80 characters.
// Exercise from K&R C.
// Solved 10/26/2022

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

// Print lines meeting required length
int main(void)
{
	int len = 0;
	int c;
	
	char line[MAXLINE]; // array to hold current string
	
	while ((len = get_line(line, MAXLINE)) > 0)
	{
		printf("Current line length: %d\n", len);
		
		if (len >= 80)
			printf("%s", line);
	}
	
}

// Process a given line of text input. Return its length.
int get_line(char s[], int lim)
{
	int i = 0;
	int c;
	
	while ((i < (lim - 1))&& ((c = getchar()) != EOF) && (c != '\n'))
	{
		s[i] = c;
		i++;
	}
	
	if (c == '\n')
		s[i] = c;
		i++;
	
	s[i] = '\0';
	
	return i;
}
