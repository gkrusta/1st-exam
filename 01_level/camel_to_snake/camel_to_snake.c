#include <unistd.h>
#include <stdlib.h>

int	ft_len(char *str);

char	*camel_to_snake(char *str)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	j = 0;
	new_str = malloc(sizeof(char) * (ft_len(str) + 1));
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			new_str[j] = '_';
			j++;
			new_str[j] += str[i] + 32;
		}
		else
			new_str[j] = str[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}

int	ft_len(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			count++;
		count++;
		i++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*new_str;

	i = 0;
	if (argc == 2)
	{
		new_str = camel_to_snake(argv[1]);
		while (new_str[i])
		{
			write (1, &new_str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
