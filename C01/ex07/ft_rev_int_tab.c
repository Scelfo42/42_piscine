/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:48:05 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/21 23:15:14 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	indice;
	int	medio;

	indice = 0;
	while (indice < (size / 2))
	{
		medio = tab[indice];
		tab[indice] = tab[size - 1 - indice];
		tab[size - 1 - indice] = medio;
		indice++;
	}
}
