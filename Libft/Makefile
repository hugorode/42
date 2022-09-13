# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrode <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 15:33:38 by hrode             #+#    #+#              #
#    Updated: 2022/02/05 20:38:43 by hrode            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putstr_fd.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_strchr.c ft_strdup.c\
	ft_striteri.c ft_strjoin.c ft_strlcat.c	ft_strlcpy.c ft_strlen.c \
	ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
	ft_substr.c ft_tolower.c ft_toupper.c ft_split.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS = $(SRC:%.c=%.o)

OBJS_BONUS = $(BONUS:%.c=%.o)

CC = gcc
LIB = libft.h
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)

bonus : $(OBJS) $(OBJS_BONUS) 
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)

clean : 
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
	
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

.phony : all clean fclean re bonus

