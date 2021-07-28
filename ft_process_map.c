/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:11:17 by amann             #+#    #+#             */
/*   Updated: 2021/07/28 08:13:07 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	ft_process_map(char *str)
{
	if (str)
	{
		ft_key(str);
		if (check_valid_map(str))
		{
			ft_solve(str);
			ft_print_solution(str);
		}
	}
}