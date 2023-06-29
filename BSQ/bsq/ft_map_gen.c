/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_gen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:25:53 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/03 17:35:58 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BBQ.h"

int	ft_map_count(char *file) //conteggio grandezza mappa
{
	int		fd;
	int		count;
	int		check;
	char	*c;

	count = 0;
	check = 0;
	c = malloc (sizeof(char));
	fd = open(file, O_RDONLY);
	while (read(fd, c, 1))
	{
		if (check == 1)
			count++;
		if (*c == '\n')
			check = 1;
	}
	free(c);
	close(fd);
	return (count);
}

int	ft_head(char *file) //far capire al programma che il numero nell'head non e' un char ma un int
{
	char	*c;
	char	*n;
	int		count;
	int		fd;
	int		h;

	fd = open(file, O_RDONLY);
	count = 0;
	c = malloc (sizeof(char));
	while (*c != '\n')
	{
		read(fd, c, 1);
		count++;
	}
	close(fd);
	n = malloc (sizeof(char) * (count - 4));
	fd = open(file, O_RDONLY);
	read(fd, n, count - 4);
	h = ft_atoi(n);
	close(fd);
	free(n);
	free(c);
	return (h);
}

/*char	**ft_mat_create(char *file, char *str, char **mat) //creazione matrice poco chiara
{
	int	x;
	int	y;
	int	i;

	i = 0;
	x = 0;
	while (str[x] != '\n')
		x++;
	y = ft_head(file);
	mat = malloc (y * sizeof(mat));
	while (i < y)
	{
		mat[i] = malloc (x * sizeof(char));
		i++;
	}
	return (ft_pop(str, mat, x, y));
}*/

void	ft_map_gen(char *file, char **mat) //generazione mappa con grandezza e lettura del file
{
	char	*str;
	char	*c;
	int		count;
	int		fd;

	fd = open(file, O_RDONLY);
	count = ft_map_count(file);
	c = malloc (sizeof(char));
	str = malloc (sizeof(char) * count);
	while (*c != '\n')
		read(fd, c, 1);
	read(fd, str, count);
	//mat = ft_mat_create(file, str, mat);
	free(c);
	close(fd);
}
