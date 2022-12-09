/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:41 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 12:58:42 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp" 

/* constructor used to initialize the object */
Zombie::Zombie(std::string ZombieName)
{
	this->name = ZombieName; // set the value of the object. // this is a pointer to the object itself	
}

/* function to print the name of the Zombie */
void Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

/* destructor to destroy the object and deallocate the memory */
Zombie::~Zombie(void)
{
	std::cout << name << ": " << "is dead !" << std::endl;
}
