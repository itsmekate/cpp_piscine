/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:53:58 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:53:59 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle( void);					
		PlasmaRifle( PlasmaRifle const & src); 				
		PlasmaRifle & operator=(PlasmaRifle const & rhs);	
		~PlasmaRifle( void );

		void attack() const;


};

std::ostream &	operator<<(std::ostream & o, PlasmaRifle const &i);

#endif
