# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jruiz-sa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 16:54:39 by jruiz-sa          #+#    #+#              #
#    Updated: 2024/09/24 23:03:31 by jruiz-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
LIB = ar -rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c \
	ft_isascii.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strrchr.c \
	ft_strncmp.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c \
	ft_memcmp.c ft_memmove.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
	ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ =	$(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS_OBJS)
	$(LIB) $(NAME) $(OBJ) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

clean:
	$(RM) $(OBJ) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

all: $(NAME)

re: fclean all
