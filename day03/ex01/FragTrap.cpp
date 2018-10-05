/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:29:09 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void)
{
	srand( time( NULL ) );
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnegryPoints = 100;
	_level = 1;
	_name = "Default name";
	_melleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "Robot created" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string n)
{
	srand( time( NULL ) );
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnegryPoints = 100;
	_level = 1;
	_name = n;
	_melleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "Robot created" << std::endl;
	return ;
}
FragTrap::~FragTrap(void)
{
	std::cout << "Robot destroyed" << std::endl;
	return ;
}
FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
	return ;
}
FragTrap& FragTrap::operator = (const FragTrap& rhs)
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


unsigned int 		FragTrap::getHitPoints(void) const { return _hitPoints;};
unsigned int		FragTrap::getMaxHitPoints(void) const { return _maxHitPoints; };
unsigned int		FragTrap::getEnergyPoints(void) const {return _energyPoints; };
unsigned int 		FragTrap::getMaxEnergyPoints(void) const {return _maxEnegryPoints; };
unsigned int		FragTrap::getLevel(void) const { return _level; };
std::string			FragTrap::getName(void) const {return _name; };
unsigned int		FragTrap::getMelleeAttackDamage(void) const {return _melleeAttackDamage;};
unsigned int 		FragTrap::getRangedAttackDamage(void) const {return _rangedAttackDamage;};
unsigned int		FragTrap::getArmorDamageReduction(void) const {return _armorDamageReduction;};


void				FragTrap::setHitPoints(int amount){ _hitPoints = amount;};
void				FragTrap::setMaxHitPoints(int amount){ _maxHitPoints = amount; };
void				FragTrap::setEnergyPoints(int amount){ _energyPoints = amount; };
void				FragTrap::setMaxEnergyPoints(int amount){ _maxEnegryPoints = amount; };
void				FragTrap::setLevel(int amount){ _level = amount; };
void				FragTrap::setName(std::string n) { _name = n; };
void				FragTrap::setMelleeAttackDamage(int amount){ _melleeAttackDamage = amount;};
void				FragTrap::setrRangedAttackDamage(int amount){ _rangedAttackDamage = amount;};
void				FragTrap::setArmorDamageReduction(int amount){ _armorDamageReduction = amount;};
		
void 				FragTrap::rangedAttack(std::string const & target)
{
		std::cout << "FR4G-TP " << _name << " attacks ";
		std::cout << target << " at range, causing ";
		std::cout << _rangedAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_rangedAttackDamage - _armorDamageReduction);
}

void 				FragTrap::meleeAttack(std::string const &target)
{
		std::cout << "FR4G-TP " << _name << " attacks ";
		std::cout << target << " at melee, causing ";
		std::cout << _melleeAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_melleeAttackDamage - _armorDamageReduction);
}
void 				FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < amount)
	{
		std::cout << "HP - zero" << std::endl;
		_hitPoints = 0;
	}
	else
		_hitPoints -= amount;
}

void 				FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints + amount > _maxHitPoints)
	{
		std::cout << "Max HP reached!" << std::endl;
		_hitPoints = _maxHitPoints;
	}
	else
		_hitPoints += amount;
}

void 				FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks_pool[5] = {"superStrongAttack", "mildAttack", "justUsualAttack", "megaAttack", "crazyAttack"};
	int randNum = rand() % 5;

	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout << "FR4G-TP " << target << " was attacked with " << attacks_pool[randNum] << " attack " << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _name << " has no energy." << std::endl;
}

