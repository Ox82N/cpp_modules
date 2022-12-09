/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:44 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 21:12:13 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		void announce(void); // function to print the name of the zombie
		Zombie(std::string ZombieName); // Constructor helps to allocate memory and initialize the object of a class.
		~Zombie(); // Destructor helps to deallocate the memory of an object and destroy the object.
};

Zombie* newZombie(std::string name); 
void randomChump(std::string name);
