/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:51:40 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 16:24:43 by obenjair         ###   ########.fr       */
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
// this exercice is about pointers and references 
// The goal is to create a string variable and to assign it a string literal. Then create a pointer to the string variable and a reference to the string variable.
// Then print the memory address of the string variable, the memory address held by the pointer and the memory address held by the reference.
// Then print the value of the string variable, the value pointed to by the pointer and the value pointed to by the reference.


// why adress of stringREF is the same as string variable ?
// because the reference is a reference to the string variable, so it is the same as the string variable

// why adress of stringPTR is different from string variable ?
// because the pointer is a pointer to the string variable, so it is different from the string variable
