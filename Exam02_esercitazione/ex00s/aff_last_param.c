/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:35:48 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/28 22:46:36 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	f;

	i = ac - 1;
	f = 0;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		while (av[i][f] != '\0')
		{
			write(1, &av[i][f], 1);
			f++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
