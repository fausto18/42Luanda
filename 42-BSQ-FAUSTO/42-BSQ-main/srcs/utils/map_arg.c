/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:22:47 by fsacufun          #+#    #+#             */
/*   Updated: 2023/12/04 16:22:48 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

bool	map_arg(t_data *d)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while (d->map[i] && d->map[i] != '\n')
		i++;
	if (!d->map[i] || !d->map[i + 1])
		return (ft_pser("Error: map error\n"));
	d->n = i + 1;
	d->filler = d->map[--i];
	d->obstacle = d->map[--i];
	d->empty = d->map[--i];
	if (d->empty == d->filler || d->empty == d->obstacle
		|| d->filler == d->obstacle)
		return (ft_pser("Error: map error\n"));
	x = 0;
	d->nbr_lines = 0;
	while (x < i)
	{
		if (d->map[x] > '9' || d->map[x] < '0')
			return (ft_pser("Error: map error\n"));
		d->nbr_lines = d->nbr_lines * 10 + d->map[x++] - '0';
	}
	return (true);
}

bool	read_len_lines(t_data *d)
{
	unsigned int	i;

	if (d->nbr_lines == 0)
		return (ft_pser("Error: map error\n"));
	i = d->n;
	while (d->map[i] && d->map[i] != '\n')
		i++;
	d->len_lines = i - d->n;
	if (d->len_lines == 0)
		return (ft_pser("Error: map error\n"));
	return (true);
}
