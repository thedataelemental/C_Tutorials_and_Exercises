#include <stdio.h>

main()
{
	doucle nc;
	
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}
