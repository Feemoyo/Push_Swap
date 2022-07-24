# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 12:05:48 by fmoreira          #+#    #+#              #
#    Updated: 2022/07/24 01:42:06 by fmoreira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	=	./src
SRC		=	ft_push_swap.c	ft_check_args.c	ft_operations_01.c	ft_operations_02.c	\
			ft_solve_01.c	ft_solve_02.c	ft_sort_inv.c	ft_utils.c	\

OBJ_DIR	=	./obj
OBJ		=	$(patsubst	%.c, $(OBJ_DIR)/%.o, $(SRC))

INCD_DIR	=	./include
INCD		=	ft_push_swap.h

vpath	%.c	$(SRC_DIR)
vpath	%.h	$(INCD_DIR)

CC		=	gcc
NAME	=	push_swap
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:	%.c	$(INCD_DIR)
		@mkdir -p $(OBJ_DIR)
		@$(CC) -c -o $@ $(CFLAGS) -I $(INCD_DIR) $<

clean:
		@$(RM)  $(OBJ_DIR)

fclean:		clean
		@$(RM) $(NAME)

re:			fclean	all

.PHONY:	all clean fclean re