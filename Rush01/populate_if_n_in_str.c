/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_if_n_in_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:15:32 by ggiannit          #+#    #+#             */
/*   Updated: 2022/07/24 18:10:46 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_scale(char **matrix, int rule_pos, int a, int b,  int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		matrix[a][b] = char_is;
		if (rule_pos == 0)
			char_is++;
		else
			char_is--;
		start++;
	}
}



void	write_1_to_n(char **matrix, int row_col, int index, int rule_pos, int n)
{
	char	char_is;
	int	start;

	start = 0;
	if (rule_pos == 0)
	{
		char_is = '1';
	}
	else
	{
		char_is = (n + 48);
	}
	if (row_col == 0)
		print_scale(matrix, rule_pos, start, index, n);
	else
		print_scale(matrix, rule_pos, index, start, n);
}

int	populate_n(char **matrix, int row_col, int n)
{
	int	index;

	index = 0;
	if (row_col == 0)
	{		
		while (index < n)
		{
			if (matrix[n][index] == (n + 48))
				write_1_to_n(matrix, row_col, index, 0, n);
			if (matrix[n + 1][index] == (n + 48))
				write_1_to_n(matrix, row_col, index, 1, n);
			index++;
		}polulate_n()
	}
	else
	{		
		while (index < n)
		{
			if (matrix[index][n] == (n + 48))
				write_1_to_n(matrix, row_col, index, 0, n);
			if (matrix[index][n + 1] == (n + 48))
				write_1_to_n(matrix, row_col, index, 1, n);
			index++;
		}
	}
}

int	does_n_exist(char *str, int n)
{
	int	index;

	while (str[index] != '\0')
	{
		if (str[index] == (n + 48))
			return (1);
		index++;
	}
	return (0);
}


void	populate_if_n_in_str(int n, char **matrix, char *str)
{
	int	exist_n;

	exist_n = does_n_exist(str, n);
	if (exist_n)
	{
		row_col = 0;
		polulate_n(**matrix, row_col, n);	
		row_col = 1;
		populate_n(**matrix, row_col, n);
	}
}
