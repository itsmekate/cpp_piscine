/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:49:14 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:49:16 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ZombieEvent.hpp"

int main( void ){

	ZombieEvent event;

	event.setZombieType("scary");
	Zombie *z1 = event.newZombie("Roma");

	event.randomChump();
	z1->announce();

	delete z1;
	return 0;
}