/* for_temps.c */
/* 10/16/2022 */


#include <stdio.h>


main()
{
	int fahr;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));	
}
