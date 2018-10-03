/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:27:19 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 14:27:23 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand( time( NULL ) );
	_ZombieHordePtr = new Zombie[n];
	_hordeSize = n;
	std::cout << "Zombie Horde containing " << n << " zombies was created" << std::endl ;
	return ;
}

ZombieHorde::~ZombieHorde( void )
{
	std::cout << "Zombie Horde was destroyed" << std::endl;
	delete [] _ZombieHordePtr;
	return ;
}

void ZombieHorde::announce( void )
{
	for (int i = 0; i < _hordeSize; ++i)
	{
		_ZombieHordePtr[i].Zombie::announce();
	}
}