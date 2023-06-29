char	ft_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 65 + 97;
	return (c);
}

int	ft_get_digit(char c, int str_base)
{
	int	limit;

	if (str_base <= 10)
		limit = str_base + 48;
	else
		limit = str_base + 97 - 10;
	if (c >= '0' && c <= '9' && c <= limit)
		return (c - 48);
	else if (c >= 'a' && c <= 'f' && c <= limit)
		return (c - 97 + 10);
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		res;
	int		digit;

	sign = 1;
	res = 0;
	if (*str == (-1))
	{
		sign = -1;
		str++;
	}
	while ((digit = ft_get_digit(ft_case(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + digit;
		str++;
	}
	return (res * sign);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str = "10000000";
	int		str_base = 2;
	printf("%d\n", ft_atoi_base(str, str_base));
	return (0);
} */