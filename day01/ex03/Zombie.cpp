/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:48:59 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:49:00 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie( void ){

	_name = randomName();
	std::cout << "Zombie " << _name << " avaliable." << std::endl;
	return ;
}

Zombie::~Zombie( void ){

	std::cout << "Zombie " << _name << " died!" << std::endl;
	return;
}

Zombie::Zombie(std::string n, std::string t)
{
	this->_name = n;
	this->_type = t;
	std::cout << "Zombie " << _name << " avaliable." << std::endl;
}

void	Zombie::announce( void ) const {

	std::cout << "<" << _name << "(" << _type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return;
}

std::string	Zombie::randomName( void )
{
	std::string names[6] = {"Mark", "Dan", "Julia", "Robert", "Anna", "Kurt"};
	int randNum = rand() % 6;

	return (names[randNum]);
}