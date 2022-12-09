# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 20:18:24 by obenjair          #+#    #+#              #
#    Updated: 2022/10/16 20:18:26 by obenjair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl

SRCS	=	main.cpp															\
			Harl.cpp								

BONUSSRCS	=

#OBJS	= ${SRCS:.c=.o}

BONUSOBJS	= ${BONUSSRCS:.c=.o}

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

LIBS	=

RM		= rm -f

${NAME}: ${SRCS}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS} ${LIBS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

bonus:

clean:
	 ${RM} ${OBJS} ${BONUSOBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all