/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:22:27 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/03 18:18:57 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BBQ.h"

char	**ft_pop(char *str, char **mat, int x, int y)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < y)
	{
		j = 0;
		while (j <= x)
		{
			mat[i][j] = str[k];
			j++;
			k++;
		}
		i++;
	}
	return (mat);
}
//popolazione senza condizioni di ostacoli o punti vuoti
