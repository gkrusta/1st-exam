#include <stdlib.h>

/*int	wc_count(char *str)
{
	int	res;
	int	i = 0;
	int flag = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] > 32 && flag == )
		{
			wc++;
			flag = 1;
		}
		else if (str[i] >= 9 && str[i] <= 32 &&)
			

	}
	return (res);
}*/

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	wc;
	int	k;
	int	start;
	char	**res;

	i = 0;
	k = 0;
	wc = 0;
	while(str[i])
	{
		if ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) &&
				(str[i + 1] != ' ' && !(str[i + 1] >= 9 && str[i + 1] <= 13)))
			wc++;
		i++;
	}
	wc++;
	res = malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] && k <= wc)
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (!str[i])
			break ;
		j = i;
		while (str[i] > 32)
			i++;
		res[k] = malloc(sizeof(char) * (i - j + 1));
		if (!res[k])
			return (NULL);
		start = 0;
		while (j < i)
		{
			res[k][start] = str[j];
			j++;
			start++;
		}
		res[k][start] = '\0';
		k++;
	}
	res[k] = NULL;
	return (res);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	char *str;
	char **res;

	i = 0;
	str = "abc 12345 hola   ";
	res = ft_split(str);
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	return (0);
}
