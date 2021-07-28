/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:51:16 by amann             #+#    #+#             */
/*   Updated: 2021/07/28 08:42:32 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*read_open(char *str, int fd, int size)
{
	char	c;
	int		read_fd;
	int		i;

	i = 0;
	while ((read_fd = read(fd, &c, 1)))
	{
		if (read_fd == -1)
		{
			write(2, "Read failed\n", 12);
			exit(read_fd);
		}
		str[i] = c;
		i++;
		if (i >= size)
		{
			size *= 2;
			str = ft_realloc(str, size);
		}
	}
	str[i] = '\0';
	return (str);
}

char	*ft_read(char *filename)
{
	char	*str;
	int		fd;
	int		size;
	int		len;

	if (!(str = malloc(sizeof(char*))))
		return (0);
	size = sizeof(char*);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Open failed\n", 12);
		exit(fd);
	}
	str = read_open(str, fd, size);
	close(fd);
	len = ft_strlen(str);
	if (len == 0)
	{
		print_error();
		return (0);
	}
	str = ft_malloc_exact(str, len);
	return (str);
}
