/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <ssulkuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 07:30:34 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/07/27 07:58:34 by ssulkuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		print_error(void)
{
	write(2, "Error.\n", 7);
	return (1);
}

int		check_valid_map(char *map, int line_length, int line_height)
{
	if ()
}
