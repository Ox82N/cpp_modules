/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:40:47 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 22:18:24 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int Zombies_Number, std::string name)
{
	Zombie* newZombies = new Zombie[Zombies_Number]; // Zombie* is a pointer to a Zombie object
	while(Zombies_Number >= 0)
	{
		newZombies[Zombies_Number].initName(name);
		Zombies_Number--;
	}
	return newZombies;
}