/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:31:53 by benjairi          #+#    #+#             */
/*   Updated: 2022/12/18 18:23:09 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// default Constructor
// Default constructor called
Fixed::Fixed() {
	this->nb = 0;
}

// Parameterized Constructor (int)
//Int constructor called
Fixed::Fixed( const int num ) {
	this->nb = (num * (1 << this->fr_bits));
}

// Parameterized Constructor (int)
// Float constructor called
Fixed::Fixed( const float num ) {
	this->nb = roundf(num * (1 << this->fr_bits));
}

// copy constructor 
// Copy constructor called
Fixed::Fixed( Fixed const & obj ) {
	(*this) = obj;
}

// destructor
// Destructor called
Fixed::~Fixed() {
}

// assignment operator overload 
// Copy assignment operator called
Fixed & Fixed::operator=( Fixed const & obj ) {
	if (this != &obj) {
		nb = obj.getRawBits();
	}
	return (*this);
}

// the insertion («) operator overload
std::ostream & operator<<( std::ostream & cout, Fixed const & obj ) {
	cout << obj.toFloat();
	return cout;
}

// getters and setters
int Fixed::getRawBits( void ) const {
	return this->nb;
}

void Fixed::setRawBits( int const raw ) {
	this->nb = raw;
}

// methods
float Fixed::toFloat( void ) const{
	return ((float)this->getRawBits() / (float)(1 << this->fr_bits));
}


int Fixed::toInt( void ) const {
	return ((this->getRawBits() >> (this->fr_bits)));
}

// comparison operators 
int Fixed::operator>(Fixed const & obj) {
	if ( this->toFloat() > obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator<(Fixed const & obj) {
	if ( this->toFloat() < obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator<=(Fixed const & obj) {
	if ( this->toFloat() <= obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator>=(Fixed const & obj) {
	if ( this->toFloat() >= obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator==(Fixed const & obj) {
	if ( this->toFloat() == obj.toFloat() )
		return 1;
	else 
		return 0;
}

int Fixed::operator!=(Fixed const & obj) {
	if ( this->toFloat() != obj.toFloat() )
		return 1;
	else 
		return 0;
}

// arithmetic operators
Fixed Fixed::operator*( const Fixed &r ) {
	Fixed result(this->toFloat() * r.toFloat());
	return result;
}

Fixed Fixed::operator*( Fixed &r ) {
	Fixed result(this->toFloat() * r.toFloat());
	return result;
}

Fixed Fixed::operator+( const Fixed &r ) {
	Fixed result(this->toFloat() + r.toFloat());
	return result;
}

Fixed Fixed::operator+( Fixed &r ) {
	Fixed result(this->toFloat() + r.toFloat());
	return result;
}

Fixed Fixed::operator-( const Fixed &r ) {
	Fixed result(this->toFloat() - r.toFloat());
	return result;
}

Fixed Fixed::operator-( Fixed &r ) {
	Fixed result(this->toFloat() - r.toFloat());
	return result;
}

Fixed Fixed::operator/( const Fixed &r ) {
	Fixed result(this->toFloat() / r.toFloat());
	return result;
}

Fixed Fixed::operator/( Fixed &r ) {
	Fixed result(this->toFloat() / r.toFloat());
	return result;
}

// The 4 increment/decrement operators
// overload ++ pre
Fixed & Fixed::operator++() {
	this->nb++;
	return *(this);
}

// overload ++ post 
Fixed Fixed::operator++(int) {
	Fixed backup(*this);
	this->nb++;
	return backup;
}

// overload -- pre
Fixed & Fixed::operator--() {
	this->nb--;
	return *(this);
}

// overload ++ post 
Fixed Fixed::operator--(int) {
	Fixed backup(*this);
	this->nb--;
	return backup;
}


// min const
Fixed const & Fixed::min(Fixed const &one, Fixed const &two) {
	if (one.toFloat() < two.toFloat()) return one;
	return two;
}

// max const
Fixed const & Fixed::max(Fixed const &one, Fixed const &two) {
	if (one.toFloat() > two.toFloat()) return one;
	return two;
}

// min 
Fixed & Fixed::min(Fixed &one, Fixed &two) {
	if (one.toFloat() < two.toFloat()) return one;
	return two;
}

// max
Fixed & Fixed::max(Fixed &one, Fixed &two) {
	if (one.toFloat() > two.toFloat()) return one;
	return two;
}