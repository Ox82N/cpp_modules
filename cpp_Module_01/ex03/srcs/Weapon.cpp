/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:27:50 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/05 20:32:27 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( std::string type ): type(type)
{
}

Weapon::~Weapon( void )
{
}

const std::string&	Weapon::getType( void ) const
{
	return (this->type);
}

bool		Weapon::setType( const std::string& newType ) // setType is to change the type of the weapon
{
	if (newType == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
		return (false);
	}
	this->type = newType;
	return (true);
}