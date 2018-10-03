/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:58:55 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 14:58:56 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ){
	std::cout << "Human was born" << std::endl;
	return ;
}

Human::~Human( void ){
	std::cout << "Human died" << std::endl;
	return ;
}

std::string	Human::identify( void ){
	return (brain.identify());
}

Brain const	&Human::getBrain( void) {
	return (brain);
}