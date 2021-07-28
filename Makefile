# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amann <amann@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 08:27:54 by amann             #+#    #+#              #
#    Updated: 2021/07/28 19:21:17 by amann            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCDIR = srcs/
HEADDIR = includes
FLAGS = -Wall -Wextra -Werror
C_FILES = $(SRCDIR)main.c \
		$(SRCDIR)functions.c \
		$(SRCDIR)ft_solve.c \
		$(SRCDIR)ft_realloc.c \
		$(SRCDIR)ft_read.c \
		$(SRCDIR)ft_malloc_exact.c \
		$(SRCDIR)ft_key.c \
		$(SRCDIR)ft_atoi.c \
		$(SRCDIR)error_handling.c \
		$(SRCDIR)ft_print_solution.c \
		$(SRCDIR)ft_process_map.c\
		$(SRCDIR)ft_read_stdin.c \

OBJ =	main.o \
		functions.o \
		ft_solve.o \
		ft_realloc.o \
		ft_read.o \
		ft_malloc_exact.o \
		ft_key.o \
		ft_atoi.o \
		error_handling.o \
		ft_print_solution.o \
		ft_process_map.o \
		ft_read_stdin.o \

.PHONY = all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c -I$(HEADDIR) $(C_FILES)
	gcc $(FLAGS) $(OBJ) -o $(NAME) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
