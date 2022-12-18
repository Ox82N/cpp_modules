# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 19:31:10 by obenjair          #+#    #+#              #
#    Updated: 2022/12/18 14:40:31 by benjairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./src/main.cpp ./src/Fixed.cpp

INC = Fixed.hpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $^ -o $(NAME)

%.o : %.cpp $(INC)
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
