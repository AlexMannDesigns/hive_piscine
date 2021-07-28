/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 08:53:00 by amann             #+#    #+#             */
/*   Updated: 2021/07/28 19:10:49 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		check_key(int count, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	if (i - count != 3)
		return (0);
	return (1);
}

int		number_of_lines(char *str)
{
	int		count_numerical;
	int		i;
	char	*lines;
	int		line_number;

	count_numerical = 0;
	while (str[count_numerical] > 47 && str[count_numerical] < 58 &&
	str[count_numerical + 3] != '\n')
		count_numerical++;
	if (!(lines = malloc((sizeof(char) * count_numerical) + 1)))
		return (0);
	i = 0;
	while (i < count_numerical)
	{
		lines[i] = str[i];
		i++;
	}
	lines[i] = '\0';
	line_number = ft_atoi(lines);
	free(lines);
	if (!(check_key(count_numerical, str)))
		return (0);
	return (line_number);
}

void	ft_key(char *str)
{
	int		i;

	g_lines = number_of_lines(str);
	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	g_full = str[i - 1];
	g_obstacle = str[i - 2];
	g_empty = str[i - 3];
	i++;
	g_line_length = 0;
	while (str[i] != '\n')
	{
		if (str[i] == '\0')
		{
			return ;
		}
		g_line_length++;
		i++;
	}
	g_line_length++;
}
