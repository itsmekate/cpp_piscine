/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:53:53 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:53:55 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle( void )
{
	_name = "Plasma Rifle";
	_damage = 21;
	_apCost = 5;
	return ;
}

PlasmaRifle::~PlasmaRifle( void ){}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src)
{
	*this = src;
	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if(this != &rhs)
	{
		_name = rhs.getName();
		_damage = rhs.getDamage();
		_apCost = rhs.getAPCost();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, PlasmaRifle const & i)
{
	o << i.getName();
	return (o);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
