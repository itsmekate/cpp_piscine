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

Zombie*	randomChump( void )
{
	return 0;
}

int main( void ){

	Zombie* cole = new Zombie();

	cole->setName("Cole");
	cole->setType("firefighter");
	cole->announce();

	delete cole;
	return 0;
}