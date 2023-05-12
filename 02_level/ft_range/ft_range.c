#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (start >= end)
		count = start - end + 1;
	else if (start < end)
		count = end - start + 1;
	arr = malloc(sizeof(int) * count);
	while (i <= count)
	{
		arr[i] = end;
		end--;
		i++;
	}
	return (arr);
}

/* #include <stdio.h>
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
 */