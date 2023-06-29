/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:42:28 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/02 19:33:38 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	f;
	int	s;

	f = 0;
	s = 0;
	if (to_find[s] == '\0')
		return (str);
	while (str[f] != '\0')
	{
		while (str[f + s] == to_find[s] && str[f + s] != '\0')
			s++;
		if (to_find[s] == '\0')
			return (str + f);
		f++;
		s = 0;
	}
	return (0);
}
/*
int	main()
{
	char str[] = "GeeksforGeeks";
	char to_find[] = "for";
	char *p;

	p = ft_strstr(str, to_find);
	if (p)
	{
		printf("String found\n");
 		printf("First occurrence of string '%s' in '%s' is '%s'", to_find, str, p);
    	}
       	else
        	printf("String not found\n");
     	return (0);
}
*/
