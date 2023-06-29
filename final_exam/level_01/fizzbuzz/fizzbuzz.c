/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:44:27 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/04 15:15:44 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n)
{
	if (n > 9)
		ft_print_numbers(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else if (n % 3 == 0 && n % 5 == 0)
                        write(1, "fizzbuzz", 8);
		else
			ft_print_numbers(n);
		write(1, "\n", 1);
		n++;
	}
}
