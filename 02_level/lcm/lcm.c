unsigned int	ft_calc_hcf(unsigned int a, unsigned int b)
{
	unsigned int	hcf;

	hcf = a;
	if (b > a)
		hcf = b;
	while (hcf > 0)
	{
		hcf--;
		if (a % hcf == 0 && b % hcf == 0)
			return (hcf);
	}
	return (0);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	hcf;
	unsigned int	lcm;

	lcm = 0;
	if ((int)a >= 0 && (int)b >= 0)
	{
		hcf = ft_calc_hcf(a, b);
		lcm = a * b / hcf;
	}
	return (lcm);
}

#include <stdio.h>
int	main (void)
{
	unsigned int	a;
	unsigned int	b;

	a = -6;
	b = -8;
	printf("Lowest Common Multiple of %d and %d: %d", a, b, lcm(a, b));
	return (0);
}