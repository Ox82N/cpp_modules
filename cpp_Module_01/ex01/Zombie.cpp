/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:40:40 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 22:16:46 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	this->name = "unkown";
}

void Zombie::initName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is dead" << std::endl;
}
