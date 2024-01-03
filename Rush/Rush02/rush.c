/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:28:39 by fsacufun          #+#    #+#             */
/*   Updated: 2023/12/03 18:28:41 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush(char *dict, char *num)
{
	char	*buffer;

	buffer = ft_open_read(dict);
	if (!buffer)
	{
		free(buffer);
		return ;
	}
	print_all(buffer, num);
	free(buffer);
}
