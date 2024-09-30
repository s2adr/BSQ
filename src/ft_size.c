/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:02:12 by saidriss          #+#    #+#             */
/*   Updated: 2024/09/30 13:33:12 by saidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	x_size(char **row)
{
	int	size;

	size = 0;
	while (row[size])
		size++;
	return (size);
}

int	y_size(char **col)
{
	int	size;

	size = 0;
	while (col[0][size])
		size++;
	return (size);
}
