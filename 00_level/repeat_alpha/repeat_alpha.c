#include <unistd.h>

void	ft_lettcount(char a, char c)
{
	int	i;
	int	count;

	i = 0;
	count = c - a + 1;
	while (count > 0)
	{
		write (1, &c, 1);
		count--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				ft_lettcount('A', argv[1][i]);
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				ft_lettcount('a', argv[1][i]);
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
