/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 09:30:18 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 16:57:32 by amann            ###   ########.fr       */
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
	int counter;
	int j;
	
	counter = 1;
	while (counter < g_lines)
	{
		if ((str[i + counter]) == g_empty)
		{
			if ((str[i + (g_line_length * counter)]) == g_empty)
			{
				if ((str[i + (g_line_length * counter) + counter]) == g_empty)
				{
					j = counter - 1;
					while (j > 0)	
					{
						if ((str[i + (g_line_length * j) + counter]) == g_empty)
						{
							if ((str[i + (g_line_length * counter) + j]) == g_empty)
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
	}
	return;
}

void	one_line(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == g_empty)
		{
			update_best(0, i);
			return;
		}
		else
			i++;
	}
}
