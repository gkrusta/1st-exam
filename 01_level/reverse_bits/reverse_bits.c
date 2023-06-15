void	revrese_bits(unsigned int octet)
{
	int	a;
	int	i;

	a = 0;
	i = 8;
	while (i >= 0)
	{
		a = a | (octet & 1);
		i << = 1;
		octet >>= 1;
	}
}
