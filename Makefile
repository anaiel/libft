# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:19:55 by anleclab          #+#    #+#              #
#    Updated: 2019/01/04 14:19:14 by anleclab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = src
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	  ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
	  ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
	  ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	  ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	  ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	  ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c \
	  ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	  ft_strsplitlst.c ft_putstrarray.c ft_putstrlst.c ft_putfile.c \
	  ft_filelinecount.c ft_putwchar.c ft_printbits.c ft_wchar_to_bytes.c \
	  ft_double_power.c ft_array_swap.c ft_itoa_base.c ft_litoa.c ft_llitoa.c \
	  ft_ldouble_power.c ft_tabdel.c
OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)
	@echo "\033[0;32mlibft.a library created successfully"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: $(SRC_DIR)/%.c
	@gcc -Wall -Werror -Wextra -I. -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
