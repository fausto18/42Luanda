/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:52:32 by fsacufun          #+#    #+#             */
/*   Updated: 2023/11/22 18:41:39 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ol_strlen(char *str)
{
	unsigned int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		cur++;
	}
	return (cur);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cur;

	if (size == 0)
	{
		return (ol_strlen(src));
	}
	cur = 0;
	while (src[cur] != 0 && cur < (size - 1))
	{
		dest[cur] = src[cur];
		cur++;
	}
	dest[cur] = 0;
	return (ol_strlen(src));
}
