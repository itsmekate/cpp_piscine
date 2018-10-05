/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:24:26 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/05 15:24:27 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:29:09 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string n)
{
	_name = n;
	std::cout << "ClapTrap created" << std::endl;
	return ;
}
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destroyed" << std::endl;
	return ;
}
ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	return ;
}
ClapTrap& ClapTrap::operator = (const ClapTrap& rhs)
{
	if(this != &rhs)
	{
		_hitPoints = rhs.getHitPoints();
		_maxHitPoints = rhs.getMaxHitPoints();
		_energyPoints = rhs.getEnergyPoints();
		_maxEnegryPoints = rhs.getMaxEnergyPoints();
		_level = rhs.getLevel();
		_melleeAttackDamage = rhs.getMelleeAttackDamage();
		_rangedAttackDamage = rhs.getRangedAttackDamage();
		_armorDamageReduction = rhs.getArmorDamageReduction();
		_name = rhs.getName();
	}
	return *this;
}


unsigned int 	ClapTrap::getHitPoints(void) const { return _hitPoints;};
unsigned int	ClapTrap::getMaxHitPoints(void) const { return _maxHitPoints; };
unsigned int	ClapTrap::getEnergyPoints(void) const {return _energyPoints; };
unsigned int 	ClapTrap::getMaxEnergyPoints(void) const {return _maxEnegryPoints; };
unsigned int	ClapTrap::getLevel(void) const { return _level; };
std::string		ClapTrap::getName(void) const {return _name; };
unsigned int	ClapTrap::getMelleeAttackDamage(void) const {return _melleeAttackDamage;};
unsigned int 	ClapTrap::getRangedAttackDamage(void) const {return _rangedAttackDamage;};
unsigned int	ClapTrap::getArmorDamageReduction(void) const {return _armorDamageReduction;};


void			ClapTrap::setHitPoints(int amount){ _hitPoints = amount;};
void			ClapTrap::setMaxHitPoints(int amount){ _maxHitPoints = amount; };
void			ClapTrap::setEnergyPoints(int amount){ _energyPoints = amount; };
void			ClapTrap::setMaxEnergyPoints(int amount){ _maxEnegryPoints = amount; };
void			ClapTrap::setLevel(int amount){ _level = amount; };
void			ClapTrap::setName(std::string n) { _name = n; };
void			ClapTrap::setMelleeAttackDamage(int amount){ _melleeAttackDamage = amount;};
void			ClapTrap::setrRangedAttackDamage(int amount){ _rangedAttackDamage = amount;};
void			ClapTrap::setArmorDamageReduction(int amount){ _armorDamageReduction = amount;};

void 			ClapTrap::rangedAttack(std::string const & target)
{
		std::cout << "FR4G-TP " << _name << " attacks ";
		std::cout << target << " at range, causing ";
		std::cout << _rangedAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_rangedAttackDamage - _armorDamageReduction);
}

void 			ClapTrap::meleeAttack(std::string const &target)
{
		std::cout << "FR4G-TP " << _name << " attacks ";
		std::cout << target << " at melee, causing ";
		std::cout << _melleeAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_melleeAttackDamage - _armorDamageReduction);
}
void 			ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < amount)
	{
		std::cout << "HP - zero" << std::endl;
		_hitPoints = 0;
	}
	else
		_hitPoints -= amount;
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount > _maxHitPoints)
	{
		std::cout << "Max HP reached!" << std::endl;
		_hitPoints = _maxHitPoints;
	}
	else
		_hitPoints += amount;
}

