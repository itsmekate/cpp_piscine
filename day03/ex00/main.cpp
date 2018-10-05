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
#include <string>
#include <iostream>

int	main(void)
{

	FragTrap joe = FragTrap("Joe");

	std::cout << "Robot is named: " << joe.getName() << std::endl;
	std::cout << "Robots' level is: " << joe.getLevel() << std::endl;
	std::cout << "Robots' energy: " << joe.getEnergyPoints() << std::endl;
	std::cout << "Robots' HP: " << joe.getHitPoints() << std::endl;
	
	joe.rangedAttack("Andy");
	joe.vaulthunter_dot_exe("Mark");
	joe.vaulthunter_dot_exe("Angelina");

	std::cout << "Robots' level is: : " << joe.getLevel() << std::endl;
	std::cout << "Robots' energy: " << joe.getEnergyPoints() << std::endl;
	std::cout << "Robots' HP: " << joe.getHitPoints() << std::endl;

	joe.beRepaired(100);
	joe.takeDamage(120);

	return 0;
}
