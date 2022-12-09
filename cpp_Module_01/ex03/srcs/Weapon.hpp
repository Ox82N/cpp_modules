/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:28:38 by obenjair          #+#    #+#             */
/*   Updated: 2022/11/05 19:42:31 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public:
		Weapon( std::string type );
		~Weapon( void );
		const std::string&	getType( void ) const;
		bool				setType( const std::string& newType );

	private:
		std::string type;
};

#endif