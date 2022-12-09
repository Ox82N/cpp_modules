/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:28:30 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/05 20:30:28 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void ) const;
		Weapon&	getWeapon( void ) const;
		bool	setWeapon( Weapon& newWeapon );
	private:
		std::string	name;
		Weapon		*weapon;
};
// in HumanB class, the weapon is a pointer to a Weapon object, not a reference.
// This means that the weapon can be set to NULL, and that the HumanB class
// can be used without a weapon.

// why we use references instead of pointers?
/* Because references are safer and more convenient to use.
 References are safer because they can not be set to NULL.
 References are more convenient to use because they can be used like a pointer
 without the need to dereference them.*/