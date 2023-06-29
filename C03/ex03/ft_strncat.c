/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:41:49 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/31 00:07:32 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	f;
	unsigned int	s;

	f = 0;
	while (dest[f] != '\0')
		f++;
	s = 0;
	while (s < nb && src[s] != '\0')
	{
		dest[f] = src[s];
		f++;
		s++;
	}
	dest[f] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "Benguerir";
	char dest[] = "1337";
	printf("%s", ft_strncat(dest, src, 5));
}
*/
