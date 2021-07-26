/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 09:30:18 by amann             #+#    #+#             */
/*   Updated: 2021/07/26 18:08:07 by amann            ###   ########.fr       */
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
	int		line_length;
	
	lines = str[0]; //convert to integer ATOI - check for 2+ digit numbers
	empty = str[1];
	obstacle = str[2];
	full = str[3];
	
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i++;
	line_length = 0;
	while (str[i] != '\n')
	{
		line_length++;
		i++;
	}
	i = i - line_length;
	
	while (str[i] != '\0')
	{
		if (str[i] == empty)
		{
			checksquare(str, i, line_length);
		}
		else if (str[i] == obstacle)
		{
			ft_putstr("this is an obstacle!\n");	
		}
		i++;
	}
	
}

void	checksquare(char *str, int i, int line_length)
{
	int solution_start;
	int size;
	
	solution_start = i;
	size = 1;
	
	while (size < 9)
	{
		if ((i + size) == empty)
		{
			i = i + line_length;
			if (i == empty && (i + size) == empty)
			{
				size++;	
			}
			else
			{
				i = i - line_length;
				return;
			}
		}
		else
		{
			i++;
			return; 
		}
	}
	
	return;
}
