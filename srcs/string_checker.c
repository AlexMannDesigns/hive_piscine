/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 07:05:33 by amann             #+#    #+#             */
/*   Updated: 2021/07/29 07:30:09 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		string_checker(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\n')
	{
		if (str[i] == '\0')
		{
			print_error();
			return (0);
		}
		i++;
	}
	return (1);
}
