/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kprasol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:33:03 by kprasol           #+#    #+#             */
/*   Updated: 2018/10/03 15:33:05 by kprasol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
#include <string>

class HumanB
{
	public:
		HumanB(std::string n);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &w);

	private:
		std::string _name;
		Weapon *_weapon;
};

#endif
