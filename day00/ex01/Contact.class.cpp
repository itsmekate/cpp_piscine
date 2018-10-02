/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:42:11 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/01 12:42:14 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include <string>

Contact::Contact( void ) {

	return;

}

Contact::~Contact( void ) {

	return;
}

void	Contact::add( void ) {

	std::cout << "Enter first name:";
	std::cin >> this->first_name;

	std::cout << "Enter last name:";
	std::cin >> this->last_name;

	std::cout << "Enter nickname:";
	std::cin >> this->nickname;

	std::cout << "Enter login:";
	std::cin >> this->login;

	std::cout << "Enter postal address:";
	std::cin >> this->postal_address;

	std::cout << "Enter email address:";
	std::cin >> this->email_address;

	std::cout << "Enter phone number:";
	std::cin >> this->phone_number;

	std::cout << "Enter birthday date:";
	std::cin >> this->birthday_date;

	std::cout << "Enter favorite meal:";
	std::cin >> this->favorite_meal;

	std::cout << "Enter underwear color:";
	std::cin >> this->underwear_color;

	std::cout << "Enter darkest secret:";
	std::cin >> this->darkest_secret;

	return;
}