/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:43:12 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/01 14:02:33 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	bob;

	slen = ft_strlen(src);
	bob = 0;
	if (size != 0)
	{
		while (src[bob] != '\0' && bob < size - 1)
		{
			dest[slen] = src[bob];
			bob++;
		}
		dest[slen] = '\0';
	}
	return (dest[slen] + src[bob]);
}
/*
int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}
*/
