/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:38 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 12:53:17 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

void randomChump( std::string name )
{
	Zombie newZombie(name); // create a new Zombie on the stack and initialize it with the name given as parameter
	newZombie.announce(); // call the announce function.
}
