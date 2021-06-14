# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 16:56:51 by ldaniel-          #+#    #+#              #
#    Updated: 2021/06/14 16:46:46 by ldaniel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= cc -c

BIN		= $(FILES:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

FILES	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
		 ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c \


all: $(NAME)

$(NAME) : $(BIN)
	ar -rcs $(NAME) $(BIN)

$(BIN):
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm $(BIN)

fclean:
	rm $(NAME)
	rm $(BIN)

re: fclean all
