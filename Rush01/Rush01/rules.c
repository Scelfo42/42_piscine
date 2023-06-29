/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:43:34 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/24 18:13:36 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*work in progress*/


int	ft_sum(int n)
{
	int	sum;

	sum = 0;
	while (n >= 1)
	{
		sum = n + (n - 1);
		n -= 2;
	}
	return (sum);
}

int	one_to_n(char **argv, int n)
{
	int	i;

	i = 0;
	while (i <= (n - 1) || (i >= (2 * n) && i <= (3 * n) - 1))
	{
		if (i = (n - 1))
			i = 2 * n;
		if (argv[1][i + n] - argv[1][i] <= n + 1 && argv[1][i + n] - argv[1][i] >= 3) 
			i++;
		else
			return (-1);
	}
	return (1);
}  
