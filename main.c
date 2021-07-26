/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:27:23 by amann             #+#    #+#             */
/*   Updated: 2021/07/26 09:29:48 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
	
	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		str = ft_read(argv[i]);
		ft_solve(str);
		i++;
	}
	//error handling - valid pattern
	return (0);
}
