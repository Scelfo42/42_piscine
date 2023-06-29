/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:36:22 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/02 16:51:51 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
/*
int		main(void)
{
    printf(" (printed) should be 1");
    ft_putnbr(1);
    printf("\n (printed) should be 0");
    ft_putnbr(0);
    printf("\n (printed) should be -1");
    ft_putnbr(-1);
    printf("\n (printed) should be 2147483647");
    ft_putnbr(2147483647);
    printf("\n (printed) should be -21474836478");
    ft_putnbr(-2147483648);
    printf("\n");
    return (0);
}
*/
