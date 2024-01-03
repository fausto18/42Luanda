/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:39:09 by fsacufun          #+#    #+#             */
/*   Updated: 2023/11/20 12:39:21 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	rad_exp;

	rad_exp = 1;
	if (nb > 0)
	{
		while (rad_exp * rad_exp <= nb)
		{
			if (rad_exp * rad_exp == nb)
				return (rad_exp);
			if (rad_exp > 46340)
				return (0);
			rad_exp++;
		}
	}
	return (0);
}
