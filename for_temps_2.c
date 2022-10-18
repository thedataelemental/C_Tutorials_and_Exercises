/* for_temps_2.c */


#include <stdio.h>


main()
{
	int cels;
	
	printf("Cels:\tFahr:\n");
	
	for(cels = 0; cels <= 300; cels += 20)
		printf("%d%6.1f\n", cels, cels * (9.0/5.0) + 32.0);
}
