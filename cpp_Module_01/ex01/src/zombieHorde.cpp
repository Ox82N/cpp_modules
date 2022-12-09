/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:40:47 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 16:12:55 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde(int Zombies_Number, std::string name)
{
	Zombie* newZombies = new Zombie[Zombies_Number]; // Zombie* is a pointer to a Zombie object Zombie[Zombies_Number] is an array of Zombie objects
	while(Zombies_Number >= 0)
	{
		newZombies[Zombies_Number].initName(name); // initName is a method of the Zombie class
		Zombies_Number--;
	}
	return newZombies;
}