/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:50 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:51 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion( void )
{
	_type = "RadScorpion";
	_hp = 80;
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion::RadScorpion( RadScorpion const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		_hp = rhs.getHP();
		_type = rhs.getType();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, RadScorpion const & i)
{
	o << i.getType();
	return (o);
}

void RadScorpion::takeDamage(int damage)
{
	if (_hp > (damage - 3))
		_hp -= (damage - 3);
	else
		std::cout << "* SPROTCH *" << std::endl;
}


