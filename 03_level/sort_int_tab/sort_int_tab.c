void	sort_int_tab(int *tab, unsigned int size)
{
	int	*tmp;
	int	i;

	i = 0;
	while (size > 0)
	{
		if (tab[i + 1] < tab[i])
		{
			tmp = &tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = *tmp;
			i = 0;
			/* size--; */
		}
		else
		{
			i++;
			size--;
		}
	}
}

#include <stdio.h>
int	main(void)
{
	int	arr[4] = {2, 6, 1, 3};
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
