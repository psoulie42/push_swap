# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 11:38:24 by psoulie           #+#    #+#              #
#    Updated: 2025/01/10 14:42:27 by psoulie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES =	main				\
		push_swap_utils		\
		minisort			\
		littlesort			\
		bigsort				\
		pusher				\
		rules/swap			\
		rules/push			\
		rules/rotate_code	\
		rules/rotate_rules	\

LIB = 	ft_atoi			\
		ft_bzero		\
		ft_calloc		\
		ft_isalnum		\
		ft_isalpha		\
		ft_isascii		\
		ft_isdigit		\
		ft_isprint		\
		ft_itoa			\
		ft_memchr		\
		ft_memcmp		\
		ft_memcpy		\
		ft_memmove		\
		ft_memset		\
		ft_putchar_fd	\
		ft_putendl_fd	\
		ft_putnbr_fd	\
		ft_putstr_fd	\
		ft_split		\
		ft_strchr		\
		ft_strdup		\
		ft_striteri		\
		ft_strjoin		\
		ft_strlcat		\
		ft_strlcpy		\
		ft_strlen		\
		ft_strmapi		\
		ft_strncmp		\
		ft_strnstr		\
		ft_strrchr		\
		ft_strtrim		\
		ft_substr		\
		ft_tolower		\
		ft_toupper		\
		ft_lstnew		\
		ft_lstadd_front	\
		ft_lstsize		\
		ft_lstlast		\
		ft_lstadd_back	\
		
PRINTF =ft_printf		\
		ft_countargs	\
		ft_putcharn		\
		ft_putstrn		\
		ft_putnbrn		\
		ft_putunbrn		\
		ft_putnbrhexn	\
		ft_putptrn		\

SRCS = $(addsuffix .c, $(FILES))
LIBSRCS = $(addprefix ./libft/, $(addsuffix .c, $(LIB)))
PSRCS = $(addprefix ./libft/ft_printf/, $(addsuffix .c, $(PRINTF)))
OFILES = $(SRCS:.c=.o) $(LIBSRCS:.c=.o) $(PSRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
