/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:46:56 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/04 18:53:22 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main()
{
	int	nb;
	int	power;

	nb = 5;
	power = 3;
	printf("%d^%d = %d \n", nb, power, ft_recursive_power(nb, power));
	return (0);
}
*/
