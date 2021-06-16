# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 16:56:51 by ldaniel-          #+#    #+#              #
#    Updated: 2021/06/16 16:30:47 by ldaniel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= cc -c

BIN		= $(FILES:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

FILES	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
		 ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c \
		 ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_memcmp.c ft_memccpy.c \
		
all: $(NAME)

$(NAME) : $(BIN)
	ar -rcs $(NAME) $(BIN)

$(BIN):
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean all
