/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:49:27 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:49:29 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ){
}

ZombieEvent::~ZombieEvent( void ){
}

void	ZombieEvent::setZombieType( std::string type )
{
	this->_ZombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* buddy = new Zombie(name, _ZombieType);
	return (buddy);
}

void	ZombieEvent::randomChump( void )
{
	Zombie new_zombie = Zombie(Zombie::randomName(), _ZombieType);
	new_zombie.announce();
}