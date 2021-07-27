/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 08:53:00 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 09:59:30 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		number_of_lines(char *str)
{
	int		count_numerical;
	int		i;
	char	*lines;
	int		line_number;

	count_numerical = 0;
    while (str[count_numerical] > 47 && str[count_numerical] < 58)
    {
        count_numerical++;
    }
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
	g_empty = str[i - 3];
	i++;
	g_line_length = 0;
	while (str[i] != '\n')
	{
		g_line_length++;
		i++;
	}
	g_line_length++;
}
