/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:17:02 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 23:59:49 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl	instance; // instance Object.

	instance.complain("DEBUG"); // we can access to the private member using the public function.
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");
}
