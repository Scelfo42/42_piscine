/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:07:47 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/16 17:40:20 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	poligono(int lun, char s, char m, char d)
{
	int	ascisse;

	ascisse = 0;
	while (ascisse < lun)
	{
		if (ascisse == 0)
			ft_putchar(s);
		else if (ascisse == lun - 1)
			ft_putchar(d);
		else
			ft_putchar(m);
		ascisse++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	ordinate;

	ordinate = 0;
	if (x <= 0 || y <= 0)
	{
		write (1, &"Nuova ipotesi sul Big Bang: ", 29);
		write (1, &"Dio digitò 'pkunzip Universo'.", 31);
		ft_putchar('\n');
	}
	else
	{
		while (ordinate < y)
		{
			if (ordinate == 0)
				poligono(x, 'A', 'B', 'A');
			else if (ordinate == y - 1)
				poligono(x, 'C', 'B', 'C');
			else
				poligono(x, 'B', ' ', 'B');
			ordinate++;
		}
	}
}
