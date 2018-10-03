/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:32:32 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 15:32:34 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
	public:
		Weapon( std::string type );
		Weapon(void);
		~Weapon( void );
		std::string const &getType(void);
		void	setType(std::string str);

	private:
		std::string _type;

};

#endif
