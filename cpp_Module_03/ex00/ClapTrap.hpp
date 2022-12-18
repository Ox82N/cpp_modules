/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:35:56 by benjairi          #+#    #+#             */
/*   Updated: 2022/12/18 18:59:45 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
    #define CLAPTRAP_HPP
    #include <iostream>

    class ClapTrap {
        private:
            std::string Name;
            unsigned int HitPoints;
            unsigned int energyPoints;
            unsigned int attackDamage;
            
        public:
            // Constructors and destructors and operators
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap( ClapTrap const & src );
            ~ClapTrap();
            ClapTrap & operator=( ClapTrap const & obj );

            // methods
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    };
    
#endif