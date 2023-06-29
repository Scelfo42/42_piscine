/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:43:07 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/31 11:50:19 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	ii;

	slen = ft_strlen(src);
	ii = 0;
	if (size != 0)
	{
		while (src[ii] != '\0' && ii < size - 1)
		{
			dest[ii] = src[ii];
			ii++;
		}
		dest[ii] = '\0';
	}
	return (slen);
}
