/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:30:58 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/05 14:32:16 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::Fixed(void) : fixed_point_number(0) // : fixed_point_number(0) is the initialization list  
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::~Fixed(void) 
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) : fixed_point_number(a.getRawBits()) 
{
	std::cout << "Copy Constructor called"  << std::endl;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number); // this is a pointer to the object that called the function.
}

void Fixed::setRawBits(int fractional_bits)
{
	fixed_point_number = fractional_bits;
	std::cout << "setRawBits member function caled" << std::endl;

}

const Fixed& Fixed::operator= (const Fixed& a) // operator= is a member function
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point_number = a.getRawBits();
	return a;
}