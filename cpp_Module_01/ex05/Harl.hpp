/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:16:59 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/03 23:54:05 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>

class Harl
{
private:
	void	debug(void); //  private member functions
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Harl();
	~Harl();
	void	complain(std::string level); //public member function that calls the above functions.
};

/* The class members declared as private can be accessed 
only by the member functions inside the class.
 They are not allowed to be accessed directly by any object or function outside the class*/
