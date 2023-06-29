/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 00:22:02 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/04 13:48:21 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	else
		return (0);
	return (fact);
}
/*
int	main()
{
	int	nb;  
	int	Fact;

	nb = 5;
	Fact = ft_iterative_factorial(nb);
	printf("Iterative factorial of %d is %d\n", nb, Fact);
	return (0);
}
*/
