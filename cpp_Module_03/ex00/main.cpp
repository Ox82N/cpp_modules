/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjairi <benjairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:34:26 by benjairi          #+#    #+#             */
/*   Updated: 2022/12/18 19:35:41 by benjairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    
    ClapTrap *clap1 = new ClapTrap("clap1");
    
    clap1->takeDamage(5);
    clap1->beRepaired(10);
    clap1->attack("clap2");

    delete clap1;
    return 0;
}
