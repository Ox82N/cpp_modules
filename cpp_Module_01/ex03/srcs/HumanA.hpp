/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:28:10 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/05 20:29:47 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void	attack( void ) const;
		Weapon&	getWeapon( void ) const; 
	private:
		std::string	name;
		Weapon		&weapon;

};
// in HumanA class, the weapon is a reference to a Weapon object, not a pointer.
// This means that the weapon can not be set to NULL, and that the HumanA class
// can not be used without a weapon.

// why we use references instead of pointers?
/* Because references are safer and more convenient to use.
 References are safer because they can not be set to NULL.
 References are more convenient to use because they can be used like a pointer
 without the need to dereference them.*/
