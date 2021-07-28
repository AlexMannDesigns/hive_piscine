/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <ssulkuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:35:45 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 16:27:11 by ssulkuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*ft_realloc(char *str, int size)
{
	int		i;
	char	*temp;

	if (!(temp = malloc(size)))
		return (0);
	i = 0;
	while (i < (size / 2))
	{
		temp[i] = str[i];
		i++;
	}
	free(str);
	return (temp);
}
