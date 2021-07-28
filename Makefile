# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amann <amann@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 08:27:54 by amann             #+#    #+#              #
#    Updated: 2021/07/28 08:23:06 by amann            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall -Wextra -Werror
C_FILES = main.c functions.c ft_solve.c ft_realloc.c ft_read.c ft_malloc_exact.c\
	ft_key.c ft_atoi.c error_handling.c ft_print_solution.c ft_process_map.c\
	ft_read_stdin.c

.PHONY = all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(C_FILES) -o $(NAME)

clean:
	rm -f *~

fclean:
	rm -f $(NAME)

re: fclean all
