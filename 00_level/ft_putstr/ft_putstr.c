#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

/* #include <stdio.h>
int	main(void)
{
	char	str[] = "Print ***string*** 123!";

	ft_putstr(str);
	return (0);
} */