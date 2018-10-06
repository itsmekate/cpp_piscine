/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:00:27 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:00:29 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <string>
#include <iostream>

Victim::Victim(std::string n)
{
	_name = n;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
	return ;
}

Victim::Victim( void )
{
	return ;
}

Victim::~Victim( void )
{
	std::cout << "Victim "<< _name <<" just died for no apparent reason !" << std::endl;
	return ;
}

Victim::Victim( Victim const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Victim & Victim::operator=(Victim const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		_name = rhs.getName();
	}
	return *this;
}

std::string Victim::getName(void) const { return _name; };

void Victim::getPolymorphed(void) const 
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
};

std::ostream & operator<<(std::ostream & o, Victim const & i)
{
	o << "I am " << i.getName() << " and I like otters !" << std::endl;;

	return (o);
}
