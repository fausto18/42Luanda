/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devarist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:03:20 by devarist          #+#    #+#             */
/*   Updated: 2023/12/05 14:03:23 by devarist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_lenstrs(int size, char **strs, char *sep)
{
	int	i;
	int	comp;

	i = 0;
	comp = 0;
	while (i < size)
	{
		comp += ft_strlen(strs[i]);
		i++;
	}
	comp += ft_strlen(sep) * (size - 1);
	return (comp);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*temp;
	int		num1;

	num1 = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str = (char *)malloc(sizeof(char) * (ft_lenstrs(size, strs, sep) + 1));
	if (!str)
		return (0);
	temp = str;
	while (num1 < size)
	{
		ft_strcpy(temp, strs[num1]);
		temp += ft_strlen(strs[num1]);
		if (num1 < size -1)
		{
			ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		}
		num1++;
	}
	*temp = '\0';
	return (str);
}
