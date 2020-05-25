# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drosetta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 18:55:09 by drosetta          #+#    #+#              #
#    Updated: 2019/11/11 18:55:30 by drosetta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJDIR = ./obj/

SRC =ft_atoi.c \
     ft_bzero.c \
     ft_isalnum.c \
     ft_isalpha.c \
     ft_isascii.c \
     ft_isdigit.c \
     ft_isprint.c \
     ft_itoa.c \
     ft_lstadd.c \
     ft_lstdel.c \
     ft_lstdelone.c \
     ft_lstiter.c \
     ft_lstmap.c \
     ft_lstnew.c \
     ft_memalloc.c \
     ft_memccpy.c \
     ft_memchr.c \
     ft_memcmp.c \
     ft_memcpy.c \
     ft_memdel.c \
     ft_memmove.c \
     ft_memset.c \
     ft_putchar.c \
     ft_putchar_fd.c \
     ft_putendl.c \
     ft_putendl_fd.c \
     ft_putnbr.c \
     ft_putnbr_fd.c \
     ft_putstr.c \
     ft_putstr_fd.c \
     ft_strcat.c \
     ft_strchr.c \
     ft_strclr.c \
     ft_strcmp.c \
     ft_strcpy.c \
     ft_strdel.c \
     ft_strdup.c \
     ft_strequ.c \
     ft_striter.c \
     ft_striteri.c \
     ft_strjoin.c \
     ft_strlcat.c \
     ft_strlen.c \
     ft_strmap.c \
     ft_strmapi.c \
     ft_strncat.c \
     ft_strncmp.c \
     ft_strncpy.c \
     ft_strnequ.c \
     ft_strnew.c \
     ft_strnstr.c \
     ft_strrchr.c \
     ft_strsplit.c \
     ft_strstr.c \
     ft_strsub.c \
     ft_strtrim.c \
     ft_tolower.c \
     ft_toupper.c \
     ft_dispay_file.c \
     ft_arrdel.c \
     ft_putptr.c \
     ft_nbrlen.c \
     ft_utoa.c \
     ft_itoa_base.c \
     ft_abs.c \
     ft_power.c \
     ft_atoll.c \
     ft_atoll_base.c \
     ft_arrrdel.c

OBJ = $(addprefix $(OBJDIR),$(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJDIR)%.o: %.c
	@mkdir -p obj
	$(CC) -o $@ -c $< $(CFLAGS) -I .

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
