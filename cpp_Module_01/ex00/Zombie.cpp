/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:41 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 20:26:07 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 


Zombie::Zombie(std::string ZombieName) // constructor used to initialize the object 
{
	this->name = ZombieName; // set the value of the object. // this is a pointer to the object itself	
}

void Zombie::announce(void) // function to print the name of the Zombie 
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": " << "is dead !" << std::endl;
}
