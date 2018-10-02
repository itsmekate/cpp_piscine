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

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ){

	return;
}

ZombieEvent::~ZombieEvent( void ){

	return;
}

void	ZombieEvent::setZombieType( std::string type )
{
	type = type;
}

Zombie* newZombie(std::string name)
{
	Zombie* buddy = new Zombie;
	
	return (buddy);
}