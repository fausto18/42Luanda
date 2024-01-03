/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:55:33 by fsacufun          #+#    #+#             */
/*   Updated: 2023/11/21 16:56:47 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	cur;
	int	is_numeric;

	cur = 0;
	is_numeric = 1;
	while (str[cur] != 0)
	{
		if (str[cur] < 48 || str[cur] > 57)
		{
			is_numeric = 0;
		}
		cur++;
	}
	return (is_numeric);
}
