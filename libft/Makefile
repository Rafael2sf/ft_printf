# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 11:34:36 by rafernan          #+#    #+#              #
#    Updated: 2021/10/27 20:27:19 by rafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=		libft.a
RM=			rm -f

CC=			gcc
CFLAGS=		\
			-Wall\
			-Werror\
			-Wextra\

SRCS=		$(shell find . -maxdepth 1 -type f -name "*.c")
OBJS=		$(patsubst %.c,%.o,$(SRCS))

all: $(NAME) clean

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all echo bonus clean fclean re