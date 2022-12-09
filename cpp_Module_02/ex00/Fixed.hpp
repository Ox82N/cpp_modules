/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:31:03 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/07 20:51:15 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed{
	private:
		int fixed_point_number;
		static const int fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& a);
		const Fixed& operator= (const Fixed& a); // operator means 
		~Fixed();
		int getRawBits( void ) const; // const means that the function will not modify the object
		void setRawBits( int const raw );
};
// Fixed& other : it's just a regular pbject of the class Fixed and it's not a pointer.

// what is an assignment operator?
// it's a function that is called when you assign a value to an object.

// meaning is a member function
// it's a function that is called on an object.