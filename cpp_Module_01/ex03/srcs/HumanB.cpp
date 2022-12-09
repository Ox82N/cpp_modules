/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:27:36 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/05 20:37:34 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ): name(name), weapon(nullptr)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void ) const
{
	if (this->weapon)
	{
		std::cout << this->name << " attacks with their " << this->weapon->getType()
			<< std::endl;
	}
	else
	{
		std::cout << this->name
			<< " can't attack because they don't have a weapon" << std::endl;
	}
}

Weapon&	HumanB::getWeapon( void ) const
{
	return (*(this->weapon));
}

bool	HumanB::setWeapon( Weapon& newWeapon )
{
	if (newWeapon.getType() == "")
	{
		std::cerr << "New weapon can't be nothing" << std::endl;
		return (false);
	}
	this->weapon = &newWeapon;
	return (true);
}
