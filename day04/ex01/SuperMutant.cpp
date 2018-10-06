/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:54:40 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 12:54:42 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant( void )
{
	_type = "Super Mutant";
	_hp = 170;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

// SuperMutant::SuperMutant( int hp, std::string const & type)
// {
// 	_hp = hp;
// 	_type = type;
// 	std::cout << "Gaaah. Me want smash heads !" << std::endl;
// 	return ;
// }

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		_hp = rhs.getHP();
		_type = rhs.getType();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, SuperMutant const & i)
{
	o << i.getType();
	return (o);
}

void SuperMutant::takeDamage(int damage)
{
	if (_hp < (damage - 3))
		std::cout << "can't damage, no hp" << std::endl;
	else
		_hp -= (damage - 3) ;
}

