/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:55:03 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:55:04 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
# define Character_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character 
{

	public:

		Character( void);
		Character(std::string const & name);				
		Character( Character const & src); 				
		Character & operator=(Character const & rhs);	
		~Character( void ); 						


		void recoverAP();
		void equip(AWeapon* weap);
		void attack(Enemy* en);

		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon*		getWeapon(void) const;

		void			setAP(int ap);
	
	protected:
		std::string	_name;
		AWeapon		*_weapon;
		int			_ap;


};

std::ostream &	operator<<(std::ostream & o, Character const &i);

#endif

