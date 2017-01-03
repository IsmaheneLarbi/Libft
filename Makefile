# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/09 11:58:56 by ilarbi            #+#    #+#              #
#    Updated: 2017/01/02 14:02:01 by ilarbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-Wall -Wextra -Werror
NAME= libft.a
SRC= ft_lstmap.c \
	 ft_lstadd.c \
	 ft_lstdel.c \
	 ft_lstiter.c \
	 ft_lstdelone.c \
	 ft_lstnew.c \
	 ft_strsplit.c \
	 ft_strtrim.c \
	 ft_strjoin.c \
	 ft_strsub.c \
	 ft_strmapi.c \
	 ft_strmap.c \
	 ft_striteri.c \
	 ft_striter.c \
	 ft_putnbr_fd.c \
	 ft_putendl_fd.c \
	 ft_putstr_fd.c \
	 ft_putchar_fd.c \
	 ft_putendl.c \
	ft_isdigit.c \
	 ft_isalpha.c \
	 ft_isalnum.c \
	 ft_tolower.c \
	 ft_toupper.c \
	 ft_strlen.c \
	 ft_strcmp.c \
	 ft_isprint.c \
	 ft_memset.c \
	 ft_memcpy.c\
	 ft_memccpy.c\
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_memmove.c \
	 ft_memalloc.c \
	 ft_memdel.c \
	 ft_putnbr.c \
	 ft_putchar.c \
	 ft_putstr.c \
	 ft_atoi.c \
	 ft_isascii.c \
	 ft_strncmp.c \
	 ft_strdup.c \
	 ft_strcpy.c \
	 ft_strncpy.c \
	 ft_strcat.c \
	 ft_strncat.c \
	 ft_strlcat.c \
	 ft_strstr.c \
	 ft_strnstr.c\
	 ft_strchr.c \
	 ft_strrchr.c \
	 ft_bzero.c \
	ft_strnew.c \
	ft_strdel.c \
 	ft_strclr.c \
	ft_strequ.c \
	ft_strnequ.c

INCLUDES= libft.h
OBJS= $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	ar rc $(NAME) $^
%.o: %.c
	gcc -c $(CFLAGS) $^ -I INCLUDES -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
