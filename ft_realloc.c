/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:35:45 by amann             #+#    #+#             */
/*   Updated: 2021/07/26 11:45:08 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*ft_realloc(char *str, int size)
{
	int i;
	char *temp;

	temp = malloc(size);
	i = 0;
	while (i < (size / 2))
	{
		temp[i] = str[i];
		i++;
	}
	free(str);
	return (temp);
}