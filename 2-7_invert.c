// 2-7_invert.c
// Returns 'input_num' after inverting 'num_of_bits' bits,
// starting at position 'start_pos'.
// Exercise from K&R C
// Solved 11/17/2022

#include <stdio.h>

// Invert designated bits of input number
unsigned invert(unsigned input_num, int start_pos, int num_of_bits)
{
// Construct bit mask to grab bits we want to invert
	
	// This mask grabs all bits that fall right of the left end of the 
	// inversion zone
	int inversion_mask_pt_1 = ~(~0 << start_pos);
	
	// This mask grabs all bits that fall left of the right end of the 
	// inversion zone
	int inversion_mask_pt_2 = (~0 << (start_pos - num_of_bits));
	
	// This combination of the above two masks grabs all the bits
	// within the inversion zone, and nothing else
	int inversion_mask = (inversion_mask_pt_1 & inversion_mask_pt_2);
	
	
// Construct bit mask to grab bits we want to keep the same
	
	// This mask grabs all bits that fall left of the inversion zone
	int non_inversion_mask_pt_1 = ((~0 << start_pos));
	
	// This mask grabs all bits that fall right of the inversion zone
	int non_inversion_mask_pt_2 = ~(~0 << (start_pos - num_of_bits));
	
	// This combination of the above two masks grabs all bits that fall
	// outside the range of the inversion zone
	int non_inversion_mask = (non_inversion_mask_pt_1 | non_inversion_mask_pt_2);
	
	
// Apply all of the above masks at once
	return (~input_num & inversion_mask) | (input_num & non_inversion_mask);
}

// Get function arguments from user input and call bit flipping function
int main(void)
{
	unsigned input_num; // Input number, here to have some bits inverted
	int start_pos; // Position at which to begin inverting bits
	int num_of_bits; // Number of bits to invert (counted to the right)
	
	// Get arguments
	scanf("%u", &input_num);
	scanf("%d", &start_pos);
	scanf("%d", &num_of_bits);
	
	int output;
	
	// Work happens here
	output = invert(input_num, start_pos, num_of_bits);
	
	// Print final output
	printf("\nOutput: %u", output);
	
}
