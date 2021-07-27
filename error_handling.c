/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <ssulkuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 07:30:34 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/07/27 11:13:04 by ssulkuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		print_error(void)
{
	write(2, "Error.\n", 7);
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