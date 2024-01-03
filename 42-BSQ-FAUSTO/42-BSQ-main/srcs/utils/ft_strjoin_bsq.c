/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bsq.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:22:35 by fsacufun          #+#    #+#             */
/*   Updated: 2023/12/04 16:22:36 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/bsq.h"

static int	ft_strcpy(char *dst, const char *src, const size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

char	*ft_strjoin_bsq(char *s1, const size_t size1,
		char *s2, const size_t size2)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!res)
		return (NULL);
	ft_strcpy(res, s1, size1);
	ft_strcpy(&res[size1], s2, size2);
	free(s1);
	return (res);
}
