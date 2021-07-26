/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:51:16 by amann             #+#    #+#             */
/*   Updated: 2021/07/26 10:55:32 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

#define BUF_SIZE 32000

char	*ft_read(char *filename)
{
	char	*buf;
	int		ret;
	int		fd;
	
	buf = malloc(sizeof(char*));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Open failed\n");
		return 0;
	}
	while ((ret = read(fd, buf, 10))) 
	{	
		buf[ret] = '\0';
		return (buf);
	}
	return (0);
}
