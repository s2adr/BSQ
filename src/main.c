/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:59:42 by saidriss          #+#    #+#             */
/*   Updated: 2024/09/30 11:59:44 by saidriss         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc--;
	argv++;
	while (i < argc)
	{
		ft_init(argc, argv[i]);
		if (i < argc - 1)
			ft_putchar('\n');
		i++;
	}
	if (!argc)
	{
		ft_init(argc, argv[i]);
	}
	return (0);
}
