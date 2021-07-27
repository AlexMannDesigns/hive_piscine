/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:51:16 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 15:32:08 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*ft_read(char *filename)
{
	char	*str;
	char	c;
	int		fd;
	int		i;
	int		size;
	int		len;
	int		read_fd;
	
	if (!(str = malloc(sizeof(char*))))
		return (0);
	size = sizeof(char*);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Open failed\n");
		return (0);
	}
	i = 0;
	while ((read_fd = read(fd, &c, 1)))
	{
		str[i] = c;
		i++;
		if (i >= size)
		{
			size *= 2;
			str = ft_realloc(str, size);
		}
	}
	if (read_fd == -1)
	{
		ft_putstr("Read failed\n");
		return 0;
	}
	str[i] = '\0';
	len = ft_strlen(str);
	if (len == 0)
	{	
		print_error();
		return 0;
	}
	str = ft_malloc_exact(str, len);
	return (str);
}
