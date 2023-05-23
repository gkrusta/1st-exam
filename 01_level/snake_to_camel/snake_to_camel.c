#include <stdlib.h>
#include <unistd.h>

int	ft_check_snake(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			return (0);
		else if (str[i] == '_' && str[i + 1] == '_')
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '_')
			length++;
		i++;
	}
	return (length);
}

char	*ft_to_camel(char *str)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	j = 0;
	new_str = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] == '_')
		{
			if (str[i + 1] >= 'a' && str[i +1] <= 'z')
				new_str[j] = str[i + 1] - 32;
			else
				new_str[j] = str[i + 1];
			i++;
		}
		else
			new_str[j] = str[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*new_str;

	i = 0;
	if (argc == 2 && ft_check_snake(argv[1]))
	{
		new_str = ft_to_camel(argv[1]);
		if (new_str != NULL)
		{
			while (new_str[i])
			{
				write (1, &new_str[i], 1);
				i++;
			}
			free(new_str); //can be skipped?
		}
	}
	write (1, "\n", 1);
	return (0);
}
