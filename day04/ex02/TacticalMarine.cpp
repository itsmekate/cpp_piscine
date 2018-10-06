/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:29:45 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/06 16:29:46 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void ){
	std::cout << "Tactical Marine ready for battle" <<std::endl;
}

TacticalMarine::~TacticalMarine( void ){
	std::cout << "Aaargh ..." <<std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src)
{
	*this = src;
	return ;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" <<std::endl;
}
void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" <<std::endl;
}
void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" <<std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *clone = new TacticalMarine();
	return clone;	
}