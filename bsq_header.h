/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <ssulkuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:28:30 by amann             #+#    #+#             */
/*   Updated: 2021/07/27 16:21:56 by ssulkuma         ###   ########.fr       */
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
void	checksquare(char *str, int i);
void	ft_putnbr(int nb);
int		print_error(void);
int		check_valid_map(char *map);
void	update_best(int counter, int i);
int		ft_atoi(char *str);
void	ft_key(char *str);
void	ft_print_solution(char *str);

int		g_current_best;
int		g_solution_location;
int		g_lines;
int		g_line_length;
char	g_empty;
char	g_full;
char	g_obstacle;
#endif
