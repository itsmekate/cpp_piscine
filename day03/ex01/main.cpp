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


#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int	main(void)
{

	FragTrap joe = FragTrap("Joe");
	ScavTrap bonnie = ScavTrap("Bonnie");

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

	std::cout << "ScavTrap Robot is named: " << bonnie.getName() << std::endl;
	std::cout << "ScavTrap Robots' level is: " << bonnie.getLevel() << std::endl;
	std::cout << "ScavTrap Robots' energy: " << bonnie.getEnergyPoints() << std::endl;
	std::cout << "ScavTrap Robots' HP: " << bonnie.getHitPoints() << std::endl;
	
	bonnie.rangedAttack("Andy");
	bonnie.challengeNewcomer("Mark");
	bonnie.challengeNewcomer("Angelina");

	std::cout << "ScavTrap Robots' level is: : " << bonnie.getLevel() << std::endl;
	std::cout << "ScavTrap Robots' energy: " << bonnie.getEnergyPoints() << std::endl;
	std::cout << "ScavTrap Robots' HP: " << bonnie.getHitPoints() << std::endl;

	bonnie.beRepaired(100);
	bonnie.takeDamage(120);

	return 0;
}
