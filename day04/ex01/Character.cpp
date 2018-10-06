/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:55:07 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:55:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

Character::Character( void )
{
	_name = "Default name";
	_ap = 40;
	this->_weapon = NULL;
	return ;
}

Character::Character( std::string const & name)
{
	_name = name;
	_ap = 40;
	this->_weapon = NULL;
	return ;
}

Character::~Character( void ){}

Character::Character( Character const & src)
{
	*this = src;
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	if(this != &rhs)
	{
		_name = rhs.getName();
		_ap = rhs.getAP();
		_weapon = rhs.getWeapon();
	}
	return *this;
}

std::string	Character::getName(void) const {return _name;};
int			Character::getAP(void) const {return _ap; };
AWeapon*	Character::getWeapon(void) const {return _weapon; };

void		Character::setAP(int ap){ _ap = ap; }

std::ostream & operator<<(std::ostream & o, Character const & src)
{
	if (src.getWeapon())
		o << src.getName()<< " has "<< src.getAP() <<" AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		o << src.getName()<< " has "<< src.getAP() <<" AP and is unarmed" << std::endl;
	return o;
	return (o);
}

void Character::recoverAP(void)
{
	if (_ap < 40)
		_ap += 10;
	else
		_ap = 40;
}
void Character::equip(AWeapon* weap)
{
	_weapon = weap;
}
void Character::attack(Enemy* enemy)
{
	int   ap_cost;

	if (_weapon != NULL && enemy != NULL)
	{
		ap_cost = _weapon->getAPCost();
		if (_ap - ap_cost >= 0)
		{
			std::cout << _name << " attacks " << enemy->getType() \
		        << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
		    enemy->takeDamage(_weapon->getDamage());
		    if (enemy->getHP() <= 0)
		        delete enemy;
		    _ap -= ap_cost;
		}

	}
}