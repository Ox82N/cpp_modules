/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:30:58 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/18 14:53:31 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"


/* this is a member initialization list and it's used to initialize the member variables of the class. */
Fixed::Fixed(void) : fixed_point_number(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

/* destructor to free the memory */
Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) : fixed_point_number(a.getRawBits())
{
	std::cout << "Copy Constructor called"  << std::endl;
}

/* this is a const member function because it will not modify the object */
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
}

void Fixed::setRawBits(int fractional_bits)
{
	fixed_point_number = fractional_bits;
	std::cout << "setRawBits member function caled" << std::endl;

}

/* operator= is a member function that is called when you assign a value to an object.*/
const Fixed& Fixed::operator= (const Fixed& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point_number = a.getRawBits();
	return a;
}