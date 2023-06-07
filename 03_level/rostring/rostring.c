#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		{
			if (!(str[i + 1] == 32 || (str[i] >= 9 && str[i] <= 13)))
				count++;
		i++;
		}
		i++;
		count++;
	}
	return (count);
}

char	*ft_rostring(char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i])
	{
		if (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
			break ;
	i++;
	}
	i++;
	while (str[i])
		str[j++] = s[i++];
	i = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i])
	{
		str[j] = str [i];
		j++;
		i++;
		if (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
			break ;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	if (argc >= 2)
	{
		str = ft_rostring(argv[1]);
		while (str[i])
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
