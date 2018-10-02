/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:04:08 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/02 18:04:10 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string pony_name, int age ) : name(pony_name) {

	std::cout << name << " is avaliable!" << std::endl;
	std::cout << "This pony is " << age << " years old." << std::endl;
	return;
}

Pony::~Pony( void ) {
	std::cout << this->name << " is not avaliable anymore!" << std::endl;
	return;
}

void	Pony::sound( void ) {
	std::cout << "Hello, I'm a pony!" << std::endl;
}