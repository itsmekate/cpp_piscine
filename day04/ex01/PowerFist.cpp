/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:13 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:15 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void )
{
	_name = "Power Fist";
	_damage = 50;
	_apCost = 8;
	return ;
}

PowerFist::~PowerFist( void ){}

PowerFist::PowerFist( PowerFist const & src)
{
	*this = src;
	return ;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	if(this != &rhs)
	{
		_name = rhs.getName();
		_damage = rhs.getDamage();
		_apCost = rhs.getAPCost();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, PowerFist const & i)
{
	o << i.getName();
	return (o);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

