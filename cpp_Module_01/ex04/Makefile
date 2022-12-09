# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 19:25:12 by obenjair          #+#    #+#              #
#    Updated: 2022/10/16 19:25:24 by obenjair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= sedIsForLosers
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= ./main.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= g++

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all