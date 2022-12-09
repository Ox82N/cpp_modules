/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:15 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/29 23:45:18 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

#include <string>
#include <iostream>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();

        Contact getcontact(int index) ; // this function return the value of contact
        int getcount(); // this function return the value of count and increment it
        void setcontact(Contact contact); // this function set the value of contact 
    
    private:
        Contact contacts[8]; // this is an array of contact because we have 8 contact in the phonebook
        int index;
        static int count;
};
// if the count is 8, it will be 0 

#endif