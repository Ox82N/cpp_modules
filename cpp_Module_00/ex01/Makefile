# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 18:04:36 by obenjair          #+#    #+#              #
#    Updated: 2022/12/08 18:40:47 by benjairi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ =c++
C++FLAGS =-Wall -Wextra -Werror -std=c++11
TARGET =phonebook
SRC=./src/main.cpp ./src/Contact.cpp ./src/PhoneBook.cpp
RM=rm -rf

all : $(TARGET)

$(TARGET) :$(SRC)
	$(C++) $(C++FLAGS) $(SRC) -o $(TARGET)

fclean :
	$(RM) $(TARGET)

re: fclean $(TARGET)