/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:08:51 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/20 21:45:49 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	b;
	int	check;
	int	veg;

	i = 0;
	check = 1;
	while (check)
	{
		i = 0;
		check = 0;
		while (i < (size - 1))
		{
			veg = i + 1;
			if (tab[i] > tab[veg])
			{
				b = tab[veg];
				tab[veg] = tab[i];
				tab[i] = b;
				check = 1;
			}
			i++;
		}
	}
}
