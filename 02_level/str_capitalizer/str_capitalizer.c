#include <unistd.h>

void	str_capitalizer(char *s)
{
	int	i;

	i = 0;
	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;
	write (1, &s[i], 1);
	i++;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == 32 || (s[i - 1] >= 9 && s[i - 1] <= 13))
				s[i] -= 32;
		}
		else if (s[i] >= 65 && s[i] <= 90)
		{
			if (!(s[i - 1] == 32 || (s[i - 1] >= 9 && s[i - 1] <= 13)))
				s[i] += 32;
		}
		write (1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argc > 0 && argv[i])
	{
		str_capitalizer(argv[i]);
		i++;
		argc--;
		write (1, "\n", 1);
	}
	return (0);
}
