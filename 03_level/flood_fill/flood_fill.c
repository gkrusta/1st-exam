#include <stdlib.h>
#include <stdio.h>

typedef struct s_point
{
	int			x;
	int			y;
}				t_point;

void	ft_fill(char **tab, t_point size, t_point cur, char c)
{
	if (cur.x < 0 || cur.x > size.x || cur.y < 0 || cur.y > size.y ||
		tab[cur.x][cur.y] != c)
			return ;
	tab[cur.x][cur.y] = 'F';
	ft_fill(tab, size, (t_point){cur.x, cur.y + 1}, c);
	ft_fill(tab, size, (t_point){cur.x, cur.y - 1}, c);
	ft_fill(tab, size, (t_point){cur.x + 1, cur.y}, c);
	ft_fill(tab, size, (t_point){cur.x - 1, cur.y}, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	ft_fill(tab, size, begin, tab[begin.x][begin.y]);
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int	main(void)
{
	char	**area;
	t_point size = {8, 5};
	t_point begin = {2, 2};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}