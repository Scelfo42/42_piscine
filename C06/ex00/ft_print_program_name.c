/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:35:49 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/04 14:06:20 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	p;

	p = 0;
	if (ac)
	{
		while (av[0][p] != '\0')
		{
			ft_putchar(av[0][p]);
			p++;
		}
	}
}
