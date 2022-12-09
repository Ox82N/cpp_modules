/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:22:22 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/05 16:02:06 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed{
	private:
		int fixed_point_value; 
		static const int fractional_bits = 8;

	public:
		Fixed(); 
		Fixed(const Fixed& other);
		Fixed(const int fixed_point_value);
		Fixed(const float fixed_point_value); // 
        float toFloat(void) const;
        int toInt(void) const;
		~Fixed();
		int getRawBits( void ) const;
		const Fixed& operator= (const Fixed& other);
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream& outstream, Fixed const& obj);