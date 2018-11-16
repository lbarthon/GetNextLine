# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarthon <lbarthon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:51:15 by lbarthon          #+#    #+#              #
#    Updated: 2018/11/16 13:28:55 by lbarthon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=@gcc
CFLAGS=-Wall -Werror -Wextra

FILES=ft_atoi.c ft_lstdel.c ft_memcpy.c ft_putnbr_fd.c ft_strdup.c \
	  ft_strncat.c ft_strsub.c ft_bzero.c ft_lstdelone.c ft_memdel.c \
	  ft_putstr.c ft_strequ.c ft_strncmp.c ft_strtrim.c ft_isalnum.c \
	  ft_lstiter.c ft_memmove.c ft_putstr_fd.c ft_striter.c ft_strncpy.c \
	  ft_tolower.c ft_isalpha.c ft_lstmap.c ft_memset.c ft_strcat.c \
	  ft_striteri.c ft_strnequ.c ft_toupper.c ft_isascii.c ft_lstnew.c \
	  ft_putchar.c ft_strchr.c ft_strjoin.c ft_strnew.c ft_isdigit.c \
	  ft_memalloc.c ft_putchar_fd.c ft_strclr.c ft_strlcat.c ft_strnstr.c \
	  ft_isprint.c ft_memccpy.c ft_putendl.c ft_strcmp.c ft_strlen.c \
	  ft_strrchr.c ft_itoa.c ft_memchr.c ft_putendl_fd.c ft_strcpy.c \
	  ft_strmap.c ft_strsplit.c ft_lstadd.c ft_memcmp.c ft_putnbr.c \
	  ft_strdel.c ft_strmapi.c ft_strstr.c ft_realloc.c ft_tablength.c \
	  ft_intlength.c ft_tablength.c ft_strclen.c ft_strcdup.c \
	  ft_strlen_nofault.c

OBJ=$(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc libft.a $(OBJ)
	@ranlib $(NAME)

re: fclean all

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f $(OBJ)

.PHONY: all re fclean clean
