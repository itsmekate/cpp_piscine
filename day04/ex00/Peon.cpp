/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:00:40 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:00:42 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>

Peon::Peon(std::string n) : Victim(n)
{
	_name = n;
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon( void )
{
	return ;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon::Peon( Peon const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Peon & Peon::operator=(Peon const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		_name = rhs.getName();
	}
	return *this;
}

void Peon::getPolymorphed(void) const 
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
};

std::ostream & operator<<(std::ostream & o, Peon const & i)
{
	o << "I am " << i.getName() << " and I like otters !";

	return (o);
}

