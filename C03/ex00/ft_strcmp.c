/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:39:57 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/31 00:07:47 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("str2 bigger than str1 = %d\n", ft_strcmp("ABC", "BCD"));
	printf("str1 bigger than str2 = %d\n", ft_strcmp("Bb", "Aa"));
	printf("opposite of the 2nd = %d\n", ft_strcmp("Aa", "Bb"));
	printf("same value = %d\n", ft_strcmp("AA", "AA"));
}
*/
