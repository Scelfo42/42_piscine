/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:57:50 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/28 23:10:27 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DA CAPIRE ANCORA!!!!
 *
 *
 *
#include <stdio.h>
int		ft_atoi(const char *str)
{
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}

int main(void)
{
    char S[] = "-12345";
 
    printf("%d", ft_atoi(S));
 
    return (0);
}

*/
