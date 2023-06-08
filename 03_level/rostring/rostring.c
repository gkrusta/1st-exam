#include <unistd.h>
#include <stdlib.h>

void	ft_rostring(char *s)
{
	int		i;
	int		start;
	int		end;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	start = i;
	while (s[i] && !(s[i] == ' ' || s[i] == '\t'))
		i++;
	end = i;
	while (s[i] && (s[i] == ' ' || s[i] == '\t'))
		i++;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
		{
			if (!(s[i + 1] == ' ' || s[i + 1] == '\t'))
				break ;
			i++;
		}
		if (s[i] == '\0' && s[i - 1] != ' ')
			write (1, " ", 1);
	}
	while (start < end)
	{
		write (1, &s[start], 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 2)
	{
		ft_rostring(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
