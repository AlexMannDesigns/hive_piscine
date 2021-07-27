/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 07:30:34 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/07/27 14:55:52 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		print_error(void)
{
	write(2, "map error\n", 10);
	return (1);
}

int		check_valid_lines(char *map)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			counter++;
		i++;
	}
	if (counter != g_lines + 1)
	{
		print_error();
		return (0);
	}
	return (1);
}

int		check_valid_length(char *map)
{
	int i;
	int counter;

	i = 0;
	while (map[i] != '\n')
	{
		i++;
	}
	i++;
	while (map[i] != '\0')
	{
		counter = 0;
		while (map[i] != '\n')
		{
			if (map[i] != g_empty && map[i] != g_obstacle)
			{
				print_error();
				return (0);	
			}
			counter++;
			i++;
		}
		if (counter != g_line_length - 1)
		{
			print_error();
			return (0);
		}
		i++;
	}
	return (1);
}

int		check_valid_map(char *map)
{
	if (!check_valid_lines(map))
		return (0);
	if (!check_valid_length(map))
		return (0);
	return (1);
}