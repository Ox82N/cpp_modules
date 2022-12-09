/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:40:40 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 16:08:16 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp" 

/* print the name of the zombie */
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* constructor */
Zombie::Zombie(void)
{
	this->name = "unkown";
}

/* init the name of the zombie */
void Zombie::initName(std::string name)
{
	this->name = name; // assign the name of the zombie to the name passed in parameter
}

/* destructor */
Zombie::~Zombie(void)
{
	std::cout << name << " is dead" << std::endl;
}
