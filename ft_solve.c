/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 09:30:18 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 08:30:21 by amann            ###   ########.fr       */
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

	g_current_best = 0;
	
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
	line_length++;
	i = i - line_length;
	while (str[i] != '\0')
	{
		if (str[i] == empty)
		{
			checksquare(str, i, line_length, empty);
		}
		i++;
	}
}

void	checksquare(char *str, int i, int line_length, char empty)
{
	int counter;
	int j;
	
	counter = 1;
	while (counter < 9)
	{
		if ((str[i + counter]) == empty)
		{
			if ((str[i + (line_length * counter)]) == empty)
			{
				if ((str[i + (line_length * counter) + counter]) == empty)
				{
					j = counter - 1;
					while (j > 0)	
					{
						if ((str[i + (line_length * j) + counter]) == empty)
						{
							if ((str[i + (line_length * counter) + j]) == empty)
							{
								j--;
							}
							else
								return;
						}
						else
							return;
					}
				}
				else
					return;
			}
			else
				return;	
		}
		else
			return;
		update_best(counter, i);
		counter++;
	}
	return;
}

void	update_best(int counter, int i)
{
	if (!g_current_best || counter + 1 > g_current_best)
	{
		g_current_best = counter + 1;
		g_solution_location = i;
		ft_putstr("{ location: ");
		ft_putnbr(i);
		ft_putstr(" | score: ");
		ft_putnbr(g_current_best);
		ft_putstr(" }");
		ft_putchar('\n');
	}
	return;
}
