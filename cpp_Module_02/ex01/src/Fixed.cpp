/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:44:59 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/18 15:46:19 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/*Destructor*/
Fixed::~Fixed(void)
{
	std::cout << "Fixed: Default Destructor Called" << std::endl;
}

/*Default Constructor*/
Fixed::Fixed(void) 
	: fixed_point_value(0)
{
	std::cout << "Fixed: Default Constructor called" << std::endl;
}

/* Copy Constructor */
Fixed::Fixed(const Fixed& other)
	: fixed_point_value(other.getRawBits())
{
	std::cout << "Fixed: Copy Constructor called"  << std::endl;
}

/* 8 fractional bits = 2^8 = 256 */
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

/* const member function */
int Fixed::getRawBits(void) const 
{
	std::cout << "Fixed: getRawBits member function called" << std::endl;
	return fixed_point_value;
}

/* setRawBits is not a const member function because it modifies the object */
void Fixed::setRawBits(int fpValue)
{
	fixed_point_value = fpValue;
	std::cout << "Fixed: setRawBits member function called" << std::endl;

}

/* returns the integer part of the fixed point value */
int Fixed::toInt(void) const
{
	return (fixed_point_value >> fractional_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)fixed_point_value / (float)(1 << fractional_bits));
}

/* copy assignment operator */
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
