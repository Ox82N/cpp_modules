/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:40:31 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 22:18:11 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	int i = 0;
	Zombie* newZombies = zombieHorde(5, "otmane"); // create 5 zombies with the name otmane and store them in an array of pointers
	while(i < 5) // loop to print the name if each zombie
	{
	 	newZombies[i].announce();
	 	i++;
	}
	delete[] newZombies; //delete[] an array of zombies on the heap
}
