#include <unistd.h>

int	ft_no_doubles(char *str, char c, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && ft_no_doubles(argv[1], argv[1][i], i))
				{
					write (1, &argv[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}