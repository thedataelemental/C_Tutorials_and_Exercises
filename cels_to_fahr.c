/* cels_to_fahr.c
/* Generates and displays a formatted table of temperatures
/* converted from Celsius to Farenheit
/* 10/16/2022 */

#include <stdio.h>

main()
{
	
/* Declare and asssign variables */
	float cels, fahr;
	int upper, lower, step;
	
	upper = 300;
	lower = 0;
	step = 20;
	
	cels = lower;
	
	
	printf("Cels:\tFahr:\n");

/* Calculate and display table */	
	while (cels <= upper) {
		fahr = cels * (9.0 / 5.0) + 32.0;
		printf("%.0f\t%.0f\n", cels, fahr);
		cels = cels + step;
	}
}
