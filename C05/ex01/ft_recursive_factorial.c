/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:06:32 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/04 14:14:00 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
		{
			return (1);
		}
	}
	else
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main()
{
	int	nb;
	int	recFact;

	nb = 3;
	recFact = ft_recursive_factorial(nb);
	printf("Recursive factorial of %d is %d\n", nb, recFact);
	return (0);
}
*/
