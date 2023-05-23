/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:09:22 by gkrusta           #+#    #+#             */
/*   Updated: 2023/05/23 12:01:27 by gkrusta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnb(int nb)
{
	if (nb > 9)
		ft_putnb(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_mult(int nb)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		ft_putnb(i);
		write (1, " x ", 3);
		ft_putnb(nb);
		write (1, " = ", 3);
		ft_putnb(nb * i);
		write (1, "\n", 1);
		i++;
	}
}

int	ft_check_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - '0') + nb * 10;
		i++;
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	int	nb;

	nb = 0;
	if (argc == 2)
	{
		nb = ft_check_atoi(argv[1]);
		ft_mult(nb);
	}
	else
		write (1, "\n", 1);
	return (0);
}
