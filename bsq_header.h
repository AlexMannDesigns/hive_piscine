/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:28:30 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 08:35:22 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_read(char *filename);
char	*ft_realloc(char *str, int size);
char	*ft_malloc_exact(char *str, int len);
void	ft_solve(char *str);
int		ft_strlen(char *str);
void	checksquare(char *str, int i, int line_length, char empty);
void	ft_putnbr(int nb);
int		print_error(void);
int		check_valid_map(char *map, int line_length, int line_height);
void	update_best(int counter, int i);

int		g_current_best;
int		g_solution_location;
#endif