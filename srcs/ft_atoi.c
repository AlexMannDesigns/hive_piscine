/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:11:43 by emende            #+#    #+#             */
/*   Updated: 2021/07/27 08:55:15 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		ft_atoi_special(char *str, int i)
{
	while (str[i] == '\f' || str[i] == '\n' ||
	str[i] == '\r' || str[i] == '\t' || str[i] == '\v' ||
	str[i] == ' ')
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int n;

	sign = 1;
	i = 0;
	n = 0;
	i = ft_atoi_special(str, i);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] - '0' < 0 || str[i] - '0' > 9)
			return (sign * n);
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (sign * n);
}
