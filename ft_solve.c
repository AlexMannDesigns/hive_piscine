/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 09:30:18 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 18:05:43 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	ft_solve(char *str)
{
	int		i;

	g_current_best = 0;
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i++;
	if (g_lines == 1 || g_lines <= g_line_length)
		one_line(str, i);
	while (str[i] != '\0')
	{
		if (str[i] == g_empty)
		{
			checksquare(str, i);
		}
		i++;
	}
}

void	checksquare(char *str, int i)
{
	int c;
	int j;

	c = 1;
	while (c < g_lines)
	{
		if ((str[i + c]) == g_empty)
			if ((str[i + (g_line_length * c)]) == g_empty)
				if ((str[i + (g_line_length * c) + c]) == g_empty)
				{
					j = c - 1;
					while (j > 0)
					{
						if ((str[i + (g_line_length * j) + c]) == g_empty)
							if ((str[i + (g_line_length * c) + j]) == g_empty)
								j--;
							else
								return ;
						else
							return ;
					}
				}
				else
					return ;
			else
				return ;
		else
			return ;
		update_best(c, i);
		c++;
	}
	return ;
}

void	update_best(int c, int i)
{
	if (!g_current_best || c + 1 > g_current_best)
	{
		g_current_best = c + 1;
		g_solution_location = i;
	}
	return ;
}

void	one_line(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == g_empty)
		{
			update_best(0, i);
			return ;
		}
		else
			i++;
	}
}
