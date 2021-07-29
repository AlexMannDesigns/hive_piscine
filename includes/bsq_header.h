/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amann <amann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 08:28:30 by amann             #+#    #+#             */
/*   Updated: 2021/07/29 07:07:00 by amann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_read(char *filename);
char	*ft_realloc(char *str, int size);
char	*ft_malloc_exact(char *str, int len);
void	ft_solve(char *str);
int		ft_strlen(char *str);
void	checksquare(char *str, int i, int c, int j);
void	ft_putnbr(int nb);
int		print_error(void);
int		check_valid_map(char *map);
void	update_best(int c, int i);
int		ft_atoi(char *str);
void	ft_key(char *str);
void	ft_print_solution(char *str);
void	one_line(char *str, int i);
char	*ft_read_stdin(void);
void	ft_process_map(char *str);
int		check_errno(void);
int		string_checker(char *str);

int		g_current_best;
int		g_solution_location;
int		g_lines;
int		g_line_length;
char	g_empty;
char	g_full;
char	g_obstacle;
#endif
