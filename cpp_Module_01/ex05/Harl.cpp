/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:16:55 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/04 00:05:22 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "I love getting extra bacon for my 7XL-double-cheese-triple-pi\
ckle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I can't believe you have to pay to get extra bacon. You didn’t\
put enough bacon in my burger! If you did I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int		i = 0;
	void	(Harl::*complaint[])( void ) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	std::string complaintLevels[4];
	complaintLevels[0] = "DEBUG";
	complaintLevels[1] = "INFO";
	complaintLevels[2] = "WARNING";
	complaintLevels[3] = "ERROR";
	while(i < 4)
	{
		if (level == complaintLevels[i])
			(this->*complaint[i])();
		i++;
	}
}