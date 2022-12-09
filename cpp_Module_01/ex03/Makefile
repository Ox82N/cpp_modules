# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:29:14 by obenjair          #+#    #+#              #
#    Updated: 2022/12/09 16:28:45 by obenjair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = war

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./src/main.cpp ./src/HumanA.cpp ./src/HumanB.cpp ./src/Weapon.cpp

INC = HumanA.hpp HumanB.hpp Weapon.hpp

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