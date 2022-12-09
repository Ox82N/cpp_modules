/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:18 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 12:48:09 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>

int PhoneBook::count = 0;

/* constructor */
PhoneBook::PhoneBook()
{
    this->index = 0;
    return ;
}
/* destructor */
PhoneBook::~PhoneBook()
{
    return ;
}
/* getter */
/* this is a function that return a contact  */
Contact PhoneBook::getcontact(int index)
{
    return (this->contacts[index]);
}
/* setter */
/* function that set a contact */
void PhoneBook::setcontact(Contact contact)
{
    this->contacts[this->index] = contact;
    if (count < 8)
        count += 1;
    this->index = (this->index + 1) % 8;
}

/*function that return the number of contacts in the phonebook */
int PhoneBook::getcount()
{
    //return this->count;
    return count;
}
