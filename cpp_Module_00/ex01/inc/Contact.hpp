/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:06 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/29 23:40:10 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

// we use get and set to access private variables using public functions
class Contact{ // a class is a user defined data type

    public:
        Contact();
        ~Contact();
        std::string getFirstname();  // get the value of Fname == print_Fname
        std::string getLastname(); // get is a function that returns a value
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        void setFirstname(std::string fname); // set the value of Fname == set_Fname
        void setLastname(std::string lname); // set is used to set the value of the varaible
        void setNickname(std::string nickname); // it has a parameter because it needs to know what value to set
        void setPhoneNumber(std::string phonenumber);
        void setDarkestSecret(std::string darkestsecret);
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif
