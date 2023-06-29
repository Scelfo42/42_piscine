/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BBQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:37:41 by cscelfo           #+#    #+#             */
/*   Updated: 2022/08/03 20:37:45 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BBQ_H
# define BBQ_H

# include "fcntl.h"
# include "stdlib.h"
# include "unistd.h"

void	ft_map_gen(char *file, char **mat);
void	ft_pop(char *str, char **mat, int x, int y);
int		ft_atoi(char *str);

#endif
