/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:57:32 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/03 20:29:32 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	n;
	int	p;

	n = 1;
	p = 0;
	if (ac)
	{
		while (n < ac)
		{
			while (av[n][p] != '\0')
			{
				ft_putchar(av[n][p]);
				p++;
			}
			n++;
			p = 0;
			ft_putchar('\n');
		}
	}
}
