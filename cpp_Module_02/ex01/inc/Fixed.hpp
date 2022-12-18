/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:22:22 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/18 15:31:23 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>


class Fixed{
	private:
		int fixed_point_value; 
		static const int fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other); // Copy constructor
		Fixed(const int fixed_point_value); // Int constructor
		Fixed(const float fixed_point_value); // Float constructor
        float toFloat(void) const;
        int toInt(void) const;
		~Fixed();
		int getRawBits( void ) const;
		const Fixed& operator= (const Fixed& other);
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream& outstream, Fixed const& obj);

// toFloat: Converts the fixed point value to a floating point value.
// toInt: Converts the fixed point value to an integer value.
// The assignment operator: Assigns a Fixed to another Fixed.
