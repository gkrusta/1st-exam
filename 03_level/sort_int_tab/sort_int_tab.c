#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int	i;
	unsigned int	pos;

	i = 0;
	while (i < size)
	{
		pos = 0;
		while (pos < size - 1)
		{
			if (tab[pos + 1] < tab[pos])
			{
				tmp = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = tmp;
			}
			pos++;
		}
		i++;
	}
}

int	main(void)
{
	int	arr[4] = {2, 6, 1, 0};
	int	i;
	int	size = 4;
	i = 0;

	sort_int_tab(arr, size);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
