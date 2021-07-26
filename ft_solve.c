/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 09:30:18 by amann             #+#    #+#             */
/*   Updated: 2021/07/26 09:36:48 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	ft_solve(char *str)
{
	char	lines;
	char	empty;
	char	obstacle;
	char	full;
	int		i;

	lines = str[0]; //convert to integer ATOI
	empty = str[1];
	obstacle = str[2];
	full = str[3];
	i = 0;
	while (i < 4)
	{
		ft_putchar(str[i]);
		i++;
	}
		
}
