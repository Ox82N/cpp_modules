/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:44:59 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/04 17:49:59 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::~Fixed(void)
{
	std::cout << "Fixed: Default Destructor Called" << std::endl;
}


Fixed::Fixed(void)
	: fixed_point_value(0)
{
	std::cout << "Fixed: Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
	: fixed_point_value(other.getRawBits())
{
	std::cout << "Fixed: Copy Constructor called"  << std::endl;
}

Fixed::Fixed(const int fixed_point_value)
	: fixed_point_value(fixed_point_value << fractional_bits)
{
	std::cout << "Fixed: int Constructor called" << std::endl;
}

Fixed::Fixed(const float fixed_point_value)
	: fixed_point_value((int)round(fixed_point_value * (float)(1 << fractional_bits)))
{
	std::cout << "Fixed: float Constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "Fixed: getRawBits member function called" << std::endl;
	return fixed_point_value;
}

void Fixed::setRawBits(int fpValue)
{
	fixed_point_value = fpValue;
	std::cout << "Fixed: setRawBits member function called" << std::endl;

}


int Fixed::toInt(void) const
{
	return (fixed_point_value >> fractional_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value / (float)(1 << fractional_bits));
}

const Fixed& Fixed::operator= (const Fixed& other)
{
	std::cout << "Fixed: Copy assignment operator called" << std::endl;
	fixed_point_value = other.getRawBits();
	return *this;
}

std::ostream& operator<< (std::ostream& outstream, Fixed const& obj)
{
	outstream << obj.toFloat();
	return outstream;
}
