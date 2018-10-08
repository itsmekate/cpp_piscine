/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:09:22 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 19:09:24 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack called" << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack called" << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
	std::cout << "intimidatingShout called" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	
}