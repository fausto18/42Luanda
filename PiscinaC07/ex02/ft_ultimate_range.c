/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devarist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:03:11 by devarist          #+#    #+#             */
/*   Updated: 2023/12/05 14:03:13 by devarist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	temp = (int *)malloc((max - min) * sizeof(int));
	if (!temp)
		return (-1);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (i);
}
