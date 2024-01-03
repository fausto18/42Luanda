/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:13:54 by fsacufun          #+#    #+#             */
/*   Updated: 2023/11/26 20:14:20 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_atoi(char *str);

int		ft_strlen(char *str);

int		*get_numbers(char *str);

int		check(int ac, char **av);

int		check_double(int tab[4][4], int pos, int num);

int		check_case(int tab[4][4], int pos, int entry[16]);

int	check_input(char **av)
{
	int	i;

	i = 0;
	while (av[1][i] != '\0')
	{
		if (ft_strlen(av[1]) != 31)
			return (0);
		else if (!(av[1][i] > '0' && av[1][i] < '5') && (av[1][i] != 32))
			return (0);
		else if ((av[1][0] == 32) || ((av[1][ft_strlen(av[1]) - 1] == 32)))
			return (0);
		else if (av[1][i] == 32 && av[1][i + 1] == 32)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int tab[4][4], int entry[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check_case(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	display_solution(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	*entry;

	if (ac == 2)
	{
		if (check_input(av) != 1)
		{
			ft_putstr("Error\n");
			return (0);
		}
		entry = get_numbers(av[1]);
		if (solve(tab, entry, 0) == 1)
			display_solution(tab);
		else
			ft_putstr("Error\n");
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
