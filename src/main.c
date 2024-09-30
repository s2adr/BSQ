/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:59:42 by saidriss          #+#    #+#             */
/*   Updated: 2024/09/30 12:39:46 by saidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
}

void	ft_error_map(void)
{
	write (2, "map error\n", 10);
}

void	ft_exit(void)
{
	ft_error_map();
	exit(1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	ac--;
	av++;
	while (i < ac)
	{
		ft_init(ac, av[i]);
		if (i < ac - 1)
			ft_putchar('\n');
		i++;
	}
	if (!ac)
		ft_init(ac, av[i]);
	return (0);
}
