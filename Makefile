# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wheadles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 16:18:43 by wheadles          #+#    #+#              #
#    Updated: 2021/10/26 16:18:48 by wheadles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libft.a

SRCS		= $(shell find . -name "*.c")

GCC			= gcc

HEADER		= libft.h

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -I$(HEADER)

OBJ = $(SRCS:.c=.o)

.PHONY:		all clean fclean re 

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(GCC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all
