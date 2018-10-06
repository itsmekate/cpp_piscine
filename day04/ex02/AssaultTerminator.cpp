/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:29:59 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 16:30:03 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void ){
	std::cout << "* teleports from space *" <<std::endl;
}

AssaultTerminator::~AssaultTerminator( void ){
	std::cout << "I’ll be back ..." <<std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src)
{
	*this = src;
	return ;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" <<std::endl;
}
void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" <<std::endl;
}
void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" <<std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *clone = new AssaultTerminator();
	return clone;	
}