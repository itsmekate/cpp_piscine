/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:42:17 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/05 18:42:18 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap(void)
{
	srand( time( NULL ) );
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = __;
	_maxEnegryPoints = 100;
	_level = 1;
	_name = "Default name";
	_melleeAttackDamage = __;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "SuperTrap Robot created" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string n)
{
	srand( time( NULL ) );
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = __;
	_maxEnegryPoints = 100;
	_level = 1;
	_name = n;
	_melleeAttackDamage = __;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "SuperTrap Robot created" << std::endl;
	return ;
}
SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap Robot destroyed" << std::endl;
	return ;
}
SuperTrap::SuperTrap(const SuperTrap& src)
{
	*this = src;
	return ;
}
SuperTrap& SuperTrap::operator = (const SuperTrap& rhs)
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

void 	SuperTrap::rangedAttack(std::string const & target)
{
		std::cout << "FRAG TRAP " << _name << " attacks ";
		std::cout << target << " at range, causing ";
		std::cout << _rangedAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_rangedAttackDamage - _armorDamageReduction);
}

void 	SuperTrap::meleeAttack(std::string const &target)
{
		std::cout << "NINJA TRAP " << _name << " attacks ";
		std::cout << target << " at melee, causing ";
		std::cout << _melleeAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_melleeAttackDamage - _armorDamageReduction);
}
