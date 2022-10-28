// 1-19_string_reverser.c
// Takes a line of text input returns the same line, reversed.
// Exercise from K&R C.
// Solved 10/27/2022

#include <stdio.h>

#define MAX_LENGTH 100

main()
{
	char input_string[MAX_LENGTH];
	char output_string[MAX_LENGTH];
	
	int c;
	
	// Get input string
	int i = 0;
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		input_string[i] = c;
		i++;
	}
	input_string[i] = '\0';
	
	printf("Input string: %s\n", input_string);
	
	// Copy input sting to output string, in reverse
	i--;
	int n = 0;
	while (i >= 0)
	{
		output_string[i] = input_string[n];
		n++;
		i--;
	}
	output_string[n] = '\0';
	
	printf("Output string: %s\n", output_string);
}
