unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	left;
	unsigned char	right;
	/* represents the bit mask 1111'0000;
shifts the extracted left half four positions to the right */
	left = (octet & 0xF0) >> 4;
	/* represents the bit mask 0000'1111;
shifts the extracted right half four positions to the left */
	right = (octet & 0x0F) << 4;
	/* OR operation | combines the shifted right half and shifted left half together */
	return (right | left);
}

#include <stdio.h>
int	main(void)
{
	unsigned char	byte;

	byte = 0x41; // passing hexadecimal value
	printf ("original byte: %X\n", byte);
	printf ("swapped byte: %X\n", swap_bits(byte));
	return (0);
}