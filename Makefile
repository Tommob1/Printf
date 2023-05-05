# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 10:06:15 by btomlins          #+#    #+#              #
#    Updated: 2023/04/28 13:51:22 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP = gcc -Wall -Werror -Wextra

NAME = libftprintf.a

SRC = cfiles/printf_char.c \
	  		cfiles/printf_int.c \
			cfiles/printf_un_int.c \
			cfiles/printf_hex.c \
			cfiles/printf_str.c \
			cfiles/printf_ptraddress.c \
			cfiles/printf_utils.c \
			cfiles/printf.c \

OBJ = $(SRC:%.c=%.o)

RM = rm -f

all: $(NAME)

%.o: %.c
			$(COMP) -o $@ -c $<

$(NAME):	$(OBJ)
						$(COMP) -c $(SRC) -I./
						ar rc $(NAME) $(OBJ)

clean:
						$(RM) $(OBJ)

fclean:		clean
						$(RM) $(NAME)

re:			fclean all
