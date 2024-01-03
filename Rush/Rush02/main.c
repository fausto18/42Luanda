/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:27:51 by fsacufun          #+#    #+#             */
/*   Updated: 2023/12/03 18:27:54 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	throw_error(void)
{
	write(2, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	char	*num;

	if (argc > 3 || argc == 1)
		throw_error();
	else if (argc == 2)
	{
		num = unique_num(argv[1]);
		if (is_valid_num(num))
			rush(DICT_FILE, num);
		free(num);
	}
	else if (argc == 3)
	{
		num = unique_num(argv[2]);
		if (is_valid_num(num))
			rush(argv[1], num);
		free(num);
	}
	return (0);
}
