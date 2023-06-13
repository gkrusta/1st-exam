#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			if (argv[1][i] == ' ' || i == 0)
			{
				j = i;
				if (i != 0)
					i++;
				while (argv[1][i] != ' ' && argv[1][i])
				{
					write (1, &argv[1][i], 1);
					i++;
				}
				if (j != 0)
					write (1, " ", 1);
				i = j;
			}
			i--;
		}
	}
	write (1, "\n", 1);
	return (0);
}