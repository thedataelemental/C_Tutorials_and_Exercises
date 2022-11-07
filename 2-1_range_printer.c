// 2-1_range_printer.c
// Prints the ranges for each of C's basic data types on a given machine
// and demonstrates them via overflow
// Exercise from K&R C
// Solved 11/06/2022

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	// Print limits directly from header files
	printf("\n------------------------------------------------");
	printf("\nMAXIMUM RANGE OF VARIOUS C DATA TYPES\n\n");
	
	printf("\nCHAR MIN: %d\n", CHAR_MIN);
	printf("CHAR MAX: %d\n\n", CHAR_MAX);
	
	printf("INT MIN: %d\n", INT_MIN);
	printf("INT MAX: %d\n\n", INT_MAX);
	
	printf("SHORT MIN: %hi\n", SHRT_MIN);
	printf("SHORT MAX: %hi\n\n", SHRT_MAX);
	
	printf("LONG MIN: %li\n", LONG_MIN);
	printf("LONG MAX: %li\n\n", LONG_MAX);
	
	printf("UNSIGNED INT MAX: %u\n", UINT_MAX);
	printf("UNSIGNED CHAR MAX: %u\n", UCHAR_MAX);
	printf("UNSIGNED SHORT MAX: %u\n", USHRT_MAX);
	printf("UNSIGNED LONG MAX: %u\n\n", ULONG_MAX);
	
	printf("FLOAT MAX: %f\n", FLT_MAX);
	printf("FLOAT MIN: %f\n", FLT_MIN);
	printf("DOUBLE FLOAT MAX: %f\n", DBL_MAX);
	printf("DOUBLE FLOAT MIN: %f\n", DBL_MIN);
	
	printf("------------------------------------------------\n\n");
	
	// Demonstrate overflows by calculation
	printf("OVERFLOW DEMONSTRATIONS\n\n");
	
	// Char overflow demonstration
	char char_test = 126;
	printf("Char Value: %d\n", char_test);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		char_test++;
		printf("Adding one...\n");
		printf("Char Value: %d\n", char_test);
	}
	
	// Int overflow demonstration
	int int_test = 2147483646;
	printf("\nInt Value: %d\n", int_test);
	i = 0;
	for (i = 0; i < 3; i++)
	{
		int_test++;
		printf("Adding one...\n");
		printf("Int Value: %d\n", int_test);
	}
	
	// Short overflow demonstration
	short short_test = 32766;
	printf("\nShort Value: %hi\n", short_test);
	i = 0;
	for (i = 0; i < 3; i++)
	{
		short_test++;
		printf("Adding one...\n");
		printf("Short Value: %hi\n", short_test);
	}
	
	// Long overflow demonstration
	long long_test = 2147483646;
	printf("\nLong Value: %li\n", long_test);
	i = 0;
	for (i = 0; i < 3; i++)
	{
		long_test++;
		printf("Adding one...\n");
		printf("Long Value: %li\n", long_test);
	}
	
	// Unsigned Int demonstration
	unsigned int u_int_test = 4294967294;
	printf("\nUnsigned Int Value: %u\n", u_int_test);
	i = 0;
	for (i = 0; i < 3; i++)
	{
		u_int_test++;
		printf("Adding one...\n");
		printf("Unsigned Int Value: %u\n", u_int_test);
	}
	
	// Unsigned Char demonstration
	unsigned char u_char_test = 254;
	printf("\nUnsigned Char Value: %u\n", u_char_test);
	i = 0;
	for (i = 0; i < 3; i++)
	{
		u_char_test++;
		printf("Adding one...\n");
		printf("Unsigned Char Value: %u\n", u_char_test);
	}
	
	// Unsigned Short demonstration
	unsigned short u_short_test = 65534;
	printf("\nUnsigned Short Value: %u\n", u_short_test);
	i = 0;
	for (i = 0; i < 3; i++)
	{
		u_short_test++;
		printf("Adding one...\n");
		printf("Unsigned Short Value: %u\n", u_short_test);
	}
	
	// Unsigned Long demonstration
	unsigned long u_long_test = 4294967294;
	printf("\nUnsigned Short Value: %u\n", u_long_test);
	i = 0;
	for (i = 0; i < 3; i++)
	{
		u_long_test++;
		printf("Adding one...\n");
		printf("Unsigned Short Value: %u\n", u_long_test);
	}
	
	printf("------------------------------------------------\n");
}
