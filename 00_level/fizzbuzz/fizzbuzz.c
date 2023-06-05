#include <unistd.h>

void	ft_putnb(int nb);

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 5 == 0 && nb % 3 == 0)
			write (1, "fizzbuzz\n", 9);
		else if (nb % 3 == 0)
			write (1, "fizz\n", 5);
		else if (nb % 5 == 0)
			write (1, "buzz\n", 5);
		else
			ft_putnb(nb);
		nb++;
	}
	return (0);
}

void	ft_putnb(int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		i = nb / 10 + 48;
		write (1, &i, 1);
		nb %= 10;
	}
	nb += 48;
	write (1, &nb, 1);
	write (1, "\n", 1);
}
