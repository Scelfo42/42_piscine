/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_one_in_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:08:59 by cscelfo           #+#    #+#             */
/*   Updated: 2022/07/24 18:13:04 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	populate_one(char **matrix, int row_col, int n)
{
	int	index;

	index = 0;
	if (row_col == 0)
	{		
		while (index < n)
		{
			if (matrix[n][index] == '1')
				matrix[0][index] = n + 48;
			if (matrix[n + 1][index] == '1')
				matrix[n - 1][index] = n + 48;
				index++;
		}
	}
	else
	{		
		while (index < n)
		{
			if (matrix[index][n] == '1')
				matrix[index][0] = n + 48;
			if (matrix[index][n + 1] == '1')
				matrix[index][n - 1] = n + 48;
				index++;
		}
	}
}

int	populate_if_two_and_one(char **matrix, int row_col, int n)
{
	int	index;

	index = 0;
	if (row_col == 0)
	{		
		while (index < n)
		{
			if (matrix[n][index] == '1' && matrix[n + 1][index] == '2')
				matrix[n - 1][index] = (n - 1) + 48;
			if (matrix[index][n] == '1' && matrix[index][n + 1] == '2')
				matrix[index][n - 1] = (n - 1) + 48;
			index++;
		}
	}
	else
	{		
		while (index < n)
		{
			if (matrix[index][n] == '1' && matrix[index][n + 1] == '2')
				matrix[index][n - 1] = (n - 1) + 48;
			if (matrix[index][n + 1] == '1' && matrix[index][n] == '2')
				matrix[index][n - 1] = (n - 1) + 48;
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


void	populate_one_in_str(int n, char *str)
{
	int	row_col;

	row_col = 0;
	polulate_one(matrix, row_col, n);	
	populate_if_two_and_one(matrix, row_col, n);
	row_col = 1;
	populate_one(matrix, row_col, n);
	populate_if_two_and_one(matrix, row_col, n);
}
