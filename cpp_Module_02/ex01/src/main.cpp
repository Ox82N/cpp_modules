/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:18:37 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/18 15:32:17 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Fixed.hpp"


int main(void)
{
    Fixed a;
    Fixed const b( 10 ); // b is a constant object of type Fixed
    Fixed const c( 42.42f ); // f means float literal
    Fixed const d( b );

    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;    
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}
