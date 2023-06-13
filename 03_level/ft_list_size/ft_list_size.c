#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list->next != NULL)
		count++;
	return (count);
}
