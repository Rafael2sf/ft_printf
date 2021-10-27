# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafernan <rafernan@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 12:52:19 by rafernan          #+#    #+#              #
#    Updated: 2021/10/27 15:14:10 by rafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			gcc
NAME=		libftprintf.a
RM=			rm -f
CD=			cd

CFLAGS=		\
			-Wall\
			-Werror\
			-Wextra\

SRC_DIR=	src
LFT_DIR=	libft

SRCS=		$(shell find $(SRC_DIR) -type f -maxdepth 1 -name "*.c")
OBJS=		$(patsubst $(SRC_DIR)/%.c,$(SRC_DIR)/%.o,$(SRCS))
INCS=	./libft/libft.a

all: $(NAME)

$(NAME): libft $(OBJS)

test: libft $(OBJS)
	$(CC) $(CFLAGS) -L. $(INCS) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): libft $(OBJS)
	ar rcs $@ $(INCS) $(OBJS)
	ranlib $@

libft:	
	$(CD) $(LFT_DIR) && make -i libft.a

clean:
	$(RM) $(OBJS)

fclean: clean
	@$(CD) $(LFT_DIR) && make -i fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all libft echo bonus clean fclean re