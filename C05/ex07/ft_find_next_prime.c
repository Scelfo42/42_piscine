/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 23:00:08 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/04 18:49:17 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;
	int	flag;

	flag = 0;
	prime = 2;
	if (nb >= 2)
	{
		while (prime < nb / 2)
		{
			if (nb % prime == 0)
				return (0);
			prime++;
		}
		if (flag == 0)
			return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	inc;

	inc = 1;
	if (nb <= 1)
		return (2);
	else if (nb >= 2)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
		{
			while (ft_is_prime(nb + inc) == 0)
				inc++;
			return (nb + inc);
		}
	}
	return (2);
}
