/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:07:46 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/31 16:30:06 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bandierina;

	i = 0;
	ft_lowercase(str);
	bandierina = 1;
	while (str[i] != '\0')
	{
		if ((bandierina == 1 && str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
			bandierina = 0;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
			bandierina = 0;
		else
			bandierina = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
*/
