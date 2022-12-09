/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:27:50 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 17:00:43 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Weapon.hpp"

Weapon::Weapon( std::string type ): type(type)
{
}

Weapon::~Weapon( void )
{
}

/* getType is to get the type of the weapon */
const std::string&	Weapon::getType( void ) const
{
	return (this->type);
}

/* setType is to change the type of the weapon */
bool		Weapon::setType( const std::string& newType )
{
	if (newType == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
		return (false);
	}
	this->type = newType;
	return (true);
}