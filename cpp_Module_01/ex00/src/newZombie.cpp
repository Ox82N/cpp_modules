/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:35 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 12:53:13 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *newZombie(std::string name)
{
	return (new Zombie(name)); // new is used to allocate on the heap
}
// this funcion it creates a new Zombie on the heap and returns a pointer to it.
