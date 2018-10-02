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

	std::cout << "Zombie " << _name << " was born!" << std::endl;
	return;
}

Zombie::~Zombie( void ){

	std::cout << "Zombie " << _name << " died!" << std::endl;
	return;
}

void	Zombie::setName( std::string n)
{
	_name = n;
}

void	Zombie::setType( std::string t)
{
	_type = t;
}

void	Zombie::announce( void ) const {
	std::cout << "<" << _name << "(" << _type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return;
}