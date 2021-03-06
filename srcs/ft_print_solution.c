/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:57:25 by amann             #+#    #+#             */
/*   Updated: 2021/07/28 12:26:19 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		print_two(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i++;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

void	ft_print_solution(char *str)
{
	int i;
	int j;

	str[g_solution_location] = g_full;
	i = 1;
	while (i < g_current_best)
	{
		str[g_solution_location + i] = g_full;
		str[g_solution_location + (g_line_length * i)] = g_full;
		str[g_solution_location + (g_line_length * i) + i] = g_full;
		j = i - 1;
		while (j > 0)
		{
			str[g_solution_location + (g_line_length * j) + i] = g_full;
			str[g_solution_location + (g_line_length * i) + j] = g_full;
			j--;
		}
		i++;
	}
	print_two(str);
}
