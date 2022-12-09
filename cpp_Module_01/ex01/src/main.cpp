/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:40:31 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 16:14:45 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"


int main()
{
	int i = 0;
	Zombie* newZombies = zombieHorde(4, "otmane"); // create 5 zombies with the name otmane and store them in an array of pointers
	while(i < 5) // loop to print the name if each zombie
	{
	 	newZombies[i].announce(); // print the name of the zombie
	 	i++;
	}
	delete[] newZombies; //delete[] an array of zombies on the heap
}

/* 	This exercise is about creating a Zombie class and a ZombieHorde function that creates an array of Zombie objects on the heap and returns a pointer to the first element of the array. */
/* The ZombieHorde function takes two arguments: the number of zombies to create and the name of the zombies. */