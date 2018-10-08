/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:29:16 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:17 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

int	main(void)
{

	FragTrap joe = SuperTrap("Joe");

	std::cout << "FragTrap Robot is named: " << joe.getName() << std::endl;
	std::cout << "FragTrap Robots' level is: " << joe.getLevel() << std::endl;
	std::cout << "FragTrap Robots' energy: " << joe.getEnergyPoints() << std::endl;
	std::cout << "FragTrap Robots' HP: " << joe.getHitPoints() << std::endl;
	
	joe.rangedAttack("Andy");
	joe.vaulthunter_dot_exe("Mark");
	joe.vaulthunter_dot_exe("Angelina");

	std::cout << "FragTrap Robots' level is: : " << joe.getLevel() << std::endl;
	std::cout << "FragTrap Robots' energy: " << joe.getEnergyPoints() << std::endl;
	std::cout << "FragTrap Robots' HP: " << joe.getHitPoints() << std::endl;

	joe.beRepaired(100);
	joe.takeDamage(120);

	return 0;
}
