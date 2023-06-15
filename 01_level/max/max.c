int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	max = tab[i];
	while (len-- > 0)
	{
		if (tab[i + 1] > max)
			max = tab[i + 1];
		i++;
	}
	return (max);
}
