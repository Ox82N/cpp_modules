/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:28 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 21:04:39 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	{
		Zombie Otmane("Otmane"); // create our object otmane on the stack
		Otmane.announce(); // call the function announce to print the name of the zombie
	}
	Zombie Rachid("Rachid");
	Rachid.announce();
	randomChump("Maria");
	Zombie *Anna = new Zombie("Anna"); // we use new to allocate on the heap (allocate on the heap)
	Anna->announce();
	delete Anna;
}
// what case is better to use the heap or the stack?
// the stack is faster than the heap because it is a fixed size and the heap is dynamic.
// difference between stack and heap is that the stack is a fixed size and the heap is dynamic.