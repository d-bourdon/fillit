# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paim <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 15:51:25 by paim              #+#    #+#              #
#    Updated: 2016/02/04 15:31:23 by paim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = carmini.c\
	  check2.c\
	  check.c\
	  form1.c form2.c form3.c form4.c form5.c form6.c form7.c\
	  ft_returnform.c\
	  main.c\
	  openingfil.c\
	  placefonction.c\
	  placemap.c\
	  ft_affichage.c\
	  error.c\
	  retraitpieces.c\
	  checkcharfirt.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

.PHONY: clean fclean re libft

all: $(NAME)

$(NAME) : libft
	@clang $(FLAGS) $(SRC) -o $(NAME) -L./libft/ -lft
	@echo "compilation..."

libft:
	@make -C libft/

clean: 
	@make -C libft/ clean
	@rm -f $(OBJ) *.gch
	@echo "supression .o ..."

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean
	@echo "supression totale..."

re: fclean all
