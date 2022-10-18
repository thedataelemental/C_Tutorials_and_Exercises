/* temps.c
 * Converts and displays chart of Fahrenheit and Celsius temperatures
 * 10/15/2022 */

#include <stdio.h>

main()

{
	/* declare and assign initial variables */
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	/* print labels at top of chart */
	printf("Fahr:\tCels:\n");
	
	/* print two columns of temperature values */
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
