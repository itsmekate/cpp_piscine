/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:53:39 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:53:41 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	// std::cout << "Default constructor called" << std::endl;
	// std::cout << "Weapon created" << std::endl;

	return ;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage)
{
	_name = name;
	_damage = damage;
	_apCost = apcost;
	std::cout << "Weapon created" << std::endl;
	return ;
}

AWeapon::~AWeapon( void )
{
	std::cout << "Weapon destroyed" << std::endl;
	return ;
}

AWeapon::AWeapon( AWeapon const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

AWeapon	&AWeapon::operator=( AWeapon const &rfs )
{
	this->_name = rfs._name;
	this->_damage = rfs._damage;
	this->_apCost = rfs._apCost;
	return *this;
}

std::string	AWeapon::getName(void) const {return _name;};
int			AWeapon::getDamage(void) const {return _damage;};
int			AWeapon::getAPCost(void) const {return _apCost;};

std::ostream & operator<<(std::ostream & o, AWeapon const & i)
{
	o << i.getName();
	return (o);
}

void			AWeapon::setWeapon(std::string name, int damage, int ap)
{
	_name = name;
	_damage = damage;
	_apCost = ap;
}