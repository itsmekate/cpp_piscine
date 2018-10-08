/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:51:07 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/05 15:51:09 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap(void)
{
	srand( time( NULL ) );
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnegryPoints = 120;
	_level = 1;
	_name = "Default name";
	_melleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "NinjaTrap Robot created" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string n)
{
	srand( time( NULL ) );
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnegryPoints = 120;
	_level = 1;
	_name = n;
	_melleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "NinjaTrap Robot created" << std::endl;
	return ;
}
NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap Robot destroyed" << std::endl;
	return ;
}
NinjaTrap::NinjaTrap(const NinjaTrap& src)
{
	*this = src;
	return ;
}
NinjaTrap& NinjaTrap::operator = (const NinjaTrap& rhs)
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

void 		NinjaTrap::ninjaShoebox(ClapTrap ct)
{
	std::cout << "       _                                      " << std::endl;
	std::cout << "      | |               _                     " << std::endl;
	std::cout << "  ____| | ____ ____    | |_   ____ ____ ____  " << std::endl;
	std::cout << " / ___) |/ _  |  _ \\   |  _) / ___) _  |  _ \\ " << std::endl;
	std::cout << "( (___| ( ( | | | | |  | |__| |  ( ( | | | | |" << std::endl;
	std::cout << " \\____)_|\\_||_| ||_/    \\___)_|   \\_||_| ||_/ " << std::endl;
	std::cout << "              |_|                      |_|    " << std::endl;
    std::cout << ct.getName() << std::endl;
}

void 		NinjaTrap::ninjaShoebox(FragTrap ft)
{
	std::cout << "  ___                                          " << std::endl;
	std::cout << " / __)                   _                     " << std::endl;
	std::cout << "| |__ ____ ____  ____   | |_   ____ ____ ____  " << std::endl;
	std::cout << "|  __) ___) _  |/ _  |  |  _) / ___) _  |  _ \\ " << std::endl;
	std::cout << "| | | |  ( ( | ( ( | |  | |__| |  ( ( | | | | |" << std::endl;
	std::cout << "|_| |_|   \\_||_|\\_|| |   \\___)_|   \\_||_| ||_/ " << std::endl;
	std::cout << "               (_____|                  |_|    " << std::endl;
    std::cout << ft.getName() << std::endl;
}

void 		NinjaTrap::ninjaShoebox(ScavTrap st)
{
	std::cout << "                          _                     " << std::endl;
	std::cout << "  ___  ____ ____ _   _   | |_   ____ ____ ____  " << std::endl;
	std::cout << " /___)/ ___) _  | | | |  |  _) / ___) _  |  _ \\ " << std::endl;
	std::cout << "|___ ( (__( ( | |\\ V /   | |__| |  ( ( | | | | |" << std::endl;
	std::cout << "(___/ \\____)_||_| \\_/     \\___)_|   \\_||_| ||_/ " << std::endl;
	std::cout << "                                         |_|    " << std::endl;
  	std::cout << st.getName() << std::endl;
}

void 		NinjaTrap::ninjaShoebox(NinjaTrap nt)
{
	std::cout << "       _        _                                " << std::endl;
	std::cout << "      (_)      (_)         _                     " << std::endl;
	std::cout << " ____  _ ____   _  ____   | |_   ____ ____ ____  " << std::endl;
	std::cout << "|  _ \\| |  _ \\ | |/ _  |  |  _) / ___) _  |  _ \\ " << std::endl;
	std::cout << "| | | | | | | || ( ( | |  | |__| |  ( ( | | | | |" << std::endl;
	std::cout << "|_| |_|_|_| |_|| |\\_||_|   \\___)_|   \\_||_| ||_/ " << std::endl;
	std::cout << "             (__/                         |_|    " << std::endl;
	std::cout << nt.getName() << std::endl;
}

void 			NinjaTrap::rangedAttack(std::string const & target)
{
		std::cout << "NINJA TRAP " << _name << " attacks ";
		std::cout << target << " at range, causing ";
		std::cout << _rangedAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_rangedAttackDamage - _armorDamageReduction);
}

void 			NinjaTrap::meleeAttack(std::string const &target)
{
		std::cout << "NINJA TRAP " << _name << " attacks ";
		std::cout << target << " at melee, causing ";
		std::cout << _melleeAttackDamage << " points of damage !" << std::endl;
		_hitPoints -= (_melleeAttackDamage - _armorDamageReduction);
}