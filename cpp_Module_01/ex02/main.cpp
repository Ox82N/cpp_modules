/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:51:40 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 22:51:14 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std:: string string_variable = "HI THIS IS BRAIN"; 
    std:: string *string_pointer = &string_variable;
    std:: string &string_reference = string_variable;
    
    std:: cout << "The memory address of the string variable : " << &string_variable << std:: endl;
    std:: cout << "The memory address held by stringPTR      : " << &string_pointer << std:: endl;
    std:: cout << "The memory address held by stringREF      : " << &string_reference << std:: endl;

    std:: cout << "The value of the string variable          : " << string_variable << std:: endl;
    std:: cout << "The value pointed to by stringPTR         : " << *string_pointer << std:: endl;
    std:: cout << "The value pointed to by stringREF         : " << string_reference << std:: endl;
}

