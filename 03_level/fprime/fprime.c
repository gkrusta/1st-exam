#include <stdlib.h>
#include <stdio.h>

void	ft_fprime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		printf ("1");
	while (nb >= i)
	{
		while (nb % i == 0)
		{
			nb = nb / i;
			printf ("%d", i);
			if (nb == i || nb == 1)
				break ;
			printf ("*");
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	nb;

	nb = 0;
	if (argc == 2)
	{
		nb = atoi(argv[1]);
		if (nb > 0)
			ft_fprime(nb);
	}
	printf ("\n");
	return (0);
}