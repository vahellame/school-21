# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drosetta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 14:05:31 by drosetta          #+#    #+#              #
#    Updated: 2019/09/16 05:50:35 by drosetta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = *.c

OBJ = *.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC) -I .
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
