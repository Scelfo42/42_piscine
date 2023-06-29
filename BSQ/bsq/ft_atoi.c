/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:37:57 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/03 20:38:03 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_2(char *str, int i)
{
	int	n;
	int	multi;

	n = 0;
	multi = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n + (str[i] - 48) * multi;
		i--;
		multi = multi * 10;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i--;
	return (ft_atoi_2(str, i));
}
