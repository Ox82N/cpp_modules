/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:31:06 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/18 14:53:52 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( a ); // b is a copy of a
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}

/*this exercise is about the copy constructor and the assignment operator.
 the copy constructor is called when you create a new object from an existing object.
 the assignment operator is called when you assign a value to an object.
 assignment operator is a member function that is called when you assign a value to an object. */