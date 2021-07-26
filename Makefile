# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssulkuma <ssulkuma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 08:27:54 by amann             #+#    #+#              #
#    Updated: 2021/07/26 14:53:14 by ssulkuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FLAGS = -Wall -Wextra -Werror
C_FILES = 

.PHONY = all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(C_FILES) -o $(NAME)

clean:
	rm -f

flcean: clean
	rm -f $(NAME)

re: fclean all
