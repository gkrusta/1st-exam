#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start = 0;
	int end = 0;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		end = i;
		while (argv[1][i] > 32)
			i--;
		start = i + 1;
		while (start <= end)
		{
			write (1, &argv[1][start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
