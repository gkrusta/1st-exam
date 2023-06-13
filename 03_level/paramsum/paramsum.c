#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnb(int n)
{
	if (n > 9)
		ft_putnb(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int argc, char **argv)
{
	argv = 0;

	if (argc == 1)
	{
		write (1, "0\n", 2);
		return (0);
	}
	ft_putnb(argc - 1);
	write (1, "\n", 1);
	return (0);
}
