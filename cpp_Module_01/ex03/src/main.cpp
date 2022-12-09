/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:26:50 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 16:59:46 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include <iostream>


int main()
{
	{
		Weapon        club = Weapon("crude spiked club");

		HumanA bob("HumanA", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon        club = Weapon("crude spiked club");

		HumanB jim("HumanB");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

/* this exercice is about references and pointers and how to use them to change the value of a variable in a class */
// first we create a class called Weapon with a constructor and a destructor and a method called getType that returns the type of the weapon
// then we create a class called HumanA with a constructor and a destructor and a method called attack that prints the name of the human and the type of the weapon
// then we create a class called HumanB with a constructor and a destructor and a method called attack that prints the name of the human and the type of the weapon	
// then we create a main function that creates a weapon and a humanA and a humanB and we call the attack method of each human
// then we change the type of the weapon and we call the attack method of each human again