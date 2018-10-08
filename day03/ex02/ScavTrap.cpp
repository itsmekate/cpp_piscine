/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:29:09 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(void)
{
	srand( time( NULL ) );
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnegryPoints = 50;
	_level = 1;
	_name = "Default name";
	_melleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "Robot created" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string n)
{
	srand( time( NULL ) );
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnegryPoints = 50;
	_level = 1;
	_name = n;
	_melleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "Robot ScavTrap created" << std::endl;
	return ;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "Robot ScavTrap destroyed" << std::endl;
	return ;
}
ScavTrap::ScavTrap(const ScavTrap& src)
{
	*this = src;
	return ;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
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

void 		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challanges_pool[5] = {"crunchesChallenge", "plankChallange", "10kmRunChallenge", "21kmRunChallenge", "42kmRunChallenge"};
	int randNum = rand() % 5;

	if (_energyPoints >= 25)
	{
		_energyPoints -= 25;
		std::cout << "FR4G-TP " << target << " was challenged with " << challanges_pool[randNum] << " challenge " << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _name << " has no energy." << std::endl;
}

void 			ScavTrap::rangedAttack(std::string const & target)
{
		std::cout << "Scav TRAP " << _name << " attacks ";
		std::cout << target << " at range, causing ";
		std::cout << _rangedAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_rangedAttackDamage - _armorDamageReduction);
}

void 			ScavTrap::meleeAttack(std::string const &target)
{
		std::cout << "Scav TRAP " << _name << " attacks ";
		std::cout << target << " at melee, causing ";
		std::cout << _melleeAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_melleeAttackDamage - _armorDamageReduction);
}
