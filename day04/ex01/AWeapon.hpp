/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:53:44 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:53:45 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon 
{

	public:

		AWeapon( void);
		AWeapon(std::string const & name, int apcost, int damage);					
		AWeapon( AWeapon const & src); 				
		AWeapon & operator=(AWeapon const & rhs);	
		~AWeapon( void ); 						

		std::string getName() const;
		int 		getAPCost() const;
		int 		getDamage() const;
		virtual void attack() const = 0;

		void		setWeapon(std::string name, int damage, int ap);
	
	protected:
		std::string	_name;
		int			_damage;
		int			_apCost;


};

std::ostream &	operator<<(std::ostream & o, AWeapon const &i);

#endif

