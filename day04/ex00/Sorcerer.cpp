/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:00:13 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:00:14 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>

Sorcerer::Sorcerer(std::string n, std::string t)
{
	_name = n;
	_title = t;
	std::cout << _name <<", " << _title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( void )
{
	return ;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << _name <<", " << _title;
	std::cout << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		_name = rhs.getName();
		_title = rhs.getTitle();
	}
	return *this;
}

std::string Sorcerer::getName(void) const { return _name; };
std::string Sorcerer::getTitle(void) const { return _title; };

std::ostream & operator<<(std::ostream & o, Sorcerer const & i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !" << std::endl;;
	return (o);
}

void Sorcerer::polymorph(Victim const &a) const
{
	a.getPolymorphed();
}