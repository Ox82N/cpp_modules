/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:40:43 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 22:09:07 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>


class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(void); // constructor
		void initName(std::string name); // function to init the name of the zombie
		~Zombie(); // destructor 
};

Zombie* zombieHorde( int N, std::string name );