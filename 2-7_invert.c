// 2-7_invert.c
// Returns x after inverting the n bits of x starting at position p
// Solved 11/16/2022


#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
	return (x = (~x & (~(~0 << p) & (~0 << (p - n)))) | (x & (~(~(~0 << p) & (~0 << (p - n))))));
}

int main(void)
{
	unsigned x;
	int p;
	int n;
	
	scanf("%u", &x);
	scanf("%d", &p);
	scanf("%d", &n);
	
	int y;
	
	y = invert(x, p, n);
	
	printf("\nOutput: %u", y);
	
}
