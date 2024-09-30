/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:59:01 by saidriss          #+#    #+#             */
/*   Updated: 2024/09/30 11:59:02 by saidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_solution(t_map map)
{
	int	i;

	i = 0;
	while (map.matrix[i])
	{
		ft_putstr(map.matrix[i]);
		i++;
	}
}

int	ft_init(int argc, char *argv)
{
	t_map	map;

	map = ft_get_map(argc, argv);
	if (!map.is_valid)
	{
		ft_error_map();
		ft_free_map(map);
		return (0);
	}
	else if (map.is_valid < 0)
	{
		ft_error_map();
		return (0);
	}
	ft_solver(map);
	ft_print_solution(map);
	ft_free_map(map);
	return (1);
}
