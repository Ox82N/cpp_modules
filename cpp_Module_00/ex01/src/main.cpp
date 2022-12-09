/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:05:55 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/09 12:49:47 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>

/* std:: is used to access the standard library of c++ */
void add_Contact(PhoneBook *phoneBook)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
    Contact contact;

    std::cout << "enter your first name -> ";
    std::getline(std::cin, first_name);
    contact.setFirstname(first_name);
    std::cout << "enter your last name -> ";
    std::getline(std::cin, last_name);
    contact.setLastname(last_name);
    std::cout << "enter your nickname -> ";
    std::getline(std::cin, nick_name);
    contact.setNickname(nick_name);
    std::cout << "enter your phone number -> ";
    std::getline(std::cin, phone_number);
    contact.setPhoneNumber(phone_number);
    std::cout << "enter your darkestSecret -> ";
    std::getline(std::cin, darkest_secret);
    contact.setDarkestSecret(darkest_secret);
    if (!first_name.empty() && !last_name.empty()
    && !nick_name.empty() && !phone_number.empty() && !darkest_secret.empty())
        phoneBook->setcontact(contact);
}

/* function to print "." if the string is longer than 10 characters */
/*resize function is used to resize the string to a specific size */
std::string long_input(std::string string)
{
    if (string.length() > 10)
    {
        string.resize(9);
        string.append(".");
    }
    return (string);
}

/*try statement allows you to define a block of code to be tested for errors while it is being executed */
void search_contact(PhoneBook *phoneBook)
{
    int index ;
    std::string str_index;
    int count;
    int i;
    Contact contact;

    i = 0;
    count = phoneBook->getcount();
    std::cout << "----------|----------|----------|----------" << std::endl;
    std::cout << "     index|"; 
    std::cout << " firstname|";
    std::cout << "  lastname|";
    std::cout << "  nickname" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    
    while(i < count)
    {
        contact = phoneBook->getcontact(i);
        std::cout << std::setw(10) << i + 1 << "|";
         std::cout << std::setw(10) << long_input(contact.getFirstname()) << std::right << "|";
        std::cout << std::setw(10) << long_input(contact.getLastname()) << std::right << "|";
        std::cout << std::setw(10) << long_input(contact.getNickname()) << std::endl;
        i++;
    }
    if (count > 0)
    {
        std::cout<< " enter the index of the contact that you want to see > ";
        std::getline(std::cin, str_index);
        try
        {
             index = std:: stoi(str_index);
        }
        catch(std::invalid_argument const& ex)
        {
            std::cout << "this is NOT a valid index !!" << std::endl;
        }
        index = index - 1 ;
        if (index >= count || index < 0)
            std::cout << "this index is out of range or wrong !!" << std::endl;
        else
        {
            contact = phoneBook->getcontact(index);
            std::cout << "-firstname     -> "<< contact.getFirstname() << std::endl;
            std::cout << "-lastname      -> "<< contact.getLastname() << std::endl;
            std::cout << "-nickname      -> "<< contact.getNickname() << std::endl;
            std::cout << "-phonenumber   -> "<< contact.getPhoneNumber() << std::endl;
            std::cout << "-darkestsecret -> "<< contact.getDarkestSecret() << std::endl;
        }
    }
    else
        std::cout << "there is no contact in the phonebook." << std::endl;

}

/*add_contact(&phonebook): we pass the address of the object to the function */
int main(void)
{
    PhoneBook phonebook;
    std::cout << "Welcome to the Phonebook ;)" << std::endl;
    std::cout << "Use one of these commands :'ADD','SEARCH' or 'EXIT'." << std::endl;
    std::cout << "ADD : to add a new contact." << std::endl;
    std::cout << "SEARCH : to search for a contact." << std::endl;
    std::cout << "EXIT : to exit the program." << std::endl;
    while (42)
    {
        std::string arg;
        std::cout << std::endl << "Enter your cammand -> ";
        std::getline(std::cin, arg);
        if (arg == "ADD")
            add_Contact(&phonebook);
        else if (arg == "SEARCH")
            search_contact(&phonebook);
        else if (arg == "EXIT")
            break;
        else
            std::cout << "wrong command!! please enter ADD, SEARCH or EXIT." << std::endl;
    }
    std::cout << "good bye :)" << std::endl;
    return 0;
}


