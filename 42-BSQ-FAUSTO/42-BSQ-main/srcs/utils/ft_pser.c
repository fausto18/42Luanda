/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pser.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:22:29 by fsacufun          #+#    #+#             */
/*   Updated: 2023/12/04 16:22:31 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	ft_pser(char *str)
{
	(void)!write(2, str, ft_strlen(str));
	return (false);
}
