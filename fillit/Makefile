# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drosetta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 14:03:01 by drosetta          #+#    #+#              #
#    Updated: 2019/10/25 11:15:32 by drosetta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fillit

LIB_PATH = ./libft/

SRC_PATH= ./main.c \
          ./check_n_read/check_n_read_tools_1.c \
          ./check_n_read/check_n_read_tools_2.c \
          ./check_n_read/ft_check_figure_01_05.c \
          ./check_n_read/ft_check_figure_11_15.c \
          ./check_n_read/ft_check_figure_06_10.c \
          ./check_n_read/ft_check_figure_16_19.c \
          ./solve_tools/fillit.c \
          ./solve_tools/ft_record.c \
          ./solve_tools/ft_decode.c \
          ./solve_tools/ft_figure_01.c \
          ./solve_tools/ft_figure_02.c \
          ./solve_tools/ft_figure_03.c \
          ./solve_tools/ft_figure_04.c

OBJ_PATH=./main.o \
         ./check_n_read_tools_1.o \
         ./ft_check_figure_01_05.o \
         ./check_n_read_tools_2.o \
         ./ft_check_figure_11_15.o \
         ./ft_check_figure_06_10.o \
         ./ft_check_figure_16_19.o \
         ./fillit.o \
         ./ft_record.o \
         ./ft_decode.o \
         ./ft_figure_01.o \
         ./ft_figure_02.o \
         ./ft_figure_03.o \
         ./ft_figure_04.o

all: $(NAME)

$(NAME):
		make re -C $(LIB_PATH)
		make clean -C $(LIB_PATH)
		gcc -c -Wall -Wextra -Werror $(SRC_PATH)
		gcc $(OBJ_PATH) $(LIB_PATH)/libft.a -o $(NAME)

clean:
		/bin/rm -f $(OBJ_PATH)
		/bin/rm -f $(LIB_PATH)/libft.a

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
