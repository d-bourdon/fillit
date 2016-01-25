# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paim <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 15:51:25 by paim              #+#    #+#              #
#    Updated: 2016/01/11 16:06:55 by paim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = carmini.c\
	check2.c\
	check.c\
	fillit.h\
	form1.c form2.c form3.c form4.c form5.c form6.c form7.c\
	ft_returnform.c\
	main.c\
	openingfil.c\
	placefonction.c\
	placemap.c
OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

.PHONY: clean fclean re

all: $(NAME)

$(NAME) :
	@clang $(FLAGS) $(SRC) -L./libft/ -lft
	@echo "compilation..."

clean: 
	@rm -f $(OBJ)
	@echo "supression .o ..."

fclean: clean
	@rm -f $(NAME)
	@echo "supression totale..."

re: fclean all
