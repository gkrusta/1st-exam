#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printhex(int nb)
{
	if (nb < 16)
		ft_putchar("0123456789abcdef"[nb % 16]);
	else
	{
		ft_printhex(nb / 16);
		ft_putchar("0123456789abcdef"[nb % 16]);
	}
}

int	ft_tonumber(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - '0') + i * 10;
		i++;
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	int	nb;

	nb = 0;
	if (argc == 2)
	{
		nb = ft_tonumber(argv[1]);
		ft_printhex(nb);
	}
	write (1, "\n", 1);
	return (0);
}
