/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:27:12 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 17:01:56 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): name(name), weapon(weapon)
{
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType()
		<< std::endl;
}

Weapon&	HumanA::getWeapon( void ) const
{
	return (this->weapon);
}