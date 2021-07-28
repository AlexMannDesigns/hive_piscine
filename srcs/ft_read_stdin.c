/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:33:44 by amann             #+#    #+#             */
/*   Updated: 2021/07/28 19:50:30 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

char	*read_open_stdin(char *str, int fd, int size)
{
	char	c;
	int		read_fd;
	int		i;

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
		write(2, "Read failed\n", 12);
		return (0);
	}
	str[i] = '\0';
	return (str);
}

char	*ft_read_stdin(void)
{
	char	*str;
	int		size;
	int		len;

	if (!(str = malloc(sizeof(char*))))
		return (0);
	size = sizeof(char*);
	str = read_open_stdin(str, 0, size);
	len = ft_strlen(str);
	if (len == 0)
	{
		print_error();
		return (0);
	}
	str = ft_malloc_exact(str, len);
	return (str);
}
