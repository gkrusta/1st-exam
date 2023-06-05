#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	i;

	i = 128;
	while (i > 0)
	{
		if (octet & i)
			write (1, "1", 1);
		else
			write (1, "0", 1);
		i = i >> 1;
	}
}

int	main(void)
{
	unsigned char	byte;

	byte = 0x2;
	print_bits(byte);
	return (0);
}