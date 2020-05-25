# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drosetta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 06:28:47 by drosetta          #+#    #+#              #
#    Updated: 2019/11/25 17:36:27 by drosetta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBDIR = ./libft

LIB = $(LIBDIR)/libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCDIR = ./src/

INCDIR = ./includes/

SRC = ./src/ft_frt_putnchar.c \
      ./src/ft_mustakrakish_new.c \
      ./src/ft_parse_frt/ft_parse_frt_flags.c \
      ./src/ft_parse_frt/ft_parse_frt_precision.c \
      ./src/ft_parse_frt/ft_parse_frt_type.c \
      ./src/ft_parse_frt/ft_parse_frt_width.c \
      ./src/ft_printf.c \
      ./src/ft_putfrt/ft_fill_letters_tabs.c \
      ./src/ft_putfrt/ft_frt_putchar.c \
      ./src/ft_putfrt/ft_frt_putstr.c \
      ./src/ft_putfrt/ft_make_full_tab.c \
      ./src/ft_putfrt/ft_putfrt_b.c \
      ./src/ft_putfrt/ft_putfrt_bu.c \
      ./src/ft_putfrt/ft_putfrt_c.c \
      ./src/ft_putfrt/ft_putfrt_d_i.c \
      ./src/ft_putfrt/ft_putfrt_d_i_nbr_zero.c \
      ./src/ft_putfrt/ft_putfrt_f.c \
      ./src/ft_putfrt/ft_putfrt_f_main.c \
      ./src/ft_putfrt/ft_putfrt_o.c \
      ./src/ft_putfrt/ft_putfrt_o_nbr_zero.c \
      ./src/ft_putfrt/ft_putfrt_p.c \
      ./src/ft_putfrt/ft_putfrt_percent.c \
      ./src/ft_putfrt/ft_putfrt_q.c \
      ./src/ft_putfrt/ft_putfrt_s.c \
      ./src/ft_putfrt/ft_putfrt_t.c \
      ./src/ft_putfrt/ft_putfrt_tu.c \
      ./src/ft_putfrt/ft_putfrt_u.c \
      ./src/ft_putfrt/ft_putfrt_vu.c \
      ./src/ft_putfrt/ft_putfrt_x.c \
      ./src/ft_putfrt/ft_putfrt_x_u_xu_nbr_zero.c \
      ./src/ft_putfrt/ft_putfrt_xu.c \
      ./src/ft_set_mustakrakish_len_frt.c

OBJ = ./ft_frt_putnchar.o \
            ./ft_mustakrakish_new.o \
            ./ft_parse_frt_flags.o \
            ./ft_parse_frt_precision.o \
            ./ft_parse_frt_type.o \
            ./ft_parse_frt_width.o \
            ./ft_printf.o \
            ./ft_fill_letters_tabs.o \
            ./ft_frt_putchar.o \
            ./ft_frt_putstr.o \
            ./ft_make_full_tab.o \
            ./ft_putfrt_b.o \
            ./ft_putfrt_bu.o \
            ./ft_putfrt_c.o \
            ./ft_putfrt_d_i.o \
            ./ft_putfrt_d_i_nbr_zero.o \
            ./ft_putfrt_f.o \
            ./ft_putfrt_f_main.o \
            ./ft_putfrt_o.o \
            ./ft_putfrt_o_nbr_zero.o \
            ./ft_putfrt_p.o \
            ./ft_putfrt_percent.o \
            ./ft_putfrt_q.o \
            ./ft_putfrt_s.o \
            ./ft_putfrt_t.o \
            ./ft_putfrt_tu.o \
            ./ft_putfrt_u.o \
            ./ft_putfrt_vu.o \
            ./ft_putfrt_x.o \
            ./ft_putfrt_x_u_xu_nbr_zero.o \
            ./ft_putfrt_xu.o \
            ./ft_set_mustakrakish_len_frt.o \
      ./libft/obj/ft_atoi.o \
      ./libft/obj/ft_bzero.o \
      ./libft/obj/ft_itoa.o \
      ./libft/obj/ft_strcat.o \
      ./libft/obj/ft_strchr.o \
      ./libft/obj/ft_strdel.o \
      ./libft/obj/ft_strdup.o \
      ./libft/obj/ft_strlen.o \
      ./libft/obj/ft_utoa.o \
      ./libft/obj/ft_itoa_base.o \
      ./libft/obj/ft_abs.o \
      ./libft/obj/ft_strequ.o \
      ./libft/obj/ft_strcpy.o \
      ./libft/obj/ft_strnew.o \
      ./libft/obj/ft_atoll.o \
      ./libft/obj/ft_arrrdel.o \
      ./libft/obj/ft_atoll_base.o \
      ./libft/obj/ft_putstr.o \
      ./libft/obj/ft_power.o 

all: $(NAME)

$(NAME):
	make -C $(LIBDIR)
	gcc $(FLAGS) -c $(SRC)  -I $(INCDIR)
	ar rc $(NAME) $(OBJ) $(LIB)
	ranlib $(NAME)
clean:
	make -C $(LIBDIR) fclean
	rm -rf $(OBJ)

fclean: clean
	make -C $(LIBDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
