/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:18 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/12 16:27:44 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>

int PhoneBook::count = 0;

PhoneBook::PhoneBook()
{
    this->index = 0;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

/* this is a function that return a contact  */
Contact PhoneBook::getcontact(int index)
{
    //return (this->contacts[index]);
    return contacts[index];
}

/* function that set a contact */
void PhoneBook::setcontact(Contact contact)
{
    this->contacts[this->index] = contact;
    if (count < 8) // if the number of contacts is less than 8
        count += 1;
    this->index = (this->index + 1) % 8;
}

/*function that return the number of contacts in the phonebook */
int PhoneBook::getcount()
{
    //return this->count;
    return count;
}
