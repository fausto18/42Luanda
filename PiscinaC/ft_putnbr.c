/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsacufun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:12:02 by fsacufun          #+#    #+#             */
/*   Updated: 2023/11/19 16:34:56 by fsacufun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
    {
	    ft_putchar('-');
	    if (n == -2147483648)
        {
		ft_putchar('2');
		n = -147483648;
        }
	    n = -n;
    }
	if (n >= 10)
	ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(void)
{
	int	number = 42;
	ft_putnbr(number);
	ft_putchar('\n');
	return (0);
}
