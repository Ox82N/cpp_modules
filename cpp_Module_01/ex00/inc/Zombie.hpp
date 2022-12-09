/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:44 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 12:56:11 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Zombie{
	public:
		void announce(void); // function to print the name of the zombie
		Zombie(std::string ZombieName); // Constructor helps to allocate memory and initialize the object of a class.
		~Zombie(); // Destructor helps to deallocate the memory of an object and destroy the object.
	private:
		std::string name;
};

Zombie* newZombie(std::string name); 
void randomChump(std::string name);
