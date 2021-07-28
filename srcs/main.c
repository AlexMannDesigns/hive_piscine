/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:27:23 by amann             #+#    #+#             */
/*   Updated: 2021/07/28 19:38:49 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc < 2)
	{
		str = ft_read_stdin();
		ft_putstr("\n");
		ft_process_map(str);
	}
	i = 1;
	while (i < argc)
	{
		errno = 0;
		str = ft_read(argv[i]);
		ft_process_map(str);
		if (i != (argc - 1))
			ft_putstr("\n");
		i++;
	}
	return (0);
}
