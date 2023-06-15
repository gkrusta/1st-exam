#include <stdio.h>
#include <stdlib.h>

int	ft_calc(int a, int b)
{
	if (b == 0)
		return (a);
	return (ft_calc(b, a % b));
}

int	main(int argc, char **argv)
{
	int	nb;
	int	nb2;
	int	div;
	int	res;

	div = 1;
	res = 0;
	if (argc == 3)
	{
		nb = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		res = ft_calc(nb, nb2);
		printf("%d", res);
	}
	printf ("\n");
	return (0);
}

