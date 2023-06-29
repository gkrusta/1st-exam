#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int		*arr;
	long	count; // to be able to operate with int_min and int_max
	int		i;

	count = 0;
	i = 0;
	if (start >= end)
		count = (long)start - (long)end + 1;
	else if (start < end)
		count = (long)end - (long)start + 1;
	arr = malloc(sizeof(int) * count);
	while (i <= count)
	{
		arr[i] = end;
		end--;
		i++;
	}
	return (arr);
}

#include <stdio.h>
int	main (void)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	arr = ft_rrange(1, 3);
	size = 3 - 1 + 1;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
