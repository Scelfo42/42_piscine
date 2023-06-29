/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:40:34 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/02 19:34:09 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int     main()
{
        printf("str2 bigger than str1 = %d\n", ft_strncmp("B", "C", 1));
        printf("str1 bigger than str2 = %d\n", ft_strncmp("B", "A", 1));
        printf("opposite of the 2nd = %d\n", ft_strncmp("A", "B", 1));
        printf("same value = %d\n", ft_strncmp("A", "A", 1));
}
*/
