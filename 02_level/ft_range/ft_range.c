#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	count;
	int	*arr;
	int i;

	i = 0;
	count = 0;
	if (end >= start)
		count = end - start + 1;
	else if (end < start)
		count = start - end + 1;
	arr = malloc(sizeof(int) * count);
	if (start <= end)
	{
		while (i <= count)
		{
			arr[i] = start;
			i++;
			start++;
		}
	}
	if (start > end)
	{
		while (i <= count)
		{
			arr[i] = start;
			i++;
			start--;
		}
	}
	return (arr);
}

