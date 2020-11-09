# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyou <jyou@student.42.kr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/10 19:57:41 by jyou              #+#    #+#              #
#    Updated: 2020/11/09 14:31:28 by jyou             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -I.
SRCS	= ft_memset.c \
		  ft_bzero.c  \
		  ft_memcpy.c \
		  ft_memccpy.c \
		  ft_memmove.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strlen.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strnstr.c \
		  ft_strncmp.c \
		  ft_atoi.c \
		  ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c
BONUS	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c
OBJS	= $(SRCS:.c=.o)

OBJS_B	= $(BONUS:.c=.o)

.c.o : $(SRCS)
		gcc $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS_B) $(NAME) $(OBJS)
		ar rcs $(NAME) $(OBJS) $(OBJS_B)

all: $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
