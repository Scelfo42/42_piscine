/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:42:07 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/17 17:43:50 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printout(int n, int *arr, int a);
void	ft_incr(int n, int *arr);
void	ft_print_combn(int n);

void	myprint(char c)
{
	write (1, &c, 1);
}

void	printout(int n, int *arr, int a)
{
	int	i;

	if (a == 1)
	{
		myprint(',');
		myprint(' ');
	}
	i = 0;
	while (i < n)
	{
		myprint(arr[i] + '0');
		i++;
	}
}

void	ft_incr(int n, int *arr)
{
	int	i;
	int	vmax;

	i = n - 1;
	vmax = 9;
	while (arr[i] == vmax)
	{
		i -= 1;
		vmax -= 1;
	}
	arr[i] += 1;
	while (i < n)
	{
		arr[i + 1] = arr[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	printout(n, arr, 0);
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
		{
			arr[n - 1] += 1;
		}
		else
		{
			ft_incr(n, arr);
		}
		printout(n, arr, 1);
	}
}
