/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:28:28 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 14:51:15 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

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

/* what case is better to use the heap or the stack?
 the stack is faster than the heap because it is a fixed size and the heap is dynamic.
 difference between stack and heap is that the stack is a fixed size and the heap is dynamic. */

// this exercise is about creating a zombie class and a function that creates a zombie on the heap and then delete it.
// we use the new operator to allocate on the heap and the delete operator to deallocate on the heap.
// exercise to understand the difference between the stack and the heap.
// to allocate memory on the stack we use the {} and to allocate memory on the heap we use the new operator.
// to deallocate memory on the stack we use the {} and to deallocate memory on the heap we use the delete operator.

// defference between the stack and the heap is that the stack is a fixed size and the heap is dynamic.
// the stack is faster than the heap because it is a fixed size and the heap is dynamic.
