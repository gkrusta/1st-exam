#include <unistd.h>

int	ft_ch(char *str, char c, int i)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		j = 0;
		if (ft_ch(argv[1], argv[1][i], i) == 1)
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					write (1, &argv[1][i], 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
