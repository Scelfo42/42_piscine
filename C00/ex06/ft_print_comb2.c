/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:38:35 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/17 13:13:38 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	myprint(char a)
{
	write (1, &a, 1);
}

void	myconv(char c)
{
	int	coppia[2];

	if (c < 10)
	{
		coppia[0] = 0 + '0';
		coppia[1] = c + '0';
	}
	else
	{
		coppia[0] = c / 10 + '0';
		coppia[1] = c % 10 + '0';
	}
	myprint(coppia[0]);
	myprint(coppia[1]);
}

void	ft_print_comb2(void)
{
	char	b;
	char	c;

	b = 0;
	while (b <= 98)
	{
		c = b + 1;
		while (c <= 99)
		{
			myconv(b);
			myprint(' ');
			myconv(c);
			if (!(b == 98 && c == 99))
				write (1, ", ", 2);
			c++;
		}
		b++;
	}
}
