/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:11 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 12:48:23 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

// Contact.cpp is a class that contains the attributes of a contact and the functions that can be applied to it 
// COntact.cpp has also a constructor and a destructor which are called when an object is created and destroyed
/* constructor of the class  */
Contact:: Contact()
{
    return ;
}

/* destructor of the class */
Contact:: ~Contact() 
{
    return ;
}

/* getFirstname is a function that return value of firstName */
/*this-> is used to access the private variable of the class */
std::string Contact:: getFirstname()
{
    //return (this->firstName);
    return firstName;
}

std::string Contact:: getLastname()
{
    //return (this->lastName);
    return lastName;
}

std::string Contact:: getNickname()
{
    //return (this->nickName);
    return nickName;
}

std::string Contact:: getPhoneNumber()
{
    //return (this->phoneNumber);
    return phoneNumber;
}

std::string Contact:: getDarkestSecret()
{
    //return (this->darkestSecret);
    return darkestSecret;
}

/*function that set the value of firstName and it has a parameter which is the value to set  */
/*this-> is used to access the private variable of the class */
void Contact::setFirstname(std::string fname)
{
    //this->firstName = fname;
    firstName = fname;
}

void Contact::setLastname(std::string lname)
{
    //this->lastName = lname;
    lastName = lname;
}

void Contact::setNickname(std::string nickname)
{
    //this->nickName = nickname;
    nickName = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber)
{
    //this->phoneNumber = phonenumber;
    phoneNumber = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret)
{
    //this->darkestSecret = darkestsecret;
    darkestSecret = darkestsecret;
}