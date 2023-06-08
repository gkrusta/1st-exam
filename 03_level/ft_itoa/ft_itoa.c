#include <stdlib.h>

static int	ft_numblen(long n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nr;

	nr = n;
	if (nr < 0)
		nr *= (-1);
	len = ft_numblen(nr);
	if (n < 0)
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len--] = nr % 10 + '0';
		nr /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
