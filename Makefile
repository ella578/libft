# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:32:28 by ewang             #+#    #+#              #
#    Updated: 2022/12/02 17:54:33 by ewang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CFLAGS = -Wall -Werror -Wextra 


SRC = ft_isascii.c \
	ft_lstclear.c \
	ft_lstsize.c \
	ft_putchar_fd.c \
	ft_strdup.c \
	ft_strmapi.c\
	ft_tolower.c \
	ft_atoi.c \
	ft_isdigit.c \
	ft_lstdelone.c \
	ft_memchr.c \
	ft_putendl_fd.c \
	ft_striteri.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isprint.c \
	ft_lstiter.c \
	ft_memcmp.c \
	ft_putnbr_fd.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_lstlast.c \
	ft_memcpy.c \
	ft_putstr_fd.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_isalnum.c \
	ft_lstadd_back.c \
	ft_lstmap.c \
	ft_memmove.c \
	ft_split.c \
	ft_strlcpy.c \
	ft_strtrim.c \
	ft_isalpha.c \
	ft_lstadd_front.c \
	ft_lstnew.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_substr.c

OBJ = $(SRC:.c=.o)

.c.o	:
	gcc ${CFLAGS} -I ./ -c $< -o ${<:.c=.o}

all : go

bonus : go

go: $(OBJ)
	ar -r $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all go clean fclean re
