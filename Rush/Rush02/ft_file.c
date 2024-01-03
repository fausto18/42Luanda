/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:24:22 by fsacufun          #+#    #+#             */
/*   Updated: 2023/12/03 18:24:25 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_open_read(char *dict)
{
	int		fd;
	char	*buffer;
	int		file_read;
	int		file_size;

	buffer = (char *)malloc((sizeof(char) * 2048));
	if (!buffer)
	{
		dict_error();
		return (0);
	}
	file_size = 0;
	fd = open(dict, O_RDONLY);
	file_read = read(fd, buffer, 2048);
	if (file_read == -1)
	{
		dict_error();
		return (0);
	}
	else
	{
		file_size = file_read;
		close(fd);
	}
	return (buffer);
}

void	ft_write_str(char *num, char *buffer, int last)
{
	int		i;
	int		size;
	char	*start_str;

	start_str = ft_strstr(buffer, num);
	size = ft_strlen(num);
	i = 0;
	while (start_str[i] && start_str[i] != '\n')
	{
		while (start_str[i] != ':')
			i++;
		if (start_str[i] == ':')
			i++;
		while (start_str[i] == ' ')
			i++;
		while (start_str[i] >= 32 && start_str[i] <= 126)
		{
			write(1, &start_str[i], 1);
			i++;
		}
	}
	if (last != 0)
		write(1, " ", 1);
}

void	ft_write_char(char c, char *buffer, int end)
{
	int		i;
	int		size;
	char	*start_str;
	char	num[2];

	num[0] = c;
	start_str = ft_strstr(buffer, num);
	size = ft_strlen(num);
	i = 0;
	while (start_str[i] && start_str[i] != '\n')
	{
		while (start_str[i] != ':')
			i++;
		if (start_str[i] == ':')
			i++;
		while (start_str[i] == ' ')
			i++;
		while (start_str[i] >= 32 && start_str[i] <= 126)
		{
			write(1, &start_str[i], 1);
			i++;
		}
	}
	if (end == 0)
		write(1, " ", 1);
}
