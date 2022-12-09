# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 17:10:06 by obenjair          #+#    #+#              #
#    Updated: 2022/11/02 14:55:31 by obenjair         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ =c++
C++FLAGS =-Wall -Wextra -Werror -std=c++98
TARGET =megaphone
SRC=megaphone.cpp
RM=rm -rf

all : $(TARGET)

$(TARGET) :$(SRC)
	$(C++) $(C++FLAGS) $(SRC) -o $(TARGET)

fclean :
	$(RM) $(TARGET)

re: fclean $(TARGET)
