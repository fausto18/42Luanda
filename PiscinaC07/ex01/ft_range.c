/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devarist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:02:59 by devarist          #+#    #+#             */
/*   Updated: 2023/12/05 14:03:02 by devarist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*mat;
	int	i;
	int	tamanho;

	tamanho = max - min;
	if (min >= max)
		return (NULL);
	mat = (int *)malloc(tamanho * sizeof(int));
	if (!mat)
		return (NULL);
	i = 0;
	while (min < max)
	{
		mat[i] = min;
		min++;
		i++;
	}
	return (mat);
}
