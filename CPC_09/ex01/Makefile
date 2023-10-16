# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpesan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 21:33:59 by lpesan            #+#    #+#              #
#    Updated: 2023/09/27 21:34:01 by lpesan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

PRE			= ./srcs/

SRCS		= ${addprefix ${PRE}, ${SRC}}

OBJS		= ${SRCS:.c=.o}


HEAD		= ./includes/

NAME		= libft.a

AR			= ar rc

RM			= rm -f

LIB			= ranlib

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}
.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
