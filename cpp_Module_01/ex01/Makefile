# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 19:40:37 by obenjair          #+#    #+#              #
#    Updated: 2022/12/09 14:52:51 by obenjair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./src/main.cpp ./src/Zombie.cpp  ./src/zombieHorde.cpp

INC = Zombie.hpp

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