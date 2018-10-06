/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:07 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:08 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

	public:

		PowerFist( void);					
		PowerFist( PowerFist const & src); 				
		PowerFist & operator=(PowerFist const & rhs);	
		~PowerFist( void );

		void attack() const;
};

std::ostream &	operator<<(std::ostream & o, PowerFist const &i);

#endif
