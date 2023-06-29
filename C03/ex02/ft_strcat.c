/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:41:14 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/02 19:31:21 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	f;
	int	s;

	f = 0;
	while (dest[f] != '\0')
		f++;
	s = 0;
	while (src[s] != '\0')
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
	printf("%s", ft_strcat(dest, src));
}
*/
