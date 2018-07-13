# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rburger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 11:59:41 by rburger           #+#    #+#              #
#    Updated: 2018/07/12 17:08:28 by rburger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = miner.filler

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC_DIR = ./src/

INC_DIR = -I inc/

SRCS =	main.c \
	  	read_file.c \
		find_place.c \
		save_piece.c \
		free.c
		

SRC = $(addprefix $(SRC_DIR), $(SRCS))

OBJ = $(SRCS:.c=.o)

$(NAME):
	make re -C libft/
	$(CC) $(INC_DIR) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) -L libft/ -lft
	make clean

all : $(NAME)

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)
	make -C libft/ clean

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all

#./filler_vm -p1 players/champely.filler -p2 ../miner.filler -v -f maps/map00