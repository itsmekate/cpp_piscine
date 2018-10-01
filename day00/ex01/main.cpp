/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 13:17:36 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/01 13:17:38 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include "Contact.class.hpp"


void	otput_information(int j, Contact c[8])
{
	std::cout << "First name:" << c[j].first_name << std::endl;
	std::cout << "Last name:" << c[j].last_name << std::endl;
	std::cout << "Nickname:" << c[j].nickname << std::endl;
	std::cout << "Login:" << c[j].login << std::endl;
	std::cout << "Postal_address:" << c[j].postal_address << std::endl;
	std::cout << "Email address:" << c[j].email_address << std::endl;
	std::cout << "Phone number:" << c[j].phone_number << std::endl;
	std::cout << "Birthday date:" << c[j].birthday_date << std::endl;
	std::cout << "Favorite meal:" << c[j].favorite_meal << std::endl;
	std::cout << "Underwear color:" << c[j].underwear_color << std::endl;
	std::cout << "Darkest secret:" << c[j].darkest_secret << std::endl;
}

void	change_size(std::string s)
{
	if (s.length() < 10)
	{
		std::cout << s;
		for(int i = s.length(); i < 10; i++)
			std::cout << " ";
	}
	else if (s.length() > 10)
	{
		for(int i = 0; i < 9; i++)
			std::cout << s[i];
		std::cout << ".";
	}
}

void	search(Contact c[8], int i)
{
	int j = 0;
	std::string js;

	std::cout << "\x1B[32m" << "index     |first_name|last_name |nickname  |" << "\x1B[0m" <<std::endl;
	while (j < i)
	{
		js = std::to_string(j);
		change_size(js);
		std::cout << "|";
		change_size(c[j].last_name);
		std::cout << "|";
		change_size(c[j].first_name);
		std::cout << "|";
		change_size(c[j].nickname);
		std::cout << "|";
		std::cout << std::endl;
		j++;
	}
	std::cout << "Please choose contact to display:";
	std::cin >> j;
	while (j > i)
	{
		std::cout << "Please choose contact to display:";
		std::cin >> j;
		if (j < i)
			break;
	}
	otput_information(j, c);
}

int main( void )
{
	int i = 0;
	std::string	input;
	Contact c[8];

	while (1)
	{
		std::cout << "\x1B[1m" << "Please enter command name:" << "\033[0m" << std::endl;
		std::cin >> input;
		
		if (i == 8)
			std::cout << "You've reached max number of contacts" << std::endl;
		if (input == "SEARCH")
			search(c, i);
		else if (input == "EXIT")
			break;
		else if (input == "ADD" && i != 8)
		{
			c[i].add();
			i++;
		}
		else
			std::cout << "Avaliable commands: ADD/SEARCH/EXIT" << std::endl;
	}
	
	return 0;
}