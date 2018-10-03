/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:59:05 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 14:59:06 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <iostream>

Brain::Brain( void ){
	std::cout << "Brain started lifecycle" << std::endl;
	return ;
}
Brain::~Brain( void ){
	std::cout << "Brain ended lifecycle" << std::endl;
	return ;
}
std::string Brain::identify(void) const{

	std::stringstream address;
	address << this;
	return (address.str());
}